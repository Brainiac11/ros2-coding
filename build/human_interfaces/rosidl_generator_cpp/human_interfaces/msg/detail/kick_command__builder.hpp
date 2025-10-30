// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from human_interfaces:msg/KickCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "human_interfaces/msg/kick_command.hpp"


#ifndef HUMAN_INTERFACES__MSG__DETAIL__KICK_COMMAND__BUILDER_HPP_
#define HUMAN_INTERFACES__MSG__DETAIL__KICK_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "human_interfaces/msg/detail/kick_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace human_interfaces
{

namespace msg
{

namespace builder
{

class Init_KickCommand_should_kick
{
public:
  Init_KickCommand_should_kick()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::human_interfaces::msg::KickCommand should_kick(::human_interfaces::msg::KickCommand::_should_kick_type arg)
  {
    msg_.should_kick = std::move(arg);
    return std::move(msg_);
  }

private:
  ::human_interfaces::msg::KickCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::human_interfaces::msg::KickCommand>()
{
  return human_interfaces::msg::builder::Init_KickCommand_should_kick();
}

}  // namespace human_interfaces

#endif  // HUMAN_INTERFACES__MSG__DETAIL__KICK_COMMAND__BUILDER_HPP_
