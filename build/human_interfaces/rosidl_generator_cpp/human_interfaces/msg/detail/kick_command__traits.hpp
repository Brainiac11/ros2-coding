// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from human_interfaces:msg/KickCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "human_interfaces/msg/kick_command.hpp"


#ifndef HUMAN_INTERFACES__MSG__DETAIL__KICK_COMMAND__TRAITS_HPP_
#define HUMAN_INTERFACES__MSG__DETAIL__KICK_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "human_interfaces/msg/detail/kick_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace human_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const KickCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: should_kick
  {
    out << "should_kick: ";
    rosidl_generator_traits::value_to_yaml(msg.should_kick, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const KickCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: should_kick
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "should_kick: ";
    rosidl_generator_traits::value_to_yaml(msg.should_kick, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KickCommand & msg, bool use_flow_style = false)
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

}  // namespace human_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use human_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const human_interfaces::msg::KickCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  human_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use human_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const human_interfaces::msg::KickCommand & msg)
{
  return human_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<human_interfaces::msg::KickCommand>()
{
  return "human_interfaces::msg::KickCommand";
}

template<>
inline const char * name<human_interfaces::msg::KickCommand>()
{
  return "human_interfaces/msg/KickCommand";
}

template<>
struct has_fixed_size<human_interfaces::msg::KickCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<human_interfaces::msg::KickCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<human_interfaces::msg::KickCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HUMAN_INTERFACES__MSG__DETAIL__KICK_COMMAND__TRAITS_HPP_
