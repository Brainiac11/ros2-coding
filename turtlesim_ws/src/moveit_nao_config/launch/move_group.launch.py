from launch import LaunchDescription
from launch_ros.actions import Node
from pathlib import Path
import yaml


def generate_launch_description():
    # Load URDF and SRDF files directly (avoid invalid substitutions)
    urdf_path = Path("/workspaces/ros2-coding/turtlesim_ws/src/diff_drive_mover/include/diff_drive_mover/model.urdf")
    with open(Path("/workspaces/ros2-coding/turtlesim_ws/src/moveit_nao_config/srdf/nao.srdf"), "r") as f:
        srdf_content = f.read()

    with open(Path("/workspaces/ros2-coding/turtlesim_ws/src/moveit_nao_config/config/kinematics.yaml"), "r") as f:
        kinematics_yaml = yaml.safe_load(f)

    robot_description_param = {"robot_description": urdf_path.read_text() if urdf_path.exists() else ""}

    robot_description_semantic_param = {"robot_description_semantic": srdf_content}

    robot_description_kinematics_param = {"robot_description_kinematics": kinematics_yaml}

    rsp = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        output="screen",
        parameters=[robot_description_param],
    )

    move_group = Node(
        package="moveit_ros_move_group",
        executable="move_group",
        output="screen",
        parameters=[
            robot_description_param,
            robot_description_semantic_param,
            robot_description_kinematics_param,
        ],
    )

    return LaunchDescription([
        rsp,
        move_group,
    ])
