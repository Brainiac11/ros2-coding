
import sys
import select
import termios
import tty

import rclpy
from human_interfaces.msg import KickCommand
from rclpy.node import Node


class KeyInput(Node):
    def __init__(self):
        super().__init__('key_input')
        self._kick_command_publisher = self.create_publisher(KickCommand, '/should_kick', 10)
        self.create_timer(0.1, self._check_keyboard)
        self.settings = termios.tcgetattr(sys.stdin)
        tty.setraw(sys.stdin.fileno())
        self.get_logger().info("Key Input Node Started")
        self.get_logger().info("Press 'K' to kick, 'R' to reset, 'Q' to quit")
    def _check_keyboard(self) -> None:
        if select.select([sys.stdin], [], [], 0)[0]:
            key = sys.stdin.read(1)
            if key.lower() == 'k':
                msg = KickCommand()
                msg.should_kick = True
                self._kick_command_publisher.publish(msg)
                self.get_logger().info("KICK command")
                
            elif key.lower() == 'r':
                msg = KickCommand()
                msg.should_kick = False
                self._kick_command_publisher.publish(msg)
                self.get_logger().info("RESET command")
                
            elif key.lower() == 'q':
                self.get_logger().info("Quitting")
                self.restore_terminal()
                rclpy.shutdown()
    
    def restore_terminal(self):
        termios.tcsetattr(sys.stdin, termios.TCSADRAIN, self.settings)
def main(args=None):
    rclpy.init(args=args)
    key_input = KeyInput()
    try:
        rclpy.spin(key_input)
    except KeyboardInterrupt:
        pass
    finally:
        key_input.restore_terminal()
        key_input.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()