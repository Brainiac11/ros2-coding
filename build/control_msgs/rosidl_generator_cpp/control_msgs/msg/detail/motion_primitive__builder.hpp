// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:msg/MotionPrimitive.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/motion_primitive.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__MOTION_PRIMITIVE__BUILDER_HPP_
#define CONTROL_MSGS__MSG__DETAIL__MOTION_PRIMITIVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_msgs/msg/detail/motion_primitive__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_msgs
{

namespace msg
{

namespace builder
{

class Init_MotionPrimitive_joint_positions
{
public:
  explicit Init_MotionPrimitive_joint_positions(::control_msgs::msg::MotionPrimitive & msg)
  : msg_(msg)
  {}
  ::control_msgs::msg::MotionPrimitive joint_positions(::control_msgs::msg::MotionPrimitive::_joint_positions_type arg)
  {
    msg_.joint_positions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::msg::MotionPrimitive msg_;
};

class Init_MotionPrimitive_poses
{
public:
  explicit Init_MotionPrimitive_poses(::control_msgs::msg::MotionPrimitive & msg)
  : msg_(msg)
  {}
  Init_MotionPrimitive_joint_positions poses(::control_msgs::msg::MotionPrimitive::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return Init_MotionPrimitive_joint_positions(msg_);
  }

private:
  ::control_msgs::msg::MotionPrimitive msg_;
};

class Init_MotionPrimitive_additional_arguments
{
public:
  explicit Init_MotionPrimitive_additional_arguments(::control_msgs::msg::MotionPrimitive & msg)
  : msg_(msg)
  {}
  Init_MotionPrimitive_poses additional_arguments(::control_msgs::msg::MotionPrimitive::_additional_arguments_type arg)
  {
    msg_.additional_arguments = std::move(arg);
    return Init_MotionPrimitive_poses(msg_);
  }

private:
  ::control_msgs::msg::MotionPrimitive msg_;
};

class Init_MotionPrimitive_blend_radius
{
public:
  explicit Init_MotionPrimitive_blend_radius(::control_msgs::msg::MotionPrimitive & msg)
  : msg_(msg)
  {}
  Init_MotionPrimitive_additional_arguments blend_radius(::control_msgs::msg::MotionPrimitive::_blend_radius_type arg)
  {
    msg_.blend_radius = std::move(arg);
    return Init_MotionPrimitive_additional_arguments(msg_);
  }

private:
  ::control_msgs::msg::MotionPrimitive msg_;
};

class Init_MotionPrimitive_type
{
public:
  Init_MotionPrimitive_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionPrimitive_blend_radius type(::control_msgs::msg::MotionPrimitive::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_MotionPrimitive_blend_radius(msg_);
  }

private:
  ::control_msgs::msg::MotionPrimitive msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::msg::MotionPrimitive>()
{
  return control_msgs::msg::builder::Init_MotionPrimitive_type();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__MOTION_PRIMITIVE__BUILDER_HPP_
