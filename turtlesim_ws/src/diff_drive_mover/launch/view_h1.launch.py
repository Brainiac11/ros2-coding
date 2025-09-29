from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.conditions import IfCondition, UnlessCondition
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():
    pkg_share = get_package_share_directory('diff_drive_mover')
    urdf_path = os.path.join(pkg_share, 'urdf', 'h1_2_simplified.urdf')

    use_gui_arg = DeclareLaunchArgument(
        'gui', default_value='true',
        description='Whether to start joint_state_publisher_gui')

    gui = LaunchConfiguration('gui')

    # Load URDF content once
    with open(urdf_path, 'r') as f:
        robot_description_content = f.read()

    # Joint state publisher (GUI optional)
    jsp_gui_node = Node(
        package='joint_state_publisher_gui',
        executable='joint_state_publisher_gui',
        name='joint_state_publisher_gui',
        condition=IfCondition(gui),
    )

    jsp_node = Node(
        package='joint_state_publisher',
        executable='joint_state_publisher',
        name='joint_state_publisher',
        condition=UnlessCondition(gui),
    )

    # Robot state publisher
    rsp_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        parameters=[{'robot_description': robot_description_content}],
        output='both'
    )
    
    return LaunchDescription([
        use_gui_arg,
        jsp_gui_node,
        jsp_node,
        rsp_node,
    ])
