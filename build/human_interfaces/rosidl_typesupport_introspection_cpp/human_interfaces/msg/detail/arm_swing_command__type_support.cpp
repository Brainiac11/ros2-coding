// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from human_interfaces:msg/ArmSwingCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "human_interfaces/msg/detail/arm_swing_command__functions.h"
#include "human_interfaces/msg/detail/arm_swing_command__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace human_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ArmSwingCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) human_interfaces::msg::ArmSwingCommand(_init);
}

void ArmSwingCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<human_interfaces::msg::ArmSwingCommand *>(message_memory);
  typed_message->~ArmSwingCommand();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ArmSwingCommand_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces::msg::ArmSwingCommand, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ArmSwingCommand_message_members = {
  "human_interfaces::msg",  // message namespace
  "ArmSwingCommand",  // message name
  1,  // number of fields
  sizeof(human_interfaces::msg::ArmSwingCommand),
  false,  // has_any_key_member_
  ArmSwingCommand_message_member_array,  // message members
  ArmSwingCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  ArmSwingCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ArmSwingCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArmSwingCommand_message_members,
  get_message_typesupport_handle_function,
  &human_interfaces__msg__ArmSwingCommand__get_type_hash,
  &human_interfaces__msg__ArmSwingCommand__get_type_description,
  &human_interfaces__msg__ArmSwingCommand__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace human_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<human_interfaces::msg::ArmSwingCommand>()
{
  return &::human_interfaces::msg::rosidl_typesupport_introspection_cpp::ArmSwingCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, human_interfaces, msg, ArmSwingCommand)() {
  return &::human_interfaces::msg::rosidl_typesupport_introspection_cpp::ArmSwingCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
