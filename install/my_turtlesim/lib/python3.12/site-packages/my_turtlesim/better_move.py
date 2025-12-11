import sys
import rclpy
import std_msgs
from rclpy.node import Node
from geometry_msgs.msg import Twist
from geometry_msgs.msg import Vector3
from turtlesim.msg import Pose
from std_srvs.srv import Empty
from turtlesim.srv import SetPen
import pose_math

LINEAR_ACCELERATION_RATE = 0.5
ANGULAR_ACCELERATION_RATE = 0.5

class BetterMove(Node):
    def __init__(self):
        super().__init__("better_move")
        self.vel_publisher = self.create_publisher(Twist, "turtle1/cmd_vel", 10)
        self.turtle_pose = Pose()
        self.prev_pose = Pose()
        self.turtle_vel = Twist()
        self.pose_subscriber = self.create_subscription(Pose, "turtle1/pose", self.process_pose, 10)

    def process_current_vel(self):
        self.turtle_vel = pose_math

    def process_pose(self, pose: Pose):
        self.turtle_pose = pose
    def move(self, twist: Twist):
        # new_twist = Twist(linear=Vector3(x=(((twist.linear.x-self.turtle_vel.linear.x)*LINEAR_ACCELERATION_RATE)+self.turtle_vel.linear.x), y=(((twist.linear.y-self.turtle_vel.linear.y)*LINEAR_ACCELERATION_RATE)+self.turtle_vel.linear.y), z=0),angular=Vector3(x=(((twist.angular.x-self.turtle_vel.angular.x)*ANGULAR_ACCELERATION_RATE)+self.turtle_vel.angular.x)))
        self.vel_publisher.publish(twist)
    def run(self, speed: float):
        self.move(twist=Twist(linear=Vector3(x=speed), angular=Vector3(x=speed)))


def main():
    """
    Main function to create and run MoveTurtle node. Called by `ros2 run my_turtlesim move_turtle`.
    """
    rclpy.init()
    better_move = BetterMove()

    better_move.run(10)
    better_move.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()