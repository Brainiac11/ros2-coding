#!/usr/bin/env python3
"""
Simplified launch file that starts MoveIt demo without ros2_control dependency.
This publishes fake joint states for testing path planning only.
"""

from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess
import os


def generate_launch_description():
    
    # Start the arm_path_maker node
    arm_path_maker_node = Node(
        package='human_controller',
        executable='arm_path_maker',
        name='arm_path_maker',
        output='screen',
        parameters=[{
            'use_sim_time': False,
        }]
    )
    
    # Publish fake joint states at a known configuration
    # This publishes the "ready" pose from the SRDF
    joint_state_publisher = Node(
        package='joint_state_publisher',
        executable='joint_state_publisher',
        name='joint_state_publisher',
        output='screen',
        parameters=[{
            'source_list': [],
            'rate': 50,
            'robot_description': '',
        }],
        arguments=[
            '--config', 
            '/workspaces/ros2-coding/turtlesim_ws/src/panda_moveit_config/config/initial_positions.yaml'
        ]
    )
    
    return LaunchDescription([
        # Just run the demo.launch.py which handles everything
        ExecuteProcess(
            cmd=[
                'ros2', 'launch', 
                'moveit_resources_panda_moveit_config', 
                'demo.launch.py',
                'ros2_control_hardware_type:=mock_components'
            ],
            output='screen'
        ),
        arm_path_maker_node,
    ])
