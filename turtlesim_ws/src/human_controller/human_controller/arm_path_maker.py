from .SineCurveInterpolationPath import SineInterpolationPath
import rclpy
from rclpy.action import ActionServer, ActionClient
from rclpy.node import Node
from rclpy.action.server import ServerGoalHandle
from rclpy.executors import MultiThreadedExecutor
from std_msgs.msg import Float64MultiArray
import numpy as np
from geometry_msgs.msg import Pose
from moveit_msgs.action import MoveGroup
from moveit_msgs.msg import RobotState
from moveit_msgs.srv import GetCartesianPath
from sensor_msgs.msg import JointState
from human_interfaces.action import GaitPath


class ArmPathMaker(Node):
    def __init__(self):
        super().__init__("arm_path_maker")
        
        self.current_joint_state = None
        self.joint_state_sub = self.create_subscription(
            JointState,
            '/joint_states',
            self.joint_state_callback,
            10
        )
        
        self.cartesian_path_client = self.create_client(
            GetCartesianPath, 
            "/compute_cartesian_path"
        )
        
        self.move_group_client = ActionClient(
            self, 
            MoveGroup, 
            "/move_action"
        )
        
        while not self.cartesian_path_client.wait_for_service(timeout_sec=1.0):
            pass
        
        self._action_server = ActionServer(
            node=self,
            action_type=GaitPath,
            action_name="arm_sine_path",
            execute_callback=self.execute_callback,
        )
    
    def joint_state_callback(self, msg):
        self.current_joint_state = msg

    def execute_callback(self, goal_handle: ServerGoalHandle):
        try:
            interpolator = SineInterpolationPath(
                start_point=np.array(goal_handle.request.start_point[:2]),
                end_point=np.array(goal_handle.request.end_point[:2]),
                interpolation_time_count=goal_handle.request.interpolation_time_count,
                is_reversed=goal_handle.request.is_reversed,
                height=goal_handle.request.height,
            )
        except Exception:
            goal_handle.abort()
            return GaitPath.Result()
        
        try:
            path_2d = interpolator.interpolate_with_time()
        except Exception:
            goal_handle.abort()
            return GaitPath.Result()
        
        z_coord = goal_handle.request.start_point[2] if len(goal_handle.request.start_point) > 2 else 0.4
        
        waypoints = []
        for p in path_2d:
            pose = Pose()
            pose.position.x = float(p[0])
            pose.position.y = float(p[1])
            pose.position.z = float(z_coord)
            pose.orientation.w = 0.0
            pose.orientation.x = 1.0
            pose.orientation.y = 0.0
            pose.orientation.z = 0.0
            waypoints.append(pose)
        
        if self.current_joint_state is None:
            for _ in range(10):
                rclpy.spin_once(self, timeout_sec=0.1)
                if self.current_joint_state is not None:
                    break
            
            if self.current_joint_state is None:
                goal_handle.abort()
                return GaitPath.Result()
        
        request = GetCartesianPath.Request()
        request.header.frame_id = "panda_link0"
        request.header.stamp = self.get_clock().now().to_msg()
        request.start_state.joint_state = self.current_joint_state
        request.start_state.is_diff = False
        request.group_name = "panda_arm"
        request.link_name = "panda_link8"
        request.waypoints = waypoints
        request.max_step = 0.01
        request.jump_threshold = 0.0
        request.avoid_collisions = True
        
        try:
            response = self.cartesian_path_client.call(request)
            
            if response is None or response.fraction < 0.1:
                goal_handle.abort()
                return GaitPath.Result()
            
            result = GaitPath.Result()
            trajectory = response.solution
            
            if trajectory is None or not hasattr(trajectory, 'joint_trajectory'):
                goal_handle.abort()
                return GaitPath.Result()
            
            for i, point in enumerate(trajectory.joint_trajectory.points):
                joint_angles = Float64MultiArray()
                joint_angles.data = list(point.positions)
                result.joint_angles.append(joint_angles)
                
                if i % 10 == 0:
                    feedback = GaitPath.Feedback()
                    feedback.partial_joint_angles = [joint_angles]
                    goal_handle.publish_feedback(feedback)
            
            goal_handle.succeed()
            return result
            
        except Exception:
            goal_handle.abort()
            return GaitPath.Result()


def main(args=None):
    rclpy.init(args=args)
    arm_path_maker = ArmPathMaker()
    executor = MultiThreadedExecutor()
    executor.add_node(arm_path_maker)
    try:
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        arm_path_maker.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
