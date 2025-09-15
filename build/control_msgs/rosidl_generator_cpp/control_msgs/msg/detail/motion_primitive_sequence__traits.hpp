// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_msgs:msg/MotionPrimitiveSequence.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/motion_primitive_sequence.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__MOTION_PRIMITIVE_SEQUENCE__TRAITS_HPP_
#define CONTROL_MSGS__MSG__DETAIL__MOTION_PRIMITIVE_SEQUENCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "control_msgs/msg/detail/motion_primitive_sequence__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'motions'
#include "control_msgs/msg/detail/motion_primitive__traits.hpp"

namespace control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotionPrimitiveSequence & msg,
  std::ostream & out)
{
  out << "{";
  // member: motions
  {
    if (msg.motions.size() == 0) {
      out << "motions: []";
    } else {
      out << "motions: [";
      size_t pending_items = msg.motions.size();
      for (auto item : msg.motions) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotionPrimitiveSequence & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motions.size() == 0) {
      out << "motions: []\n";
    } else {
      out << "motions:\n";
      for (auto item : msg.motions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotionPrimitiveSequence & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use control_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const control_msgs::msg::MotionPrimitiveSequence & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::msg::MotionPrimitiveSequence & msg)
{
  return control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::msg::MotionPrimitiveSequence>()
{
  return "control_msgs::msg::MotionPrimitiveSequence";
}

template<>
inline const char * name<control_msgs::msg::MotionPrimitiveSequence>()
{
  return "control_msgs/msg/MotionPrimitiveSequence";
}

template<>
struct has_fixed_size<control_msgs::msg::MotionPrimitiveSequence>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<control_msgs::msg::MotionPrimitiveSequence>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<control_msgs::msg::MotionPrimitiveSequence>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_MSGS__MSG__DETAIL__MOTION_PRIMITIVE_SEQUENCE__TRAITS_HPP_
