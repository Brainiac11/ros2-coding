// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from control_msgs:msg/MotionPrimitive.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "control_msgs/msg/detail/motion_primitive__functions.h"
#include "control_msgs/msg/detail/motion_primitive__struct.hpp"
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

void MotionPrimitive_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) control_msgs::msg::MotionPrimitive(_init);
}

void MotionPrimitive_fini_function(void * message_memory)
{
  auto typed_message = static_cast<control_msgs::msg::MotionPrimitive *>(message_memory);
  typed_message->~MotionPrimitive();
}

size_t size_function__MotionPrimitive__additional_arguments(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<control_msgs::msg::MotionArgument> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotionPrimitive__additional_arguments(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<control_msgs::msg::MotionArgument> *>(untyped_member);
  return &member[index];
}

void * get_function__MotionPrimitive__additional_arguments(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<control_msgs::msg::MotionArgument> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotionPrimitive__additional_arguments(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const control_msgs::msg::MotionArgument *>(
    get_const_function__MotionPrimitive__additional_arguments(untyped_member, index));
  auto & value = *reinterpret_cast<control_msgs::msg::MotionArgument *>(untyped_value);
  value = item;
}

void assign_function__MotionPrimitive__additional_arguments(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<control_msgs::msg::MotionArgument *>(
    get_function__MotionPrimitive__additional_arguments(untyped_member, index));
  const auto & value = *reinterpret_cast<const control_msgs::msg::MotionArgument *>(untyped_value);
  item = value;
}

void resize_function__MotionPrimitive__additional_arguments(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<control_msgs::msg::MotionArgument> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MotionPrimitive__poses(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::PoseStamped> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotionPrimitive__poses(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::PoseStamped> *>(untyped_member);
  return &member[index];
}

void * get_function__MotionPrimitive__poses(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::PoseStamped> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotionPrimitive__poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::PoseStamped *>(
    get_const_function__MotionPrimitive__poses(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::PoseStamped *>(untyped_value);
  value = item;
}

void assign_function__MotionPrimitive__poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::PoseStamped *>(
    get_function__MotionPrimitive__poses(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::PoseStamped *>(untyped_value);
  item = value;
}

void resize_function__MotionPrimitive__poses(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::PoseStamped> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MotionPrimitive__joint_positions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotionPrimitive__joint_positions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__MotionPrimitive__joint_positions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotionPrimitive__joint_positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MotionPrimitive__joint_positions(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MotionPrimitive__joint_positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MotionPrimitive__joint_positions(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__MotionPrimitive__joint_positions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotionPrimitive_message_member_array[5] = {
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::msg::MotionPrimitive, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "blend_radius",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::msg::MotionPrimitive, blend_radius),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "additional_arguments",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<control_msgs::msg::MotionArgument>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::msg::MotionPrimitive, additional_arguments),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotionPrimitive__additional_arguments,  // size() function pointer
    get_const_function__MotionPrimitive__additional_arguments,  // get_const(index) function pointer
    get_function__MotionPrimitive__additional_arguments,  // get(index) function pointer
    fetch_function__MotionPrimitive__additional_arguments,  // fetch(index, &value) function pointer
    assign_function__MotionPrimitive__additional_arguments,  // assign(index, value) function pointer
    resize_function__MotionPrimitive__additional_arguments  // resize(index) function pointer
  },
  {
    "poses",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::PoseStamped>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::msg::MotionPrimitive, poses),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotionPrimitive__poses,  // size() function pointer
    get_const_function__MotionPrimitive__poses,  // get_const(index) function pointer
    get_function__MotionPrimitive__poses,  // get(index) function pointer
    fetch_function__MotionPrimitive__poses,  // fetch(index, &value) function pointer
    assign_function__MotionPrimitive__poses,  // assign(index, value) function pointer
    resize_function__MotionPrimitive__poses  // resize(index) function pointer
  },
  {
    "joint_positions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::msg::MotionPrimitive, joint_positions),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotionPrimitive__joint_positions,  // size() function pointer
    get_const_function__MotionPrimitive__joint_positions,  // get_const(index) function pointer
    get_function__MotionPrimitive__joint_positions,  // get(index) function pointer
    fetch_function__MotionPrimitive__joint_positions,  // fetch(index, &value) function pointer
    assign_function__MotionPrimitive__joint_positions,  // assign(index, value) function pointer
    resize_function__MotionPrimitive__joint_positions  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotionPrimitive_message_members = {
  "control_msgs::msg",  // message namespace
  "MotionPrimitive",  // message name
  5,  // number of fields
  sizeof(control_msgs::msg::MotionPrimitive),
  false,  // has_any_key_member_
  MotionPrimitive_message_member_array,  // message members
  MotionPrimitive_init_function,  // function to initialize message memory (memory has to be allocated)
  MotionPrimitive_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotionPrimitive_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotionPrimitive_message_members,
  get_message_typesupport_handle_function,
  &control_msgs__msg__MotionPrimitive__get_type_hash,
  &control_msgs__msg__MotionPrimitive__get_type_description,
  &control_msgs__msg__MotionPrimitive__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<control_msgs::msg::MotionPrimitive>()
{
  return &::control_msgs::msg::rosidl_typesupport_introspection_cpp::MotionPrimitive_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, control_msgs, msg, MotionPrimitive)() {
  return &::control_msgs::msg::rosidl_typesupport_introspection_cpp::MotionPrimitive_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
