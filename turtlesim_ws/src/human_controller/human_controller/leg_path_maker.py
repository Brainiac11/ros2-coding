from .SineCurveInterpolationPath import SineInterpolationPath
from .InverseKinematicSolver import InverseKinematicsSolver
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
        points.data = goal_handle.request.start_point
        goal_handle.publish_feedback(
            feedback=GaitPath.Feedback(partial_joint_angles=[points])
        )

        interpolator: SineInterpolationPath = SineInterpolationPath(
            start_point=np.array(goal_handle.request.start_point),
            end_point=np.array(goal_handle.request.end_point),
            interpolation_time_count=goal_handle.request.interpolation_time_count,
            is_reversed=goal_handle.request.is_reversed,
            height=goal_handle.request.height,
        )
        self.get_logger().info("Starting interpolation...")
        self.get_logger().info(
            f"Start Point: {interpolator._start_point}, End Point: {interpolator._end_point}"
        )
        path = interpolator.interpolate_with_time()
        self.get_logger().info("Interpolation complete.")
        solver: InverseKinematicsSolver = InverseKinematicsSolver(
            link1_length=50.0, link2_length=50.0, link3_length=20.0
        )
        goal_handle.succeed()
        result = GaitPath.Result()
        for p in path:
            point = Float64MultiArray()
            solver._target_point = np.array([p[0], p[1], 0.0])
            joint_angles = solver
            point.data = joint_angles.tolist()
            result.joint_angles.append(point)
        return result


def main(args=None):
    rclpy.init(args=args)

    leg_path_maker = LegPathMaker()

    rclpy.spin(leg_path_maker)


if __name__ == "__main__":
    main()
