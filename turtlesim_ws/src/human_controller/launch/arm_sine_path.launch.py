#!/usr/bin/env python3
"""
Launch file to start the Panda arm with MoveIt and the arm_path_maker node.
This will allow the Panda arm to follow sine curve paths.
"""

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():
    
    # Find package paths
    panda_moveit_config_path = get_package_share_directory('moveit_resources_panda_moveit_config')
    
    # Launch MoveIt with Panda arm
    moveit_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(panda_moveit_config_path, 'launch', 'demo.launch.py')
        ),
        launch_arguments={
            'ros2_control_hardware_type': 'mock_components',
        }.items()
    )
    
    # Launch the arm_path_maker node
    arm_path_maker_node = Node(
        package='human_controller',
        executable='arm_path_maker',
        name='arm_path_maker',
        output='screen',
        parameters=[{
            'use_sim_time': False,
        }]
    )
    
    return LaunchDescription([
        moveit_launch,
        arm_path_maker_node,
    ])
