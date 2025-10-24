
import math
import random

import rclpy
from ackermann_msgs.msg import AckermannDriveStamped
from geometry_msgs.msg import Twist
from std_msgs.msg import Float64
from rclpy.node import Node

class KeyInput(Node):
    def __init__(self):
        super().__init__('key_input')
        self.declare_parameter('key_value', 0.0)

        self._key_value_subscription = self.create_subscription(Twist, '/cmd_vel', self._key_value_callback, 1)
        self._key_value_publisher = self.create_publisher(Float64, '/key_value', qos_profile=1)
        self.create_timer(1, self._key_value_controller)

        self._key_value = self.get_parameter("key_value").value

        self.get_logger().info(f"Key Value: {self._key_value}")

    def _key_value_callback(self, key_value: Twist) -> None:
        self._key_value = key_value
        print(self._key_value)

    def _key_value_controller(self) -> Float64:


        self._key_value_publisher.publish(Float64(data=x))
        return Float64(data=x)