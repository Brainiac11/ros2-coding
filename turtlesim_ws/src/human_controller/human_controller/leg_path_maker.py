from human_controller.human_controller import SineCurveInterpolationPath
import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from rclpy.action.server import ServerGoalHandle
from typing import cast
from std_msgs.msg import Float64MultiArray

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

    def execute_callback(self, goal_handle: ServerGoalHandle):
        self.get_logger().info("Executing goal...")
        points: Float64MultiArray = Float64MultiArray(data=[Float64MultiArray( data=[1,2,3,4]), Float64MultiArray(data=[10,10,10,10])])
        goal_handle.publish_feedback(feedback=points)
        goal_handle.succeed()
        return GaitPath.Result()
