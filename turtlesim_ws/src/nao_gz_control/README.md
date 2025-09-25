NAO in Gazebo Harmonic (ROS 2 Jazzy)

Overview
- Launch Gazebo Harmonic, spawn NAO model, and control joints via ros2_control using gz_ros2_control plugin.

Prerequisites
- ROS 2 Jazzy, Gazebo Harmonic, and ros_gz bridge packages installed.
- NAO SDF/URDF includes the gz_ros2_control System plugin and exposes joint command/state interfaces.

Quick Start
1) Build the workspace:
```
cd /workspaces/ros2-coding/turtlesim_ws
source /opt/ros/jazzy/setup.bash
colcon build --symlink-install
source install/setup.bash
```

2) Launch Gazebo and spawn NAO (provide your model path):
```
ros2 launch nao_gz_control bringup.launch.py model:=/absolute/path/to/nao.sdf
```

3) Load controllers (launch already spawns them):
- `joint_state_broadcaster`
- `nao_trajectory_controller`

4) Send a simple trajectory example:
```
ros2 topic pub /model/nao/nao_trajectory_controller/joint_trajectory trajectory_msgs/JointTrajectory '{joint_names: ["HeadYaw", "HeadPitch"], points: [{positions: [0.5, -0.3], time_from_start: {sec: 2}}]}'
```

SDF Plugin Snippet
Ensure the NAO model file includes the gz_ros2_control system plugin:
```
<plugin filename="gz-ros2-control-system" name="gz_ros2_control::System"/>
```
If using xacro/URDF, adapt accordingly. The controller manager will appear at `/model/nao/controller_manager`.
Optionally, you can add a `<parameters>` tag with an absolute filesystem path to a ROS parameters YAML, but this launch already passes the YAML to the spawners via `--param-file`.

Notes
- Update joint names in `config/controllers.yaml` to match your NAO model.
- Use `ros2 control list_hardware_interfaces -c /model/nao/controller_manager` to verify interfaces.
- For different controllers (position/effort), adjust `command_interfaces` and gains.
