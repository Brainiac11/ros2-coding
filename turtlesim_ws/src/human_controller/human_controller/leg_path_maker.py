from human_controller.human_controller import SineCurveInterpolationPath
import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node

from human_interfaces.action import GaitPath # type: ignore

class LegPathMaker(Node):
    def __init__(self):
        super().__init__('leg_path_maker')
        self._action_server = ActionServer(
            self,
            GaitPath,
            'sine_curve_interpolation_path',
            self.execute_callback)
    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')
        
        goal_handle.succeed()
        return GaitPath.Result()