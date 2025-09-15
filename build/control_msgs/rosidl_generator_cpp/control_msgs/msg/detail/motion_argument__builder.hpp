// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:msg/MotionArgument.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/motion_argument.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__MOTION_ARGUMENT__BUILDER_HPP_
#define CONTROL_MSGS__MSG__DETAIL__MOTION_ARGUMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_msgs/msg/detail/motion_argument__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_msgs
{

namespace msg
{

namespace builder
{

class Init_MotionArgument_value
{
public:
  explicit Init_MotionArgument_value(::control_msgs::msg::MotionArgument & msg)
  : msg_(msg)
  {}
  ::control_msgs::msg::MotionArgument value(::control_msgs::msg::MotionArgument::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::msg::MotionArgument msg_;
};

class Init_MotionArgument_name
{
public:
  Init_MotionArgument_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionArgument_value name(::control_msgs::msg::MotionArgument::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_MotionArgument_value(msg_);
  }

private:
  ::control_msgs::msg::MotionArgument msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::msg::MotionArgument>()
{
  return control_msgs::msg::builder::Init_MotionArgument_name();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__MOTION_ARGUMENT__BUILDER_HPP_
