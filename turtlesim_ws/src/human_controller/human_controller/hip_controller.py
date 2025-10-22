
import math
import random

import rclpy
from ackermann_msgs.msg import AckermannDriveStamped
from geometry_msgs.msg import Twist
from std_msgs.msg import Float64
from rclpy.node import Node


class HipController(Node):
    def __init__(self):
        super().__init__('hip_controller')
        self.declare_parameter('hip_roll', 0.0)

        self._hip_roll_subscription = self.create_subscription(Float64, '/LHipRoll', self._hip_roll_callback, 1)
        self._hip_roll_publisher = self.create_publisher(Float64, '/LHipRoll', 1)
        self.create_timer(1, self._hip_roll_controller)

        self._hip_roll = self.get_parameter("hip_roll").value

        self.get_logger().info(f"Hip Roll: {self._hip_roll}")

    def _hip_roll_callback(self, roll: Float64) -> None:
        self._hip_roll = roll
    
    def _hip_roll_controller(self) -> Float64:
        x = random.random() * 1000
        if(random.random() <= 0.5):
            x*=-1
        
        print(x)
        return Float64(data=x)
    
def main(args=None):
    rclpy.init(args=args)

    hip_controller = HipController()

    rclpy.spin(hip_controller)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    hip_controller.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()