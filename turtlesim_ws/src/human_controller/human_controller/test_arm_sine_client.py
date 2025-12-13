#!/usr/bin/env python3

import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from rclpy.callback_groups import ReentrantCallbackGroup
from human_interfaces.action import GaitPath
from moveit_msgs.action import MoveGroup
from moveit_msgs.msg import (
    MotionPlanRequest,
    Constraints,
    JointConstraint,
    RobotTrajectory,
    PlanningOptions,
)
from sensor_msgs.msg import JointState
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
import sys


class ArmPathClient(Node):
    def __init__(self):
        super().__init__('arm_path_client')
        self.callback_group = ReentrantCallbackGroup()
        self._gait_action_client = ActionClient(
            self, 
            GaitPath, 
            'arm_sine_path',
            callback_group=self.callback_group
        )
        self._move_group_client = ActionClient(
            self,
            MoveGroup,
            '/move_action',
            callback_group=self.callback_group
        )
        self.current_joint_state = None
        self.joint_state_sub = self.create_subscription(
            JointState,
            '/joint_states',
            self.joint_state_callback,
            10
        )
        self.planned_trajectory = None
    
    def joint_state_callback(self, msg):
        self.current_joint_state = msg
    
    def send_goal(self, start_point, end_point, height, num_points=50, is_reversed=False, execute=True):
        self.execute_trajectory = execute
        goal_msg = GaitPath.Goal()
        goal_msg.start_point = start_point
        goal_msg.end_point = end_point
        goal_msg.height = height
        goal_msg.interpolation_time_count = num_points
        goal_msg.is_reversed = is_reversed
        self._gait_action_client.wait_for_server()
        self._send_goal_future = self._gait_action_client.send_goal_async(
            goal_msg,
            feedback_callback=self.gait_feedback_callback
        )
        self._send_goal_future.add_done_callback(self.gait_goal_response_callback)
    
    def gait_goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            rclpy.shutdown()
            return
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.gait_get_result_callback)
    
    def gait_get_result_callback(self, future):
        result = future.result().result
        if len(result.joint_angles) == 0:
            rclpy.shutdown()
            return
        
        trajectory = JointTrajectory()
        trajectory.joint_names = [
            'panda_joint1', 'panda_joint2', 'panda_joint3', 'panda_joint4',
            'panda_joint5', 'panda_joint6', 'panda_joint7'
        ]
        
        duration_per_point = 0.1
        for i, joint_angles in enumerate(result.joint_angles):
            point = JointTrajectoryPoint()
            point.positions = list(joint_angles.data)
            point.time_from_start.sec = int(i * duration_per_point)
            point.time_from_start.nanosec = int((i * duration_per_point % 1) * 1e9)
            trajectory.points.append(point)
        
        self.planned_trajectory = trajectory
        
        if self.execute_trajectory:
            self.execute_moveit_trajectory()
        else:
            rclpy.shutdown()
    
    def execute_moveit_trajectory(self):
        if self.planned_trajectory is None:
            rclpy.shutdown()
            return
        self.publish_trajectory_to_controller()
    
    def publish_trajectory_to_controller(self):
        from control_msgs.action import FollowJointTrajectory
        controller_client = ActionClient(
            self,
            FollowJointTrajectory,
            '/panda_arm_controller/follow_joint_trajectory',
            callback_group=self.callback_group
        )
        if not controller_client.wait_for_server(timeout_sec=5.0):
            rclpy.shutdown()
            return
        goal = FollowJointTrajectory.Goal()
        goal.trajectory = self.planned_trajectory
        send_goal_future = controller_client.send_goal_async(
            goal,
            feedback_callback=self.controller_feedback_callback
        )
        send_goal_future.add_done_callback(self.controller_goal_response_callback)
        self.controller_client = controller_client
    
    def controller_goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            rclpy.shutdown()
            return
        result_future = goal_handle.get_result_async()
        result_future.add_done_callback(self.controller_result_callback)
    
    def controller_result_callback(self, future):
        rclpy.shutdown()
    
    def controller_feedback_callback(self, feedback_msg):
        pass
    
    def gait_feedback_callback(self, feedback_msg):
        pass


def main(args=None):
    rclpy.init(args=args)
    client = ArmPathClient()
    import time
    time.sleep(1.0)
    
    start_point = [0.5, -0.15, 0.3]
    end_point = [0.5, 0.15, 0.3]
    height = 0.05
    num_points = 30
    
    client.send_goal(
        start_point=start_point,
        end_point=end_point,
        height=height,
        num_points=num_points,
        is_reversed=False,
        execute=True
    )
    rclpy.spin(client)


if __name__ == '__main__':
    main()
