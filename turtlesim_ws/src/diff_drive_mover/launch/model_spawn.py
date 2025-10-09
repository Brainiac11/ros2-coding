
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution, TextSubstitution
from launch_ros.actions import Node
from ros_gz_sim.actions import GzServer

def generate_launch_description() -> LaunchDescription:
    world = LaunchConfiguration('world_sdf_file')
    file = LaunchConfiguration('file')
    config_file = LaunchConfiguration('config_file')

    declare_world_sdf_file_cmd = DeclareLaunchArgument(
        'world_sdf_file', default_value=''
    )
    declare_config_file = DeclareLaunchArgument(
        'config_file', default_value=''
    )

    ld = LaunchDescription([
        GzServer(
            world_sdf_file=world,
        ),
    ])

    ld.add_action(declare_config_file)
    ld.add_action(declare_world_sdf_file_cmd)
    return ld