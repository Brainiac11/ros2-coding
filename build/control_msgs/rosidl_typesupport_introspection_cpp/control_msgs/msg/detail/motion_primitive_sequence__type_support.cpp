// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from control_msgs:msg/MotionPrimitiveSequence.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "control_msgs/msg/detail/motion_primitive_sequence__functions.h"
#include "control_msgs/msg/detail/motion_primitive_sequence__struct.hpp"
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

void MotionPrimitiveSequence_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) control_msgs::msg::MotionPrimitiveSequence(_init);
}

void MotionPrimitiveSequence_fini_function(void * message_memory)
{
  auto typed_message = static_cast<control_msgs::msg::MotionPrimitiveSequence *>(message_memory);
  typed_message->~MotionPrimitiveSequence();
}

size_t size_function__MotionPrimitiveSequence__motions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<control_msgs::msg::MotionPrimitive> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotionPrimitiveSequence__motions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<control_msgs::msg::MotionPrimitive> *>(untyped_member);
  return &member[index];
}

void * get_function__MotionPrimitiveSequence__motions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<control_msgs::msg::MotionPrimitive> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotionPrimitiveSequence__motions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const control_msgs::msg::MotionPrimitive *>(
    get_const_function__MotionPrimitiveSequence__motions(untyped_member, index));
  auto & value = *reinterpret_cast<control_msgs::msg::MotionPrimitive *>(untyped_value);
  value = item;
}

void assign_function__MotionPrimitiveSequence__motions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<control_msgs::msg::MotionPrimitive *>(
    get_function__MotionPrimitiveSequence__motions(untyped_member, index));
  const auto & value = *reinterpret_cast<const control_msgs::msg::MotionPrimitive *>(untyped_value);
  item = value;
}

void resize_function__MotionPrimitiveSequence__motions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<control_msgs::msg::MotionPrimitive> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotionPrimitiveSequence_message_member_array[1] = {
  {
    "motions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<control_msgs::msg::MotionPrimitive>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::msg::MotionPrimitiveSequence, motions),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotionPrimitiveSequence__motions,  // size() function pointer
    get_const_function__MotionPrimitiveSequence__motions,  // get_const(index) function pointer
    get_function__MotionPrimitiveSequence__motions,  // get(index) function pointer
    fetch_function__MotionPrimitiveSequence__motions,  // fetch(index, &value) function pointer
    assign_function__MotionPrimitiveSequence__motions,  // assign(index, value) function pointer
    resize_function__MotionPrimitiveSequence__motions  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotionPrimitiveSequence_message_members = {
  "control_msgs::msg",  // message namespace
  "MotionPrimitiveSequence",  // message name
  1,  // number of fields
  sizeof(control_msgs::msg::MotionPrimitiveSequence),
  false,  // has_any_key_member_
  MotionPrimitiveSequence_message_member_array,  // message members
  MotionPrimitiveSequence_init_function,  // function to initialize message memory (memory has to be allocated)
  MotionPrimitiveSequence_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotionPrimitiveSequence_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotionPrimitiveSequence_message_members,
  get_message_typesupport_handle_function,
  &control_msgs__msg__MotionPrimitiveSequence__get_type_hash,
  &control_msgs__msg__MotionPrimitiveSequence__get_type_description,
  &control_msgs__msg__MotionPrimitiveSequence__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<control_msgs::msg::MotionPrimitiveSequence>()
{
  return &::control_msgs::msg::rosidl_typesupport_introspection_cpp::MotionPrimitiveSequence_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, control_msgs, msg, MotionPrimitiveSequence)() {
  return &::control_msgs::msg::rosidl_typesupport_introspection_cpp::MotionPrimitiveSequence_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
