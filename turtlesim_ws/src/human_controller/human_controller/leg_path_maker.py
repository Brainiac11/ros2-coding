from human_controller import SineCurveInterpolationPath
import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from rclpy.action.server import ServerGoalHandle
from typing import cast
from std_msgs.msg import Float64MultiArray
import numpy as np
from numpy.typing import NDArray

from human_interfaces.action import GaitPath  # type: ignore


class LegPathMaker(Node):
    def __init__(self):
        super().__init__("leg_path_maker")
        self._action_server = ActionServer(
            node=self,
            action_type=GaitPath,
            action_name="leg_gait_sequence_sine",
            execute_callback=self.execute_callback,
        )
        print("GOT IT")

    def execute_callback(self, goal_handle: ServerGoalHandle):
        self.get_logger().info("Executing goal...")
        points: Float64MultiArray = Float64MultiArray()
        points.data = [0,1,2,3,4,5]
        goal_handle.publish_feedback(feedback=GaitPath.Feedback(partial_joint_angles=[points]))
        
        interpolator: SineCurveInterpolationPath = SineCurveInterpolationPath(start_point = np.array([0.0,0.0]), end_point = np.array([40,0]), interpolation_time_count=40, is_reversed=False, height=50.0)
        self.get_logger().info("Starting interpolation...")
        self.get_logger().info(f"Start Point: {interpolator._start_point}, End Point: {interpolator._end_point}")
        goal_handle.succeed()
        return GaitPath.Result()
    
def main(args=None):
    rclpy.init(args=args)

    leg_path_maker = LegPathMaker()

    rclpy.spin(leg_path_maker)


if __name__ == '__main__':
    main()