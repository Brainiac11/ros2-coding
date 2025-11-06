// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from human_interfaces:msg/ArmSwingCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "human_interfaces/msg/arm_swing_command.hpp"


#ifndef HUMAN_INTERFACES__MSG__DETAIL__ARM_SWING_COMMAND__BUILDER_HPP_
#define HUMAN_INTERFACES__MSG__DETAIL__ARM_SWING_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "human_interfaces/msg/detail/arm_swing_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace human_interfaces
{

namespace msg
{


}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::human_interfaces::msg::ArmSwingCommand>()
{
  return ::human_interfaces::msg::ArmSwingCommand(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace human_interfaces

#endif  // HUMAN_INTERFACES__MSG__DETAIL__ARM_SWING_COMMAND__BUILDER_HPP_
