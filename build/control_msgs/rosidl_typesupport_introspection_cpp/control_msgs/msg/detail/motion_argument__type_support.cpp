// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from control_msgs:msg/MotionArgument.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "control_msgs/msg/detail/motion_argument__functions.h"
#include "control_msgs/msg/detail/motion_argument__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace control_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MotionArgument_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) control_msgs::msg::MotionArgument(_init);
}

void MotionArgument_fini_function(void * message_memory)
{
  auto typed_message = static_cast<control_msgs::msg::MotionArgument *>(message_memory);
  typed_message->~MotionArgument();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotionArgument_message_member_array[2] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::msg::MotionArgument, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::msg::MotionArgument, value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotionArgument_message_members = {
  "control_msgs::msg",  // message namespace
  "MotionArgument",  // message name
  2,  // number of fields
  sizeof(control_msgs::msg::MotionArgument),
  false,  // has_any_key_member_
  MotionArgument_message_member_array,  // message members
  MotionArgument_init_function,  // function to initialize message memory (memory has to be allocated)
  MotionArgument_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotionArgument_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotionArgument_message_members,
  get_message_typesupport_handle_function,
  &control_msgs__msg__MotionArgument__get_type_hash,
  &control_msgs__msg__MotionArgument__get_type_description,
  &control_msgs__msg__MotionArgument__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<control_msgs::msg::MotionArgument>()
{
  return &::control_msgs::msg::rosidl_typesupport_introspection_cpp::MotionArgument_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, control_msgs, msg, MotionArgument)() {
  return &::control_msgs::msg::rosidl_typesupport_introspection_cpp::MotionArgument_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
