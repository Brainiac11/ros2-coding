import math
import random

import rclpy
from geometry_msgs.msg import Twist
from std_msgs.msg import Float64
from rclpy.node import Node


class HipController(Node):
    def __init__(self):
        super().__init__("hip_controller")
        self.declare_parameter("hip_roll", 0.0)
        self.declare_parameter("hip_yaw_pitch", 0.0)
        self.declare_parameter("hip_pitch", 0.0)
        self.declare_parameter("cmd_vel", 0.0)

        self._hip_roll_subscription = self.create_subscription(
            Float64, "/LHipRoll", self._hip_roll_callback, 1
        )
        self._hip_yaw_pitch_subscription = self.create_subscription(
            Float64, "/LHipYawPitch", self._hip_yaw_pitch_callback, 1
        )
        self._cmd_vel_subscription = self.create_subscription(
            Twist, "/cmd_vel", self._cmd_vel_callback, 1
        )
        self._hip_pitch_subscription = self.create_subscription(
            Float64, "/LHipPitch", self._hip_pitch_callback, 1
        )
        self._hip_roll_publisher = self.create_publisher(
            Float64, "/LHipRoll", qos_profile=1
        )
        self._hip_yaw_pitch_publisher = self.create_publisher(
            Float64, "/LHipYawPitch", qos_profile=1
        )
        self._hip_pitch_publisher = self.create_publisher(
            Float64, "/LHipPitch", qos_profile=1
        )
        self.create_timer(0.1, self._update_leg_positions)

        self._hip_roll = Float64(data=self.get_parameter("hip_roll").value)
        self._hip_yaw_pitch = Float64(data=self.get_parameter("hip_yaw_pitch").value)
        self._hip_pitch = Float64(data=self.get_parameter("hip_pitch").value)
        self._cmd_vel = Twist(data=self.get_parameter("cmd_vel").value)

        self.get_logger().info(f"Hip Roll: {self._hip_roll}")

    def _hip_roll_callback(self, roll: Float64) -> None:
        self._hip_roll = roll
        print(self._hip_roll)

    def _hip_yaw_pitch_callback(self, yaw_pitch: Float64) -> None:
        self._hip_yaw_pitch = yaw_pitch
        print(self._hip_yaw_pitch)

    def _hip_pitch_callback(self, pitch: Float64) -> None:
        self._hip_pitch = pitch
        print(self._hip_pitch)

    def _cmd_vel_callback(self, cmd_vel: Twist) -> None:
        self._cmd_vel = cmd_vel
        print(self._cmd_vel)

    def _update_leg_positions(self) -> None:
        self._hip_roll_controller(
            self._increment(self._hip_roll, self._cmd_vel.linear.x)
        )
        self._hip_yaw_pitch_controller(
            self._increment(self._hip_yaw_pitch, self._cmd_vel.linear.y)
        )
        self._hip_pitch_controller(
            self._increment(self._hip_pitch, self._cmd_vel.linear.z)
        )

    def _hip_roll_controller(self, x: float) -> Float64:
        self._hip_roll_publisher.publish(Float64(data=x))
        return Float64(data=x)

    def _hip_yaw_pitch_controller(self, x: float) -> Float64:
        self._hip_yaw_pitch_publisher.publish(Float64(data=x))
        return Float64(data=x)

    def _hip_pitch_controller(self, x: float) -> Float64:
        self._hip_pitch_publisher.publish(Float64(data=x))
        return Float64(data=x)

    def _increment(self, initial: Float64, increment: float) -> float:
        x: float = initial.data
        return x + increment

    def _increment_float(self, initial: float, increment: float) -> float:
        return initial + increment


def main(args=None):
    rclpy.init(args=args)

    hip_controller = HipController()

    rclpy.spin(hip_controller)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    hip_controller.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
