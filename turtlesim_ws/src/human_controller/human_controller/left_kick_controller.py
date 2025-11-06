import math
import random

import rclpy
from ackermann_msgs.msg import AckermannDriveStamped
from geometry_msgs.msg import Twist
from std_msgs.msg import Float64
from std_msgs.msg import Bool
from human_interfaces.msg import KickCommand
from human_controller.kick_constants import KickConstants
from rclpy.node import Node


class KickController(Node):
    def __init__(self):
        super().__init__('hip_controller')
        self.declare_parameter('hip_roll', 0.0)
        self.declare_parameter('hip_yaw_pitch', 0.0)
        self.declare_parameter('hip_pitch', 0.0)
        self.declare_parameter('knee_pitch', 0.0)
        self.declare_parameter('ankle_pitch', 0.0)
        self.declare_parameter('should_kick', 0.0)

        self._knee_pitch_subscription = self.create_subscription(Float64, '/LKneePitch', self._knee_pitch_callback, 1)
        self._ankle_pitch_subscription = self.create_subscription(Float64, '/LAnklePitch', self._ankle_pitch_callback, 1)
        self._hip_pitch_subscription = self.create_subscription(Float64, '/LHipPitch', self._hip_pitch_callback, 1)

        self._knee_pitch_publisher = self.create_publisher(Float64, '/LKneePitch', qos_profile=1)
        self._ankle_pitch_publisher = self.create_publisher(Float64, '/LAnklePitch', qos_profile=1)
        self._hip_pitch_publisher = self.create_publisher(Float64, '/LHipPitch', qos_profile=1)

        self._should_kick_subscription = self.create_subscription(KickCommand, '/should_kick', self._should_kick_callback, 1)

        self.create_timer(0.1, self._kick)


        self._hip_roll = Float64(data=self.get_parameter("hip_roll").value)
        self._hip_yaw_pitch = Float64(data=self.get_parameter("hip_yaw_pitch").value)
        self._hip_pitch = Float64(data=self.get_parameter("hip_pitch").value)
        self._knee_pitch = Float64(data=self.get_parameter("knee_pitch").value)
        self._ankle_pitch = Float64(data=self.get_parameter("ankle_pitch").value)
        self._should_kick = KickCommand(data=self.get_parameter("should_kick").value)

        self.get_logger().info(f"Hip Roll: {self._hip_roll}")
    def _kick(self) -> None:
        if self._should_kick.should_kick:
            self._hip_pitch_controller(KickConstants.HIP_PITCH_KICK_ANGLE)
            self._ankle_pitch_controller(KickConstants.ANKLE_PITCH_KICK_ANGLE)
            self._knee_pitch_controller(KickConstants.KNEE_PITCH_KICK_ANGLE)
        else:
            self._hip_pitch_controller(KickConstants.HIP_PITCH_START_ANGLE)
            self._ankle_pitch_controller(KickConstants.ANKLE_PITCH_START_ANGLE)
            self._knee_pitch_controller(KickConstants.KNEE_PITCH_START_ANGLE)

    def _hip_roll_callback(self, roll: Float64) -> None:
        self._hip_roll = roll
        print(self._hip_roll)
    def _hip_yaw_pitch_callback(self, yaw_pitch: Float64) -> None:
        self._hip_yaw_pitch = yaw_pitch
        print(self._hip_yaw_pitch)
    def _hip_pitch_callback(self, pitch: Float64) -> None:
        self._hip_pitch = pitch
        print(self._hip_pitch)
    def _knee_pitch_callback(self, pitch: Float64) -> None:
        self._knee_pitch = pitch
        print(self._knee_pitch)
    def _ankle_pitch_callback(self, pitch: Float64) -> None:
        self._ankle_pitch = pitch
        print(self._ankle_pitch)
    def _should_kick_callback(self, should_kick: KickCommand) -> None:
        self._should_kick = should_kick
        print(self._should_kick)
    def _knee_pitch_controller(self, x: float) -> Float64:
        self._knee_pitch_publisher.publish(Float64(data=x))
        return Float64(data=x)

    def _ankle_pitch_controller(self, x: float) -> Float64:
        self._ankle_pitch_publisher.publish(Float64(data=x))
        return Float64(data=x)
    def _hip_pitch_controller(self, x: float) -> Float64:
        self._hip_pitch_publisher.publish(Float64(data=x))
        return Float64(data=x)
    
    def _increment(self, initial: Float64, increment: float) -> float:
        x: float = initial.data
        return x+increment
    def _increment_float(self, initial: float, increment: float) -> float:
        return initial+increment
    
def main(args=None):
    rclpy.init(args=args)

    kick_controller = KickController()

    rclpy.spin(kick_controller)
    kick_controller.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()