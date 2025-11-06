from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='human_controller',
            executable='ik_solver',
            name='inverse_kinematics_solver',
            output='screen',
            parameters=[],
            remappings=[],
        ),
    ])
