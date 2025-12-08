// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from human_interfaces:action/GaitPath.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "human_interfaces/action/detail/gait_path__functions.h"
#include "human_interfaces/action/detail/gait_path__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace human_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GaitPath_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) human_interfaces::action::GaitPath_Goal(_init);
}

void GaitPath_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<human_interfaces::action::GaitPath_Goal *>(message_memory);
  typed_message->~GaitPath_Goal();
}

size_t size_function__GaitPath_Goal__start_point(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GaitPath_Goal__start_point(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__GaitPath_Goal__start_point(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__GaitPath_Goal__start_point(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__GaitPath_Goal__start_point(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__GaitPath_Goal__start_point(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__GaitPath_Goal__start_point(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__GaitPath_Goal__start_point(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GaitPath_Goal__end_point(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GaitPath_Goal__end_point(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__GaitPath_Goal__end_point(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__GaitPath_Goal__end_point(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__GaitPath_Goal__end_point(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__GaitPath_Goal__end_point(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__GaitPath_Goal__end_point(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__GaitPath_Goal__end_point(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GaitPath_Goal_message_member_array[5] = {
  {
    "start_point",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces::action::GaitPath_Goal, start_point),  // bytes offset in struct
    nullptr,  // default value
    size_function__GaitPath_Goal__start_point,  // size() function pointer
    get_const_function__GaitPath_Goal__start_point,  // get_const(index) function pointer
    get_function__GaitPath_Goal__start_point,  // get(index) function pointer
    fetch_function__GaitPath_Goal__start_point,  // fetch(index, &value) function pointer
    assign_function__GaitPath_Goal__start_point,  // assign(index, value) function pointer
    resize_function__GaitPath_Goal__start_point  // resize(index) function pointer
  },
  {
    "end_point",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces::action::GaitPath_Goal, end_point),  // bytes offset in struct
    nullptr,  // default value
    size_function__GaitPath_Goal__end_point,  // size() function pointer
    get_const_function__GaitPath_Goal__end_point,  // get_const(index) function pointer
    get_function__GaitPath_Goal__end_point,  // get(index) function pointer
    fetch_function__GaitPath_Goal__end_point,  // fetch(index, &value) function pointer
    assign_function__GaitPath_Goal__end_point,  // assign(index, value) function pointer
    resize_function__GaitPath_Goal__end_point  // resize(index) function pointer
  },
  {
    "interpolation_time_count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces::action::GaitPath_Goal, interpolation_time_count),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_reversed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces::action::GaitPath_Goal, is_reversed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "height",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces::action::GaitPath_Goal, height),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GaitPath_Goal_message_members = {
  "human_interfaces::action",  // message namespace
  "GaitPath_Goal",  // message name
  5,  // number of fields
  sizeof(human_interfaces::action::GaitPath_Goal),
  false,  // has_any_key_member_
  GaitPath_Goal_message_member_array,  // message members
  GaitPath_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  GaitPath_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GaitPath_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GaitPath_Goal_message_members,
  get_message_typesupport_handle_function,
  &human_interfaces__action__GaitPath_Goal__get_type_hash,
  &human_interfaces__action__GaitPath_Goal__get_type_description,
  &human_interfaces__action__GaitPath_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace human_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<human_interfaces::action::GaitPath_Goal>()
{
  return &::human_interfaces::action::rosidl_typesupport_introspection_cpp::GaitPath_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, human_interfaces, action, GaitPath_Goal)() {
  return &::human_interfaces::action::rosidl_typesupport_introspection_cpp::GaitPath_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__functions.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace human_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GaitPath_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) human_interfaces::action::GaitPath_Result(_init);
}

void GaitPath_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<human_interfaces::action::GaitPath_Result *>(message_memory);
  typed_message->~GaitPath_Result();
}

size_t size_function__GaitPath_Result__joint_angles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std_msgs::msg::Float64MultiArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GaitPath_Result__joint_angles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std_msgs::msg::Float64MultiArray> *>(untyped_member);
  return &member[index];
}

void * get_function__GaitPath_Result__joint_angles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std_msgs::msg::Float64MultiArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__GaitPath_Result__joint_angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std_msgs::msg::Float64MultiArray *>(
    get_const_function__GaitPath_Result__joint_angles(untyped_member, index));
  auto & value = *reinterpret_cast<std_msgs::msg::Float64MultiArray *>(untyped_value);
  value = item;
}

void assign_function__GaitPath_Result__joint_angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std_msgs::msg::Float64MultiArray *>(
    get_function__GaitPath_Result__joint_angles(untyped_member, index));
  const auto & value = *reinterpret_cast<const std_msgs::msg::Float64MultiArray *>(untyped_value);
  item = value;
}

void resize_function__GaitPath_Result__joint_angles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std_msgs::msg::Float64MultiArray> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GaitPath_Result_message_member_array[1] = {
  {
    "joint_angles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Float64MultiArray>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces::action::GaitPath_Result, joint_angles),  // bytes offset in struct
    nullptr,  // default value
    size_function__GaitPath_Result__joint_angles,  // size() function pointer
    get_const_function__GaitPath_Result__joint_angles,  // get_const(index) function pointer
    get_function__GaitPath_Result__joint_angles,  // get(index) function pointer
    fetch_function__GaitPath_Result__joint_angles,  // fetch(index, &value) function pointer
    assign_function__GaitPath_Result__joint_angles,  // assign(index, value) function pointer
    resize_function__GaitPath_Result__joint_angles  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GaitPath_Result_message_members = {
  "human_interfaces::action",  // message namespace
  "GaitPath_Result",  // message name
  1,  // number of fields
  sizeof(human_interfaces::action::GaitPath_Result),
  false,  // has_any_key_member_
  GaitPath_Result_message_member_array,  // message members
  GaitPath_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  GaitPath_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GaitPath_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GaitPath_Result_message_members,
  get_message_typesupport_handle_function,
  &human_interfaces__action__GaitPath_Result__get_type_hash,
  &human_interfaces__action__GaitPath_Result__get_type_description,
  &human_interfaces__action__GaitPath_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace human_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<human_interfaces::action::GaitPath_Result>()
{
  return &::human_interfaces::action::rosidl_typesupport_introspection_cpp::GaitPath_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, human_interfaces, action, GaitPath_Result)() {
  return &::human_interfaces::action::rosidl_typesupport_introspection_cpp::GaitPath_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__functions.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace human_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GaitPath_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) human_interfaces::action::GaitPath_Feedback(_init);
}

void GaitPath_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<human_interfaces::action::GaitPath_Feedback *>(message_memory);
  typed_message->~GaitPath_Feedback();
}

size_t size_function__GaitPath_Feedback__partial_joint_angles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std_msgs::msg::Float64MultiArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GaitPath_Feedback__partial_joint_angles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std_msgs::msg::Float64MultiArray> *>(untyped_member);
  return &member[index];
}

void * get_function__GaitPath_Feedback__partial_joint_angles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std_msgs::msg::Float64MultiArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__GaitPath_Feedback__partial_joint_angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std_msgs::msg::Float64MultiArray *>(
    get_const_function__GaitPath_Feedback__partial_joint_angles(untyped_member, index));
  auto & value = *reinterpret_cast<std_msgs::msg::Float64MultiArray *>(untyped_value);
  value = item;
}

void assign_function__GaitPath_Feedback__partial_joint_angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std_msgs::msg::Float64MultiArray *>(
    get_function__GaitPath_Feedback__partial_joint_angles(untyped_member, index));
  const auto & value = *reinterpret_cast<const std_msgs::msg::Float64MultiArray *>(untyped_value);
  item = value;
}

void resize_function__GaitPath_Feedback__partial_joint_angles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std_msgs::msg::Float64MultiArray> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GaitPath_Feedback_message_member_array[1] = {
  {
    "partial_joint_angles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Float64MultiArray>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces::action::GaitPath_Feedback, partial_joint_angles),  // bytes offset in struct
    nullptr,  // default value
    size_function__GaitPath_Feedback__partial_joint_angles,  // size() function pointer
    get_const_function__GaitPath_Feedback__partial_joint_angles,  // get_const(index) function pointer
    get_function__GaitPath_Feedback__partial_joint_angles,  // get(index) function pointer
    fetch_function__GaitPath_Feedback__partial_joint_angles,  // fetch(index, &value) function pointer
    assign_function__GaitPath_Feedback__partial_joint_angles,  // assign(index, value) function pointer
    resize_function__GaitPath_Feedback__partial_joint_angles  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GaitPath_Feedback_message_members = {
  "human_interfaces::action",  // message namespace
  "GaitPath_Feedback",  // message name
  1,  // number of fields
  sizeof(human_interfaces::action::GaitPath_Feedback),
  false,  // has_any_key_member_
  GaitPath_Feedback_message_member_array,  // message members
  GaitPath_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  GaitPath_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GaitPath_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GaitPath_Feedback_message_members,
  get_message_typesupport_handle_function,
  &human_interfaces__action__GaitPath_Feedback__get_type_hash,
  &human_interfaces__action__GaitPath_Feedback__get_type_description,
  &human_interfaces__action__GaitPath_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace human_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<human_interfaces::action::GaitPath_Feedback>()
{
  return &::human_interfaces::action::rosidl_typesupport_introspection_cpp::GaitPath_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, human_interfaces, action, GaitPath_Feedback)() {
  return &::human_interfaces::action::rosidl_typesupport_introspection_cpp::GaitPath_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__functions.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace human_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GaitPath_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) human_interfaces::action::GaitPath_SendGoal_Request(_init);
}

void GaitPath_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<human_interfaces::action::GaitPath_SendGoal_Request *>(message_memory);
  typed_message->~GaitPath_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GaitPath_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces::action::GaitPath_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<human_interfaces::action::GaitPath_Goal>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces::action::GaitPath_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GaitPath_SendGoal_Request_message_members = {
  "human_interfaces::action",  // message namespace
  "GaitPath_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(human_interfaces::action::GaitPath_SendGoal_Request),
  false,  // has_any_key_member_
  GaitPath_SendGoal_Request_message_member_array,  // message members
  GaitPath_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GaitPath_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GaitPath_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GaitPath_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
  &human_interfaces__action__GaitPath_SendGoal_Request__get_type_hash,
  &human_interfaces__action__GaitPath_SendGoal_Request__get_type_description,
  &human_interfaces__action__GaitPath_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace human_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<human_interfaces::action::GaitPath_SendGoal_Request>()
{
  return &::human_interfaces::action::rosidl_typesupport_introspection_cpp::GaitPath_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, human_interfaces, action, GaitPath_SendGoal_Request)() {
  return &::human_interfaces::action::rosidl_typesupport_introspection_cpp::GaitPath_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__functions.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace human_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GaitPath_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) human_interfaces::action::GaitPath_SendGoal_Response(_init);
}

void GaitPath_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<human_interfaces::action::GaitPath_SendGoal_Response *>(message_memory);
  typed_message->~GaitPath_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GaitPath_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces::action::GaitPath_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces::action::GaitPath_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GaitPath_SendGoal_Response_message_members = {
  "human_interfaces::action",  // message namespace
  "GaitPath_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(human_interfaces::action::GaitPath_SendGoal_Response),
  false,  // has_any_key_member_
  GaitPath_SendGoal_Response_message_member_array,  // message members
  GaitPath_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GaitPath_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GaitPath_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GaitPath_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
  &human_interfaces__action__GaitPath_SendGoal_Response__get_type_hash,
  &human_interfaces__action__GaitPath_SendGoal_Response__get_type_description,
  &human_interfaces__action__GaitPath_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace human_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<human_interfaces::action::GaitPath_SendGoal_Response>()
{
  return &::human_interfaces::action::rosidl_typesupport_introspection_cpp::GaitPath_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, human_interfaces, action, GaitPath_SendGoal_Response)() {
  return &::human_interfaces::action::rosidl_typesupport_introspection_cpp::GaitPath_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__functions.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace human_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GaitPath_SendGoal_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) human_interfaces::action::GaitPath_SendGoal_Event(_init);
}

void GaitPath_SendGoal_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<human_interfaces::action::GaitPath_SendGoal_Event *>(message_memory);
  typed_message->~GaitPath_SendGoal_Event();
}

size_t size_function__GaitPath_SendGoal_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<human_interfaces::action::GaitPath_SendGoal_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GaitPath_SendGoal_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<human_interfaces::action::GaitPath_SendGoal_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__GaitPath_SendGoal_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<human_interfaces::action::GaitPath_SendGoal_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__GaitPath_SendGoal_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const human_interfaces::action::GaitPath_SendGoal_Request *>(
    get_const_function__GaitPath_SendGoal_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<human_interfaces::action::GaitPath_SendGoal_Request *>(untyped_value);
  value = item;
}

void assign_function__GaitPath_SendGoal_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<human_interfaces::action::GaitPath_SendGoal_Request *>(
    get_function__GaitPath_SendGoal_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const human_interfaces::action::GaitPath_SendGoal_Request *>(untyped_value);
  item = value;
}

void resize_function__GaitPath_SendGoal_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<human_interfaces::action::GaitPath_SendGoal_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GaitPath_SendGoal_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<human_interfaces::action::GaitPath_SendGoal_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GaitPath_SendGoal_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<human_interfaces::action::GaitPath_SendGoal_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__GaitPath_SendGoal_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<human_interfaces::action::GaitPath_SendGoal_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__GaitPath_SendGoal_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const human_interfaces::action::GaitPath_SendGoal_Response *>(
    get_const_function__GaitPath_SendGoal_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<human_interfaces::action::GaitPath_SendGoal_Response *>(untyped_value);
  value = item;
}

void assign_function__GaitPath_SendGoal_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<human_interfaces::action::GaitPath_SendGoal_Response *>(
    get_function__GaitPath_SendGoal_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const human_interfaces::action::GaitPath_SendGoal_Response *>(untyped_value);
  item = value;
}

void resize_function__GaitPath_SendGoal_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<human_interfaces::action::GaitPath_SendGoal_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GaitPath_SendGoal_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces::action::GaitPath_SendGoal_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<human_interfaces::action::GaitPath_SendGoal_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(human_interfaces::action::GaitPath_SendGoal_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__GaitPath_SendGoal_Event__request,  // size() function pointer
    get_const_function__GaitPath_SendGoal_Event__request,  // get_const(index) function pointer
    get_function__GaitPath_SendGoal_Event__request,  // get(index) function pointer
    fetch_function__GaitPath_SendGoal_Event__request,  // fetch(index, &value) function pointer
    assign_function__GaitPath_SendGoal_Event__request,  // assign(index, value) function pointer
    resize_function__GaitPath_SendGoal_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<human_interfaces::action::GaitPath_SendGoal_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(human_interfaces::action::GaitPath_SendGoal_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__GaitPath_SendGoal_Event__response,  // size() function pointer
    get_const_function__GaitPath_SendGoal_Event__response,  // get_const(index) function pointer
    get_function__GaitPath_SendGoal_Event__response,  // get(index) function pointer
    fetch_function__GaitPath_SendGoal_Event__response,  // fetch(index, &value) function pointer
    assign_function__GaitPath_SendGoal_Event__response,  // assign(index, value) function pointer
    resize_function__GaitPath_SendGoal_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GaitPath_SendGoal_Event_message_members = {
  "human_interfaces::action",  // message namespace
  "GaitPath_SendGoal_Event",  // message name
  3,  // number of fields
  sizeof(human_interfaces::action::GaitPath_SendGoal_Event),
  false,  // has_any_key_member_
  GaitPath_SendGoal_Event_message_member_array,  // message members
  GaitPath_SendGoal_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  GaitPath_SendGoal_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GaitPath_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GaitPath_SendGoal_Event_message_members,
  get_message_typesupport_handle_function,
  &human_interfaces__action__GaitPath_SendGoal_Event__get_type_hash,
  &human_interfaces__action__GaitPath_SendGoal_Event__get_type_description,
  &human_interfaces__action__GaitPath_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace human_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<human_interfaces::action::GaitPath_SendGoal_Event>()
{
  return &::human_interfaces::action::rosidl_typesupport_introspection_cpp::GaitPath_SendGoal_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, human_interfaces, action, GaitPath_SendGoal_Event)() {
  return &::human_interfaces::action::rosidl_typesupport_introspection_cpp::GaitPath_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__functions.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace human_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GaitPath_SendGoal_service_members = {
  "human_interfaces::action",  // service namespace
  "GaitPath_SendGoal",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<human_interfaces::action::GaitPath_SendGoal>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t GaitPath_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GaitPath_SendGoal_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<human_interfaces::action::GaitPath_SendGoal_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<human_interfaces::action::GaitPath_SendGoal_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<human_interfaces::action::GaitPath_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<human_interfaces::action::GaitPath_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<human_interfaces::action::GaitPath_SendGoal>,
  &human_interfaces__action__GaitPath_SendGoal__get_type_hash,
  &human_interfaces__action__GaitPath_SendGoal__get_type_description,
  &human_interfaces__action__GaitPath_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace human_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<human_interfaces::action::GaitPath_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::human_interfaces::action::rosidl_typesupport_introspection_cpp::GaitPath_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::human_interfaces::action::GaitPath_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::human_interfaces::action::GaitPath_SendGoal_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::human_interfaces::action::GaitPath_SendGoal_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, human_interfaces, action, GaitPath_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<human_interfaces::action::GaitPath_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__functions.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace human_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GaitPath_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) human_interfaces::action::GaitPath_GetResult_Request(_init);
}

void GaitPath_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<human_interfaces::action::GaitPath_GetResult_Request *>(message_memory);
  typed_message->~GaitPath_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GaitPath_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces::action::GaitPath_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GaitPath_GetResult_Request_message_members = {
  "human_interfaces::action",  // message namespace
  "GaitPath_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(human_interfaces::action::GaitPath_GetResult_Request),
  false,  // has_any_key_member_
  GaitPath_GetResult_Request_message_member_array,  // message members
  GaitPath_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GaitPath_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GaitPath_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GaitPath_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
  &human_interfaces__action__GaitPath_GetResult_Request__get_type_hash,
  &human_interfaces__action__GaitPath_GetResult_Request__get_type_description,
  &human_interfaces__action__GaitPath_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace human_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<human_interfaces::action::GaitPath_GetResult_Request>()
{
  return &::human_interfaces::action::rosidl_typesupport_introspection_cpp::GaitPath_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, human_interfaces, action, GaitPath_GetResult_Request)() {
  return &::human_interfaces::action::rosidl_typesupport_introspection_cpp::GaitPath_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__functions.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace human_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GaitPath_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) human_interfaces::action::GaitPath_GetResult_Response(_init);
}

void GaitPath_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<human_interfaces::action::GaitPath_GetResult_Response *>(message_memory);
  typed_message->~GaitPath_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GaitPath_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces::action::GaitPath_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<human_interfaces::action::GaitPath_Result>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces::action::GaitPath_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GaitPath_GetResult_Response_message_members = {
  "human_interfaces::action",  // message namespace
  "GaitPath_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(human_interfaces::action::GaitPath_GetResult_Response),
  false,  // has_any_key_member_
  GaitPath_GetResult_Response_message_member_array,  // message members
  GaitPath_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GaitPath_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GaitPath_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GaitPath_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
  &human_interfaces__action__GaitPath_GetResult_Response__get_type_hash,
  &human_interfaces__action__GaitPath_GetResult_Response__get_type_description,
  &human_interfaces__action__GaitPath_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace human_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<human_interfaces::action::GaitPath_GetResult_Response>()
{
  return &::human_interfaces::action::rosidl_typesupport_introspection_cpp::GaitPath_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, human_interfaces, action, GaitPath_GetResult_Response)() {
  return &::human_interfaces::action::rosidl_typesupport_introspection_cpp::GaitPath_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__functions.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace human_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GaitPath_GetResult_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) human_interfaces::action::GaitPath_GetResult_Event(_init);
}

void GaitPath_GetResult_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<human_interfaces::action::GaitPath_GetResult_Event *>(message_memory);
  typed_message->~GaitPath_GetResult_Event();
}

size_t size_function__GaitPath_GetResult_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<human_interfaces::action::GaitPath_GetResult_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GaitPath_GetResult_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<human_interfaces::action::GaitPath_GetResult_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__GaitPath_GetResult_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<human_interfaces::action::GaitPath_GetResult_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__GaitPath_GetResult_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const human_interfaces::action::GaitPath_GetResult_Request *>(
    get_const_function__GaitPath_GetResult_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<human_interfaces::action::GaitPath_GetResult_Request *>(untyped_value);
  value = item;
}

void assign_function__GaitPath_GetResult_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<human_interfaces::action::GaitPath_GetResult_Request *>(
    get_function__GaitPath_GetResult_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const human_interfaces::action::GaitPath_GetResult_Request *>(untyped_value);
  item = value;
}

void resize_function__GaitPath_GetResult_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<human_interfaces::action::GaitPath_GetResult_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GaitPath_GetResult_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<human_interfaces::action::GaitPath_GetResult_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GaitPath_GetResult_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<human_interfaces::action::GaitPath_GetResult_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__GaitPath_GetResult_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<human_interfaces::action::GaitPath_GetResult_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__GaitPath_GetResult_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const human_interfaces::action::GaitPath_GetResult_Response *>(
    get_const_function__GaitPath_GetResult_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<human_interfaces::action::GaitPath_GetResult_Response *>(untyped_value);
  value = item;
}

void assign_function__GaitPath_GetResult_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<human_interfaces::action::GaitPath_GetResult_Response *>(
    get_function__GaitPath_GetResult_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const human_interfaces::action::GaitPath_GetResult_Response *>(untyped_value);
  item = value;
}

void resize_function__GaitPath_GetResult_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<human_interfaces::action::GaitPath_GetResult_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GaitPath_GetResult_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces::action::GaitPath_GetResult_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<human_interfaces::action::GaitPath_GetResult_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(human_interfaces::action::GaitPath_GetResult_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__GaitPath_GetResult_Event__request,  // size() function pointer
    get_const_function__GaitPath_GetResult_Event__request,  // get_const(index) function pointer
    get_function__GaitPath_GetResult_Event__request,  // get(index) function pointer
    fetch_function__GaitPath_GetResult_Event__request,  // fetch(index, &value) function pointer
    assign_function__GaitPath_GetResult_Event__request,  // assign(index, value) function pointer
    resize_function__GaitPath_GetResult_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<human_interfaces::action::GaitPath_GetResult_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(human_interfaces::action::GaitPath_GetResult_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__GaitPath_GetResult_Event__response,  // size() function pointer
    get_const_function__GaitPath_GetResult_Event__response,  // get_const(index) function pointer
    get_function__GaitPath_GetResult_Event__response,  // get(index) function pointer
    fetch_function__GaitPath_GetResult_Event__response,  // fetch(index, &value) function pointer
    assign_function__GaitPath_GetResult_Event__response,  // assign(index, value) function pointer
    resize_function__GaitPath_GetResult_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GaitPath_GetResult_Event_message_members = {
  "human_interfaces::action",  // message namespace
  "GaitPath_GetResult_Event",  // message name
  3,  // number of fields
  sizeof(human_interfaces::action::GaitPath_GetResult_Event),
  false,  // has_any_key_member_
  GaitPath_GetResult_Event_message_member_array,  // message members
  GaitPath_GetResult_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  GaitPath_GetResult_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GaitPath_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GaitPath_GetResult_Event_message_members,
  get_message_typesupport_handle_function,
  &human_interfaces__action__GaitPath_GetResult_Event__get_type_hash,
  &human_interfaces__action__GaitPath_GetResult_Event__get_type_description,
  &human_interfaces__action__GaitPath_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace human_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<human_interfaces::action::GaitPath_GetResult_Event>()
{
  return &::human_interfaces::action::rosidl_typesupport_introspection_cpp::GaitPath_GetResult_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, human_interfaces, action, GaitPath_GetResult_Event)() {
  return &::human_interfaces::action::rosidl_typesupport_introspection_cpp::GaitPath_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__functions.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace human_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GaitPath_GetResult_service_members = {
  "human_interfaces::action",  // service namespace
  "GaitPath_GetResult",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<human_interfaces::action::GaitPath_GetResult>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t GaitPath_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GaitPath_GetResult_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<human_interfaces::action::GaitPath_GetResult_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<human_interfaces::action::GaitPath_GetResult_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<human_interfaces::action::GaitPath_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<human_interfaces::action::GaitPath_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<human_interfaces::action::GaitPath_GetResult>,
  &human_interfaces__action__GaitPath_GetResult__get_type_hash,
  &human_interfaces__action__GaitPath_GetResult__get_type_description,
  &human_interfaces__action__GaitPath_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace human_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<human_interfaces::action::GaitPath_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::human_interfaces::action::rosidl_typesupport_introspection_cpp::GaitPath_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::human_interfaces::action::GaitPath_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::human_interfaces::action::GaitPath_GetResult_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::human_interfaces::action::GaitPath_GetResult_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, human_interfaces, action, GaitPath_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<human_interfaces::action::GaitPath_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__functions.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace human_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GaitPath_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) human_interfaces::action::GaitPath_FeedbackMessage(_init);
}

void GaitPath_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<human_interfaces::action::GaitPath_FeedbackMessage *>(message_memory);
  typed_message->~GaitPath_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GaitPath_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces::action::GaitPath_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<human_interfaces::action::GaitPath_Feedback>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces::action::GaitPath_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GaitPath_FeedbackMessage_message_members = {
  "human_interfaces::action",  // message namespace
  "GaitPath_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(human_interfaces::action::GaitPath_FeedbackMessage),
  false,  // has_any_key_member_
  GaitPath_FeedbackMessage_message_member_array,  // message members
  GaitPath_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  GaitPath_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GaitPath_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GaitPath_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
  &human_interfaces__action__GaitPath_FeedbackMessage__get_type_hash,
  &human_interfaces__action__GaitPath_FeedbackMessage__get_type_description,
  &human_interfaces__action__GaitPath_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace human_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<human_interfaces::action::GaitPath_FeedbackMessage>()
{
  return &::human_interfaces::action::rosidl_typesupport_introspection_cpp::GaitPath_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, human_interfaces, action, GaitPath_FeedbackMessage)() {
  return &::human_interfaces::action::rosidl_typesupport_introspection_cpp::GaitPath_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
