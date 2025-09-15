// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:msg/JointTrajectoryControllerState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/joint_trajectory_controller_state.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_CONTROLLER_STATE__BUILDER_HPP_
#define CONTROL_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_CONTROLLER_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_msgs/msg/detail/joint_trajectory_controller_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_msgs
{

namespace msg
{

namespace builder
{

class Init_JointTrajectoryControllerState_speed_scaling_factor
{
public:
  explicit Init_JointTrajectoryControllerState_speed_scaling_factor(::control_msgs::msg::JointTrajectoryControllerState & msg)
  : msg_(msg)
  {}
  ::control_msgs::msg::JointTrajectoryControllerState speed_scaling_factor(::control_msgs::msg::JointTrajectoryControllerState::_speed_scaling_factor_type arg)
  {
    msg_.speed_scaling_factor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::msg::JointTrajectoryControllerState msg_;
};

class Init_JointTrajectoryControllerState_multi_dof_output
{
public:
  explicit Init_JointTrajectoryControllerState_multi_dof_output(::control_msgs::msg::JointTrajectoryControllerState & msg)
  : msg_(msg)
  {}
  Init_JointTrajectoryControllerState_speed_scaling_factor multi_dof_output(::control_msgs::msg::JointTrajectoryControllerState::_multi_dof_output_type arg)
  {
    msg_.multi_dof_output = std::move(arg);
    return Init_JointTrajectoryControllerState_speed_scaling_factor(msg_);
  }

private:
  ::control_msgs::msg::JointTrajectoryControllerState msg_;
};

class Init_JointTrajectoryControllerState_multi_dof_error
{
public:
  explicit Init_JointTrajectoryControllerState_multi_dof_error(::control_msgs::msg::JointTrajectoryControllerState & msg)
  : msg_(msg)
  {}
  Init_JointTrajectoryControllerState_multi_dof_output multi_dof_error(::control_msgs::msg::JointTrajectoryControllerState::_multi_dof_error_type arg)
  {
    msg_.multi_dof_error = std::move(arg);
    return Init_JointTrajectoryControllerState_multi_dof_output(msg_);
  }

private:
  ::control_msgs::msg::JointTrajectoryControllerState msg_;
};

class Init_JointTrajectoryControllerState_multi_dof_feedback
{
public:
  explicit Init_JointTrajectoryControllerState_multi_dof_feedback(::control_msgs::msg::JointTrajectoryControllerState & msg)
  : msg_(msg)
  {}
  Init_JointTrajectoryControllerState_multi_dof_error multi_dof_feedback(::control_msgs::msg::JointTrajectoryControllerState::_multi_dof_feedback_type arg)
  {
    msg_.multi_dof_feedback = std::move(arg);
    return Init_JointTrajectoryControllerState_multi_dof_error(msg_);
  }

private:
  ::control_msgs::msg::JointTrajectoryControllerState msg_;
};

class Init_JointTrajectoryControllerState_multi_dof_reference
{
public:
  explicit Init_JointTrajectoryControllerState_multi_dof_reference(::control_msgs::msg::JointTrajectoryControllerState & msg)
  : msg_(msg)
  {}
  Init_JointTrajectoryControllerState_multi_dof_feedback multi_dof_reference(::control_msgs::msg::JointTrajectoryControllerState::_multi_dof_reference_type arg)
  {
    msg_.multi_dof_reference = std::move(arg);
    return Init_JointTrajectoryControllerState_multi_dof_feedback(msg_);
  }

private:
  ::control_msgs::msg::JointTrajectoryControllerState msg_;
};

class Init_JointTrajectoryControllerState_multi_dof_joint_names
{
public:
  explicit Init_JointTrajectoryControllerState_multi_dof_joint_names(::control_msgs::msg::JointTrajectoryControllerState & msg)
  : msg_(msg)
  {}
  Init_JointTrajectoryControllerState_multi_dof_reference multi_dof_joint_names(::control_msgs::msg::JointTrajectoryControllerState::_multi_dof_joint_names_type arg)
  {
    msg_.multi_dof_joint_names = std::move(arg);
    return Init_JointTrajectoryControllerState_multi_dof_reference(msg_);
  }

private:
  ::control_msgs::msg::JointTrajectoryControllerState msg_;
};

class Init_JointTrajectoryControllerState_output
{
public:
  explicit Init_JointTrajectoryControllerState_output(::control_msgs::msg::JointTrajectoryControllerState & msg)
  : msg_(msg)
  {}
  Init_JointTrajectoryControllerState_multi_dof_joint_names output(::control_msgs::msg::JointTrajectoryControllerState::_output_type arg)
  {
    msg_.output = std::move(arg);
    return Init_JointTrajectoryControllerState_multi_dof_joint_names(msg_);
  }

private:
  ::control_msgs::msg::JointTrajectoryControllerState msg_;
};

class Init_JointTrajectoryControllerState_error
{
public:
  explicit Init_JointTrajectoryControllerState_error(::control_msgs::msg::JointTrajectoryControllerState & msg)
  : msg_(msg)
  {}
  Init_JointTrajectoryControllerState_output error(::control_msgs::msg::JointTrajectoryControllerState::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_JointTrajectoryControllerState_output(msg_);
  }

private:
  ::control_msgs::msg::JointTrajectoryControllerState msg_;
};

class Init_JointTrajectoryControllerState_feedback
{
public:
  explicit Init_JointTrajectoryControllerState_feedback(::control_msgs::msg::JointTrajectoryControllerState & msg)
  : msg_(msg)
  {}
  Init_JointTrajectoryControllerState_error feedback(::control_msgs::msg::JointTrajectoryControllerState::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return Init_JointTrajectoryControllerState_error(msg_);
  }

private:
  ::control_msgs::msg::JointTrajectoryControllerState msg_;
};

class Init_JointTrajectoryControllerState_reference
{
public:
  explicit Init_JointTrajectoryControllerState_reference(::control_msgs::msg::JointTrajectoryControllerState & msg)
  : msg_(msg)
  {}
  Init_JointTrajectoryControllerState_feedback reference(::control_msgs::msg::JointTrajectoryControllerState::_reference_type arg)
  {
    msg_.reference = std::move(arg);
    return Init_JointTrajectoryControllerState_feedback(msg_);
  }

private:
  ::control_msgs::msg::JointTrajectoryControllerState msg_;
};

class Init_JointTrajectoryControllerState_joint_names
{
public:
  explicit Init_JointTrajectoryControllerState_joint_names(::control_msgs::msg::JointTrajectoryControllerState & msg)
  : msg_(msg)
  {}
  Init_JointTrajectoryControllerState_reference joint_names(::control_msgs::msg::JointTrajectoryControllerState::_joint_names_type arg)
  {
    msg_.joint_names = std::move(arg);
    return Init_JointTrajectoryControllerState_reference(msg_);
  }

private:
  ::control_msgs::msg::JointTrajectoryControllerState msg_;
};

class Init_JointTrajectoryControllerState_header
{
public:
  Init_JointTrajectoryControllerState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointTrajectoryControllerState_joint_names header(::control_msgs::msg::JointTrajectoryControllerState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_JointTrajectoryControllerState_joint_names(msg_);
  }

private:
  ::control_msgs::msg::JointTrajectoryControllerState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::msg::JointTrajectoryControllerState>()
{
  return control_msgs::msg::builder::Init_JointTrajectoryControllerState_header();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_CONTROLLER_STATE__BUILDER_HPP_
