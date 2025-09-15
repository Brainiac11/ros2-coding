// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:msg/MotionPrimitiveSequence.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/motion_primitive_sequence.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__MOTION_PRIMITIVE_SEQUENCE__BUILDER_HPP_
#define CONTROL_MSGS__MSG__DETAIL__MOTION_PRIMITIVE_SEQUENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_msgs/msg/detail/motion_primitive_sequence__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_msgs
{

namespace msg
{

namespace builder
{

class Init_MotionPrimitiveSequence_motions
{
public:
  Init_MotionPrimitiveSequence_motions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::control_msgs::msg::MotionPrimitiveSequence motions(::control_msgs::msg::MotionPrimitiveSequence::_motions_type arg)
  {
    msg_.motions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::msg::MotionPrimitiveSequence msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::msg::MotionPrimitiveSequence>()
{
  return control_msgs::msg::builder::Init_MotionPrimitiveSequence_motions();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__MOTION_PRIMITIVE_SEQUENCE__BUILDER_HPP_
