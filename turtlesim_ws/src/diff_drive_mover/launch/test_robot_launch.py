from launch import LaunchDescription
from launch_ros.actions import Node
from pathlib import Path

def generate_launch_description():
    urdf = Path("/workspaces/ros2-coding/turtlesim_ws/src/diff_drive_mover/include/diff_drive_mover/model.urdf").read_text()
    return LaunchDescription([
        Node(package="robot_state_publisher", executable="robot_state_publisher",
             parameters=[{"robot_description": urdf}]),
        Node(package="joint_state_publisher_gui", executable="joint_state_publisher_gui"),  # optional GUI
    ])