// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_msgs:msg/MotionPrimitive.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/motion_primitive.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__MOTION_PRIMITIVE__TRAITS_HPP_
#define CONTROL_MSGS__MSG__DETAIL__MOTION_PRIMITIVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "control_msgs/msg/detail/motion_primitive__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'additional_arguments'
#include "control_msgs/msg/detail/motion_argument__traits.hpp"
// Member 'poses'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotionPrimitive & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: blend_radius
  {
    out << "blend_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.blend_radius, out);
    out << ", ";
  }

  // member: additional_arguments
  {
    if (msg.additional_arguments.size() == 0) {
      out << "additional_arguments: []";
    } else {
      out << "additional_arguments: [";
      size_t pending_items = msg.additional_arguments.size();
      for (auto item : msg.additional_arguments) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: poses
  {
    if (msg.poses.size() == 0) {
      out << "poses: []";
    } else {
      out << "poses: [";
      size_t pending_items = msg.poses.size();
      for (auto item : msg.poses) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_positions
  {
    if (msg.joint_positions.size() == 0) {
      out << "joint_positions: []";
    } else {
      out << "joint_positions: [";
      size_t pending_items = msg.joint_positions.size();
      for (auto item : msg.joint_positions) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const MotionPrimitive & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: blend_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blend_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.blend_radius, out);
    out << "\n";
  }

  // member: additional_arguments
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.additional_arguments.size() == 0) {
      out << "additional_arguments: []\n";
    } else {
      out << "additional_arguments:\n";
      for (auto item : msg.additional_arguments) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.poses.size() == 0) {
      out << "poses: []\n";
    } else {
      out << "poses:\n";
      for (auto item : msg.poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: joint_positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_positions.size() == 0) {
      out << "joint_positions: []\n";
    } else {
      out << "joint_positions:\n";
      for (auto item : msg.joint_positions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotionPrimitive & msg, bool use_flow_style = false)
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
  const control_msgs::msg::MotionPrimitive & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::msg::MotionPrimitive & msg)
{
  return control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::msg::MotionPrimitive>()
{
  return "control_msgs::msg::MotionPrimitive";
}

template<>
inline const char * name<control_msgs::msg::MotionPrimitive>()
{
  return "control_msgs/msg/MotionPrimitive";
}

template<>
struct has_fixed_size<control_msgs::msg::MotionPrimitive>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<control_msgs::msg::MotionPrimitive>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<control_msgs::msg::MotionPrimitive>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_MSGS__MSG__DETAIL__MOTION_PRIMITIVE__TRAITS_HPP_
