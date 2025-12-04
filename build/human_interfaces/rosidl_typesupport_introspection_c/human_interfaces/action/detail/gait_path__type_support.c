// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from human_interfaces:action/GaitPath.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "human_interfaces/action/detail/gait_path__rosidl_typesupport_introspection_c.h"
#include "human_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "human_interfaces/action/detail/gait_path__functions.h"
#include "human_interfaces/action/detail/gait_path__struct.h"


// Include directives for member types
// Member `point`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void human_interfaces__action__GaitPath_Goal__rosidl_typesupport_introspection_c__GaitPath_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  human_interfaces__action__GaitPath_Goal__init(message_memory);
}

void human_interfaces__action__GaitPath_Goal__rosidl_typesupport_introspection_c__GaitPath_Goal_fini_function(void * message_memory)
{
  human_interfaces__action__GaitPath_Goal__fini(message_memory);
}

size_t human_interfaces__action__GaitPath_Goal__rosidl_typesupport_introspection_c__size_function__GaitPath_Goal__point(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * human_interfaces__action__GaitPath_Goal__rosidl_typesupport_introspection_c__get_const_function__GaitPath_Goal__point(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * human_interfaces__action__GaitPath_Goal__rosidl_typesupport_introspection_c__get_function__GaitPath_Goal__point(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void human_interfaces__action__GaitPath_Goal__rosidl_typesupport_introspection_c__fetch_function__GaitPath_Goal__point(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    human_interfaces__action__GaitPath_Goal__rosidl_typesupport_introspection_c__get_const_function__GaitPath_Goal__point(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void human_interfaces__action__GaitPath_Goal__rosidl_typesupport_introspection_c__assign_function__GaitPath_Goal__point(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    human_interfaces__action__GaitPath_Goal__rosidl_typesupport_introspection_c__get_function__GaitPath_Goal__point(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool human_interfaces__action__GaitPath_Goal__rosidl_typesupport_introspection_c__resize_function__GaitPath_Goal__point(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember human_interfaces__action__GaitPath_Goal__rosidl_typesupport_introspection_c__GaitPath_Goal_message_member_array[1] = {
  {
    "point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces__action__GaitPath_Goal, point),  // bytes offset in struct
    NULL,  // default value
    human_interfaces__action__GaitPath_Goal__rosidl_typesupport_introspection_c__size_function__GaitPath_Goal__point,  // size() function pointer
    human_interfaces__action__GaitPath_Goal__rosidl_typesupport_introspection_c__get_const_function__GaitPath_Goal__point,  // get_const(index) function pointer
    human_interfaces__action__GaitPath_Goal__rosidl_typesupport_introspection_c__get_function__GaitPath_Goal__point,  // get(index) function pointer
    human_interfaces__action__GaitPath_Goal__rosidl_typesupport_introspection_c__fetch_function__GaitPath_Goal__point,  // fetch(index, &value) function pointer
    human_interfaces__action__GaitPath_Goal__rosidl_typesupport_introspection_c__assign_function__GaitPath_Goal__point,  // assign(index, value) function pointer
    human_interfaces__action__GaitPath_Goal__rosidl_typesupport_introspection_c__resize_function__GaitPath_Goal__point  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers human_interfaces__action__GaitPath_Goal__rosidl_typesupport_introspection_c__GaitPath_Goal_message_members = {
  "human_interfaces__action",  // message namespace
  "GaitPath_Goal",  // message name
  1,  // number of fields
  sizeof(human_interfaces__action__GaitPath_Goal),
  false,  // has_any_key_member_
  human_interfaces__action__GaitPath_Goal__rosidl_typesupport_introspection_c__GaitPath_Goal_message_member_array,  // message members
  human_interfaces__action__GaitPath_Goal__rosidl_typesupport_introspection_c__GaitPath_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  human_interfaces__action__GaitPath_Goal__rosidl_typesupport_introspection_c__GaitPath_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t human_interfaces__action__GaitPath_Goal__rosidl_typesupport_introspection_c__GaitPath_Goal_message_type_support_handle = {
  0,
  &human_interfaces__action__GaitPath_Goal__rosidl_typesupport_introspection_c__GaitPath_Goal_message_members,
  get_message_typesupport_handle_function,
  &human_interfaces__action__GaitPath_Goal__get_type_hash,
  &human_interfaces__action__GaitPath_Goal__get_type_description,
  &human_interfaces__action__GaitPath_Goal__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_human_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, action, GaitPath_Goal)() {
  if (!human_interfaces__action__GaitPath_Goal__rosidl_typesupport_introspection_c__GaitPath_Goal_message_type_support_handle.typesupport_identifier) {
    human_interfaces__action__GaitPath_Goal__rosidl_typesupport_introspection_c__GaitPath_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &human_interfaces__action__GaitPath_Goal__rosidl_typesupport_introspection_c__GaitPath_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "human_interfaces/action/detail/gait_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "human_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__functions.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__struct.h"


// Include directives for member types
// Member `joint_angles`
#include "std_msgs/msg/float64_multi_array.h"
// Member `joint_angles`
#include "std_msgs/msg/detail/float64_multi_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void human_interfaces__action__GaitPath_Result__rosidl_typesupport_introspection_c__GaitPath_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  human_interfaces__action__GaitPath_Result__init(message_memory);
}

void human_interfaces__action__GaitPath_Result__rosidl_typesupport_introspection_c__GaitPath_Result_fini_function(void * message_memory)
{
  human_interfaces__action__GaitPath_Result__fini(message_memory);
}

size_t human_interfaces__action__GaitPath_Result__rosidl_typesupport_introspection_c__size_function__GaitPath_Result__joint_angles(
  const void * untyped_member)
{
  const std_msgs__msg__Float64MultiArray__Sequence * member =
    (const std_msgs__msg__Float64MultiArray__Sequence *)(untyped_member);
  return member->size;
}

const void * human_interfaces__action__GaitPath_Result__rosidl_typesupport_introspection_c__get_const_function__GaitPath_Result__joint_angles(
  const void * untyped_member, size_t index)
{
  const std_msgs__msg__Float64MultiArray__Sequence * member =
    (const std_msgs__msg__Float64MultiArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * human_interfaces__action__GaitPath_Result__rosidl_typesupport_introspection_c__get_function__GaitPath_Result__joint_angles(
  void * untyped_member, size_t index)
{
  std_msgs__msg__Float64MultiArray__Sequence * member =
    (std_msgs__msg__Float64MultiArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void human_interfaces__action__GaitPath_Result__rosidl_typesupport_introspection_c__fetch_function__GaitPath_Result__joint_angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const std_msgs__msg__Float64MultiArray * item =
    ((const std_msgs__msg__Float64MultiArray *)
    human_interfaces__action__GaitPath_Result__rosidl_typesupport_introspection_c__get_const_function__GaitPath_Result__joint_angles(untyped_member, index));
  std_msgs__msg__Float64MultiArray * value =
    (std_msgs__msg__Float64MultiArray *)(untyped_value);
  *value = *item;
}

void human_interfaces__action__GaitPath_Result__rosidl_typesupport_introspection_c__assign_function__GaitPath_Result__joint_angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  std_msgs__msg__Float64MultiArray * item =
    ((std_msgs__msg__Float64MultiArray *)
    human_interfaces__action__GaitPath_Result__rosidl_typesupport_introspection_c__get_function__GaitPath_Result__joint_angles(untyped_member, index));
  const std_msgs__msg__Float64MultiArray * value =
    (const std_msgs__msg__Float64MultiArray *)(untyped_value);
  *item = *value;
}

bool human_interfaces__action__GaitPath_Result__rosidl_typesupport_introspection_c__resize_function__GaitPath_Result__joint_angles(
  void * untyped_member, size_t size)
{
  std_msgs__msg__Float64MultiArray__Sequence * member =
    (std_msgs__msg__Float64MultiArray__Sequence *)(untyped_member);
  std_msgs__msg__Float64MultiArray__Sequence__fini(member);
  return std_msgs__msg__Float64MultiArray__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember human_interfaces__action__GaitPath_Result__rosidl_typesupport_introspection_c__GaitPath_Result_message_member_array[1] = {
  {
    "joint_angles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces__action__GaitPath_Result, joint_angles),  // bytes offset in struct
    NULL,  // default value
    human_interfaces__action__GaitPath_Result__rosidl_typesupport_introspection_c__size_function__GaitPath_Result__joint_angles,  // size() function pointer
    human_interfaces__action__GaitPath_Result__rosidl_typesupport_introspection_c__get_const_function__GaitPath_Result__joint_angles,  // get_const(index) function pointer
    human_interfaces__action__GaitPath_Result__rosidl_typesupport_introspection_c__get_function__GaitPath_Result__joint_angles,  // get(index) function pointer
    human_interfaces__action__GaitPath_Result__rosidl_typesupport_introspection_c__fetch_function__GaitPath_Result__joint_angles,  // fetch(index, &value) function pointer
    human_interfaces__action__GaitPath_Result__rosidl_typesupport_introspection_c__assign_function__GaitPath_Result__joint_angles,  // assign(index, value) function pointer
    human_interfaces__action__GaitPath_Result__rosidl_typesupport_introspection_c__resize_function__GaitPath_Result__joint_angles  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers human_interfaces__action__GaitPath_Result__rosidl_typesupport_introspection_c__GaitPath_Result_message_members = {
  "human_interfaces__action",  // message namespace
  "GaitPath_Result",  // message name
  1,  // number of fields
  sizeof(human_interfaces__action__GaitPath_Result),
  false,  // has_any_key_member_
  human_interfaces__action__GaitPath_Result__rosidl_typesupport_introspection_c__GaitPath_Result_message_member_array,  // message members
  human_interfaces__action__GaitPath_Result__rosidl_typesupport_introspection_c__GaitPath_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  human_interfaces__action__GaitPath_Result__rosidl_typesupport_introspection_c__GaitPath_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t human_interfaces__action__GaitPath_Result__rosidl_typesupport_introspection_c__GaitPath_Result_message_type_support_handle = {
  0,
  &human_interfaces__action__GaitPath_Result__rosidl_typesupport_introspection_c__GaitPath_Result_message_members,
  get_message_typesupport_handle_function,
  &human_interfaces__action__GaitPath_Result__get_type_hash,
  &human_interfaces__action__GaitPath_Result__get_type_description,
  &human_interfaces__action__GaitPath_Result__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_human_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, action, GaitPath_Result)() {
  human_interfaces__action__GaitPath_Result__rosidl_typesupport_introspection_c__GaitPath_Result_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64MultiArray)();
  if (!human_interfaces__action__GaitPath_Result__rosidl_typesupport_introspection_c__GaitPath_Result_message_type_support_handle.typesupport_identifier) {
    human_interfaces__action__GaitPath_Result__rosidl_typesupport_introspection_c__GaitPath_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &human_interfaces__action__GaitPath_Result__rosidl_typesupport_introspection_c__GaitPath_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "human_interfaces/action/detail/gait_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "human_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__functions.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__struct.h"


// Include directives for member types
// Member `partial_joint_angles`
// already included above
// #include "std_msgs/msg/float64_multi_array.h"
// Member `partial_joint_angles`
// already included above
// #include "std_msgs/msg/detail/float64_multi_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void human_interfaces__action__GaitPath_Feedback__rosidl_typesupport_introspection_c__GaitPath_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  human_interfaces__action__GaitPath_Feedback__init(message_memory);
}

void human_interfaces__action__GaitPath_Feedback__rosidl_typesupport_introspection_c__GaitPath_Feedback_fini_function(void * message_memory)
{
  human_interfaces__action__GaitPath_Feedback__fini(message_memory);
}

size_t human_interfaces__action__GaitPath_Feedback__rosidl_typesupport_introspection_c__size_function__GaitPath_Feedback__partial_joint_angles(
  const void * untyped_member)
{
  const std_msgs__msg__Float64MultiArray__Sequence * member =
    (const std_msgs__msg__Float64MultiArray__Sequence *)(untyped_member);
  return member->size;
}

const void * human_interfaces__action__GaitPath_Feedback__rosidl_typesupport_introspection_c__get_const_function__GaitPath_Feedback__partial_joint_angles(
  const void * untyped_member, size_t index)
{
  const std_msgs__msg__Float64MultiArray__Sequence * member =
    (const std_msgs__msg__Float64MultiArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * human_interfaces__action__GaitPath_Feedback__rosidl_typesupport_introspection_c__get_function__GaitPath_Feedback__partial_joint_angles(
  void * untyped_member, size_t index)
{
  std_msgs__msg__Float64MultiArray__Sequence * member =
    (std_msgs__msg__Float64MultiArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void human_interfaces__action__GaitPath_Feedback__rosidl_typesupport_introspection_c__fetch_function__GaitPath_Feedback__partial_joint_angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const std_msgs__msg__Float64MultiArray * item =
    ((const std_msgs__msg__Float64MultiArray *)
    human_interfaces__action__GaitPath_Feedback__rosidl_typesupport_introspection_c__get_const_function__GaitPath_Feedback__partial_joint_angles(untyped_member, index));
  std_msgs__msg__Float64MultiArray * value =
    (std_msgs__msg__Float64MultiArray *)(untyped_value);
  *value = *item;
}

void human_interfaces__action__GaitPath_Feedback__rosidl_typesupport_introspection_c__assign_function__GaitPath_Feedback__partial_joint_angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  std_msgs__msg__Float64MultiArray * item =
    ((std_msgs__msg__Float64MultiArray *)
    human_interfaces__action__GaitPath_Feedback__rosidl_typesupport_introspection_c__get_function__GaitPath_Feedback__partial_joint_angles(untyped_member, index));
  const std_msgs__msg__Float64MultiArray * value =
    (const std_msgs__msg__Float64MultiArray *)(untyped_value);
  *item = *value;
}

bool human_interfaces__action__GaitPath_Feedback__rosidl_typesupport_introspection_c__resize_function__GaitPath_Feedback__partial_joint_angles(
  void * untyped_member, size_t size)
{
  std_msgs__msg__Float64MultiArray__Sequence * member =
    (std_msgs__msg__Float64MultiArray__Sequence *)(untyped_member);
  std_msgs__msg__Float64MultiArray__Sequence__fini(member);
  return std_msgs__msg__Float64MultiArray__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember human_interfaces__action__GaitPath_Feedback__rosidl_typesupport_introspection_c__GaitPath_Feedback_message_member_array[1] = {
  {
    "partial_joint_angles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces__action__GaitPath_Feedback, partial_joint_angles),  // bytes offset in struct
    NULL,  // default value
    human_interfaces__action__GaitPath_Feedback__rosidl_typesupport_introspection_c__size_function__GaitPath_Feedback__partial_joint_angles,  // size() function pointer
    human_interfaces__action__GaitPath_Feedback__rosidl_typesupport_introspection_c__get_const_function__GaitPath_Feedback__partial_joint_angles,  // get_const(index) function pointer
    human_interfaces__action__GaitPath_Feedback__rosidl_typesupport_introspection_c__get_function__GaitPath_Feedback__partial_joint_angles,  // get(index) function pointer
    human_interfaces__action__GaitPath_Feedback__rosidl_typesupport_introspection_c__fetch_function__GaitPath_Feedback__partial_joint_angles,  // fetch(index, &value) function pointer
    human_interfaces__action__GaitPath_Feedback__rosidl_typesupport_introspection_c__assign_function__GaitPath_Feedback__partial_joint_angles,  // assign(index, value) function pointer
    human_interfaces__action__GaitPath_Feedback__rosidl_typesupport_introspection_c__resize_function__GaitPath_Feedback__partial_joint_angles  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers human_interfaces__action__GaitPath_Feedback__rosidl_typesupport_introspection_c__GaitPath_Feedback_message_members = {
  "human_interfaces__action",  // message namespace
  "GaitPath_Feedback",  // message name
  1,  // number of fields
  sizeof(human_interfaces__action__GaitPath_Feedback),
  false,  // has_any_key_member_
  human_interfaces__action__GaitPath_Feedback__rosidl_typesupport_introspection_c__GaitPath_Feedback_message_member_array,  // message members
  human_interfaces__action__GaitPath_Feedback__rosidl_typesupport_introspection_c__GaitPath_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  human_interfaces__action__GaitPath_Feedback__rosidl_typesupport_introspection_c__GaitPath_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t human_interfaces__action__GaitPath_Feedback__rosidl_typesupport_introspection_c__GaitPath_Feedback_message_type_support_handle = {
  0,
  &human_interfaces__action__GaitPath_Feedback__rosidl_typesupport_introspection_c__GaitPath_Feedback_message_members,
  get_message_typesupport_handle_function,
  &human_interfaces__action__GaitPath_Feedback__get_type_hash,
  &human_interfaces__action__GaitPath_Feedback__get_type_description,
  &human_interfaces__action__GaitPath_Feedback__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_human_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, action, GaitPath_Feedback)() {
  human_interfaces__action__GaitPath_Feedback__rosidl_typesupport_introspection_c__GaitPath_Feedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64MultiArray)();
  if (!human_interfaces__action__GaitPath_Feedback__rosidl_typesupport_introspection_c__GaitPath_Feedback_message_type_support_handle.typesupport_identifier) {
    human_interfaces__action__GaitPath_Feedback__rosidl_typesupport_introspection_c__GaitPath_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &human_interfaces__action__GaitPath_Feedback__rosidl_typesupport_introspection_c__GaitPath_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "human_interfaces/action/detail/gait_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "human_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__functions.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "human_interfaces/action/gait_path.h"
// Member `goal`
// already included above
// #include "human_interfaces/action/detail/gait_path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void human_interfaces__action__GaitPath_SendGoal_Request__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  human_interfaces__action__GaitPath_SendGoal_Request__init(message_memory);
}

void human_interfaces__action__GaitPath_SendGoal_Request__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Request_fini_function(void * message_memory)
{
  human_interfaces__action__GaitPath_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember human_interfaces__action__GaitPath_SendGoal_Request__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces__action__GaitPath_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces__action__GaitPath_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers human_interfaces__action__GaitPath_SendGoal_Request__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Request_message_members = {
  "human_interfaces__action",  // message namespace
  "GaitPath_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(human_interfaces__action__GaitPath_SendGoal_Request),
  false,  // has_any_key_member_
  human_interfaces__action__GaitPath_SendGoal_Request__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Request_message_member_array,  // message members
  human_interfaces__action__GaitPath_SendGoal_Request__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  human_interfaces__action__GaitPath_SendGoal_Request__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t human_interfaces__action__GaitPath_SendGoal_Request__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Request_message_type_support_handle = {
  0,
  &human_interfaces__action__GaitPath_SendGoal_Request__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
  &human_interfaces__action__GaitPath_SendGoal_Request__get_type_hash,
  &human_interfaces__action__GaitPath_SendGoal_Request__get_type_description,
  &human_interfaces__action__GaitPath_SendGoal_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_human_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, action, GaitPath_SendGoal_Request)() {
  human_interfaces__action__GaitPath_SendGoal_Request__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  human_interfaces__action__GaitPath_SendGoal_Request__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, action, GaitPath_Goal)();
  if (!human_interfaces__action__GaitPath_SendGoal_Request__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    human_interfaces__action__GaitPath_SendGoal_Request__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &human_interfaces__action__GaitPath_SendGoal_Request__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "human_interfaces/action/detail/gait_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "human_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__functions.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void human_interfaces__action__GaitPath_SendGoal_Response__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  human_interfaces__action__GaitPath_SendGoal_Response__init(message_memory);
}

void human_interfaces__action__GaitPath_SendGoal_Response__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Response_fini_function(void * message_memory)
{
  human_interfaces__action__GaitPath_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember human_interfaces__action__GaitPath_SendGoal_Response__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces__action__GaitPath_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces__action__GaitPath_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers human_interfaces__action__GaitPath_SendGoal_Response__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Response_message_members = {
  "human_interfaces__action",  // message namespace
  "GaitPath_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(human_interfaces__action__GaitPath_SendGoal_Response),
  false,  // has_any_key_member_
  human_interfaces__action__GaitPath_SendGoal_Response__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Response_message_member_array,  // message members
  human_interfaces__action__GaitPath_SendGoal_Response__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  human_interfaces__action__GaitPath_SendGoal_Response__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t human_interfaces__action__GaitPath_SendGoal_Response__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Response_message_type_support_handle = {
  0,
  &human_interfaces__action__GaitPath_SendGoal_Response__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
  &human_interfaces__action__GaitPath_SendGoal_Response__get_type_hash,
  &human_interfaces__action__GaitPath_SendGoal_Response__get_type_description,
  &human_interfaces__action__GaitPath_SendGoal_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_human_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, action, GaitPath_SendGoal_Response)() {
  human_interfaces__action__GaitPath_SendGoal_Response__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!human_interfaces__action__GaitPath_SendGoal_Response__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    human_interfaces__action__GaitPath_SendGoal_Response__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &human_interfaces__action__GaitPath_SendGoal_Response__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "human_interfaces/action/detail/gait_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "human_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__functions.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
// already included above
// #include "human_interfaces/action/gait_path.h"
// Member `request`
// Member `response`
// already included above
// #include "human_interfaces/action/detail/gait_path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  human_interfaces__action__GaitPath_SendGoal_Event__init(message_memory);
}

void human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Event_fini_function(void * message_memory)
{
  human_interfaces__action__GaitPath_SendGoal_Event__fini(message_memory);
}

size_t human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__GaitPath_SendGoal_Event__request(
  const void * untyped_member)
{
  const human_interfaces__action__GaitPath_SendGoal_Request__Sequence * member =
    (const human_interfaces__action__GaitPath_SendGoal_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__GaitPath_SendGoal_Event__request(
  const void * untyped_member, size_t index)
{
  const human_interfaces__action__GaitPath_SendGoal_Request__Sequence * member =
    (const human_interfaces__action__GaitPath_SendGoal_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__GaitPath_SendGoal_Event__request(
  void * untyped_member, size_t index)
{
  human_interfaces__action__GaitPath_SendGoal_Request__Sequence * member =
    (human_interfaces__action__GaitPath_SendGoal_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__GaitPath_SendGoal_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const human_interfaces__action__GaitPath_SendGoal_Request * item =
    ((const human_interfaces__action__GaitPath_SendGoal_Request *)
    human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__GaitPath_SendGoal_Event__request(untyped_member, index));
  human_interfaces__action__GaitPath_SendGoal_Request * value =
    (human_interfaces__action__GaitPath_SendGoal_Request *)(untyped_value);
  *value = *item;
}

void human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__GaitPath_SendGoal_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  human_interfaces__action__GaitPath_SendGoal_Request * item =
    ((human_interfaces__action__GaitPath_SendGoal_Request *)
    human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__GaitPath_SendGoal_Event__request(untyped_member, index));
  const human_interfaces__action__GaitPath_SendGoal_Request * value =
    (const human_interfaces__action__GaitPath_SendGoal_Request *)(untyped_value);
  *item = *value;
}

bool human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__GaitPath_SendGoal_Event__request(
  void * untyped_member, size_t size)
{
  human_interfaces__action__GaitPath_SendGoal_Request__Sequence * member =
    (human_interfaces__action__GaitPath_SendGoal_Request__Sequence *)(untyped_member);
  human_interfaces__action__GaitPath_SendGoal_Request__Sequence__fini(member);
  return human_interfaces__action__GaitPath_SendGoal_Request__Sequence__init(member, size);
}

size_t human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__GaitPath_SendGoal_Event__response(
  const void * untyped_member)
{
  const human_interfaces__action__GaitPath_SendGoal_Response__Sequence * member =
    (const human_interfaces__action__GaitPath_SendGoal_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__GaitPath_SendGoal_Event__response(
  const void * untyped_member, size_t index)
{
  const human_interfaces__action__GaitPath_SendGoal_Response__Sequence * member =
    (const human_interfaces__action__GaitPath_SendGoal_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__GaitPath_SendGoal_Event__response(
  void * untyped_member, size_t index)
{
  human_interfaces__action__GaitPath_SendGoal_Response__Sequence * member =
    (human_interfaces__action__GaitPath_SendGoal_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__GaitPath_SendGoal_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const human_interfaces__action__GaitPath_SendGoal_Response * item =
    ((const human_interfaces__action__GaitPath_SendGoal_Response *)
    human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__GaitPath_SendGoal_Event__response(untyped_member, index));
  human_interfaces__action__GaitPath_SendGoal_Response * value =
    (human_interfaces__action__GaitPath_SendGoal_Response *)(untyped_value);
  *value = *item;
}

void human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__GaitPath_SendGoal_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  human_interfaces__action__GaitPath_SendGoal_Response * item =
    ((human_interfaces__action__GaitPath_SendGoal_Response *)
    human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__GaitPath_SendGoal_Event__response(untyped_member, index));
  const human_interfaces__action__GaitPath_SendGoal_Response * value =
    (const human_interfaces__action__GaitPath_SendGoal_Response *)(untyped_value);
  *item = *value;
}

bool human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__GaitPath_SendGoal_Event__response(
  void * untyped_member, size_t size)
{
  human_interfaces__action__GaitPath_SendGoal_Response__Sequence * member =
    (human_interfaces__action__GaitPath_SendGoal_Response__Sequence *)(untyped_member);
  human_interfaces__action__GaitPath_SendGoal_Response__Sequence__fini(member);
  return human_interfaces__action__GaitPath_SendGoal_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces__action__GaitPath_SendGoal_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(human_interfaces__action__GaitPath_SendGoal_Event, request),  // bytes offset in struct
    NULL,  // default value
    human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__GaitPath_SendGoal_Event__request,  // size() function pointer
    human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__GaitPath_SendGoal_Event__request,  // get_const(index) function pointer
    human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__GaitPath_SendGoal_Event__request,  // get(index) function pointer
    human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__GaitPath_SendGoal_Event__request,  // fetch(index, &value) function pointer
    human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__GaitPath_SendGoal_Event__request,  // assign(index, value) function pointer
    human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__GaitPath_SendGoal_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(human_interfaces__action__GaitPath_SendGoal_Event, response),  // bytes offset in struct
    NULL,  // default value
    human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__GaitPath_SendGoal_Event__response,  // size() function pointer
    human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__GaitPath_SendGoal_Event__response,  // get_const(index) function pointer
    human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__GaitPath_SendGoal_Event__response,  // get(index) function pointer
    human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__GaitPath_SendGoal_Event__response,  // fetch(index, &value) function pointer
    human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__GaitPath_SendGoal_Event__response,  // assign(index, value) function pointer
    human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__GaitPath_SendGoal_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Event_message_members = {
  "human_interfaces__action",  // message namespace
  "GaitPath_SendGoal_Event",  // message name
  3,  // number of fields
  sizeof(human_interfaces__action__GaitPath_SendGoal_Event),
  false,  // has_any_key_member_
  human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Event_message_member_array,  // message members
  human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Event_message_type_support_handle = {
  0,
  &human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Event_message_members,
  get_message_typesupport_handle_function,
  &human_interfaces__action__GaitPath_SendGoal_Event__get_type_hash,
  &human_interfaces__action__GaitPath_SendGoal_Event__get_type_description,
  &human_interfaces__action__GaitPath_SendGoal_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_human_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, action, GaitPath_SendGoal_Event)() {
  human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, action, GaitPath_SendGoal_Request)();
  human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, action, GaitPath_SendGoal_Response)();
  if (!human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Event_message_type_support_handle.typesupport_identifier) {
    human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "human_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers human_interfaces__action__detail__gait_path__rosidl_typesupport_introspection_c__GaitPath_SendGoal_service_members = {
  "human_interfaces__action",  // service namespace
  "GaitPath_SendGoal",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // human_interfaces__action__detail__gait_path__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Request_message_type_support_handle,
  NULL,  // response message
  // human_interfaces__action__detail__gait_path__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Response_message_type_support_handle
  NULL  // event_message
  // human_interfaces__action__detail__gait_path__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Response_message_type_support_handle
};


static rosidl_service_type_support_t human_interfaces__action__detail__gait_path__rosidl_typesupport_introspection_c__GaitPath_SendGoal_service_type_support_handle = {
  0,
  &human_interfaces__action__detail__gait_path__rosidl_typesupport_introspection_c__GaitPath_SendGoal_service_members,
  get_service_typesupport_handle_function,
  &human_interfaces__action__GaitPath_SendGoal_Request__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Request_message_type_support_handle,
  &human_interfaces__action__GaitPath_SendGoal_Response__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Response_message_type_support_handle,
  &human_interfaces__action__GaitPath_SendGoal_Event__rosidl_typesupport_introspection_c__GaitPath_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    human_interfaces,
    action,
    GaitPath_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    human_interfaces,
    action,
    GaitPath_SendGoal
  ),
  &human_interfaces__action__GaitPath_SendGoal__get_type_hash,
  &human_interfaces__action__GaitPath_SendGoal__get_type_description,
  &human_interfaces__action__GaitPath_SendGoal__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, action, GaitPath_SendGoal_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, action, GaitPath_SendGoal_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, action, GaitPath_SendGoal_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_human_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, action, GaitPath_SendGoal)(void) {
  if (!human_interfaces__action__detail__gait_path__rosidl_typesupport_introspection_c__GaitPath_SendGoal_service_type_support_handle.typesupport_identifier) {
    human_interfaces__action__detail__gait_path__rosidl_typesupport_introspection_c__GaitPath_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)human_interfaces__action__detail__gait_path__rosidl_typesupport_introspection_c__GaitPath_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, action, GaitPath_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, action, GaitPath_SendGoal_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, action, GaitPath_SendGoal_Event)()->data;
  }

  return &human_interfaces__action__detail__gait_path__rosidl_typesupport_introspection_c__GaitPath_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "human_interfaces/action/detail/gait_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "human_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__functions.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void human_interfaces__action__GaitPath_GetResult_Request__rosidl_typesupport_introspection_c__GaitPath_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  human_interfaces__action__GaitPath_GetResult_Request__init(message_memory);
}

void human_interfaces__action__GaitPath_GetResult_Request__rosidl_typesupport_introspection_c__GaitPath_GetResult_Request_fini_function(void * message_memory)
{
  human_interfaces__action__GaitPath_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember human_interfaces__action__GaitPath_GetResult_Request__rosidl_typesupport_introspection_c__GaitPath_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces__action__GaitPath_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers human_interfaces__action__GaitPath_GetResult_Request__rosidl_typesupport_introspection_c__GaitPath_GetResult_Request_message_members = {
  "human_interfaces__action",  // message namespace
  "GaitPath_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(human_interfaces__action__GaitPath_GetResult_Request),
  false,  // has_any_key_member_
  human_interfaces__action__GaitPath_GetResult_Request__rosidl_typesupport_introspection_c__GaitPath_GetResult_Request_message_member_array,  // message members
  human_interfaces__action__GaitPath_GetResult_Request__rosidl_typesupport_introspection_c__GaitPath_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  human_interfaces__action__GaitPath_GetResult_Request__rosidl_typesupport_introspection_c__GaitPath_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t human_interfaces__action__GaitPath_GetResult_Request__rosidl_typesupport_introspection_c__GaitPath_GetResult_Request_message_type_support_handle = {
  0,
  &human_interfaces__action__GaitPath_GetResult_Request__rosidl_typesupport_introspection_c__GaitPath_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
  &human_interfaces__action__GaitPath_GetResult_Request__get_type_hash,
  &human_interfaces__action__GaitPath_GetResult_Request__get_type_description,
  &human_interfaces__action__GaitPath_GetResult_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_human_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, action, GaitPath_GetResult_Request)() {
  human_interfaces__action__GaitPath_GetResult_Request__rosidl_typesupport_introspection_c__GaitPath_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!human_interfaces__action__GaitPath_GetResult_Request__rosidl_typesupport_introspection_c__GaitPath_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    human_interfaces__action__GaitPath_GetResult_Request__rosidl_typesupport_introspection_c__GaitPath_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &human_interfaces__action__GaitPath_GetResult_Request__rosidl_typesupport_introspection_c__GaitPath_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "human_interfaces/action/detail/gait_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "human_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__functions.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "human_interfaces/action/gait_path.h"
// Member `result`
// already included above
// #include "human_interfaces/action/detail/gait_path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void human_interfaces__action__GaitPath_GetResult_Response__rosidl_typesupport_introspection_c__GaitPath_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  human_interfaces__action__GaitPath_GetResult_Response__init(message_memory);
}

void human_interfaces__action__GaitPath_GetResult_Response__rosidl_typesupport_introspection_c__GaitPath_GetResult_Response_fini_function(void * message_memory)
{
  human_interfaces__action__GaitPath_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember human_interfaces__action__GaitPath_GetResult_Response__rosidl_typesupport_introspection_c__GaitPath_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces__action__GaitPath_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces__action__GaitPath_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers human_interfaces__action__GaitPath_GetResult_Response__rosidl_typesupport_introspection_c__GaitPath_GetResult_Response_message_members = {
  "human_interfaces__action",  // message namespace
  "GaitPath_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(human_interfaces__action__GaitPath_GetResult_Response),
  false,  // has_any_key_member_
  human_interfaces__action__GaitPath_GetResult_Response__rosidl_typesupport_introspection_c__GaitPath_GetResult_Response_message_member_array,  // message members
  human_interfaces__action__GaitPath_GetResult_Response__rosidl_typesupport_introspection_c__GaitPath_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  human_interfaces__action__GaitPath_GetResult_Response__rosidl_typesupport_introspection_c__GaitPath_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t human_interfaces__action__GaitPath_GetResult_Response__rosidl_typesupport_introspection_c__GaitPath_GetResult_Response_message_type_support_handle = {
  0,
  &human_interfaces__action__GaitPath_GetResult_Response__rosidl_typesupport_introspection_c__GaitPath_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
  &human_interfaces__action__GaitPath_GetResult_Response__get_type_hash,
  &human_interfaces__action__GaitPath_GetResult_Response__get_type_description,
  &human_interfaces__action__GaitPath_GetResult_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_human_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, action, GaitPath_GetResult_Response)() {
  human_interfaces__action__GaitPath_GetResult_Response__rosidl_typesupport_introspection_c__GaitPath_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, action, GaitPath_Result)();
  if (!human_interfaces__action__GaitPath_GetResult_Response__rosidl_typesupport_introspection_c__GaitPath_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    human_interfaces__action__GaitPath_GetResult_Response__rosidl_typesupport_introspection_c__GaitPath_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &human_interfaces__action__GaitPath_GetResult_Response__rosidl_typesupport_introspection_c__GaitPath_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "human_interfaces/action/detail/gait_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "human_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__functions.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__struct.h"


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/service_event_info.h"
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
// already included above
// #include "human_interfaces/action/gait_path.h"
// Member `request`
// Member `response`
// already included above
// #include "human_interfaces/action/detail/gait_path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__GaitPath_GetResult_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  human_interfaces__action__GaitPath_GetResult_Event__init(message_memory);
}

void human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__GaitPath_GetResult_Event_fini_function(void * message_memory)
{
  human_interfaces__action__GaitPath_GetResult_Event__fini(message_memory);
}

size_t human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__size_function__GaitPath_GetResult_Event__request(
  const void * untyped_member)
{
  const human_interfaces__action__GaitPath_GetResult_Request__Sequence * member =
    (const human_interfaces__action__GaitPath_GetResult_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__GaitPath_GetResult_Event__request(
  const void * untyped_member, size_t index)
{
  const human_interfaces__action__GaitPath_GetResult_Request__Sequence * member =
    (const human_interfaces__action__GaitPath_GetResult_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__get_function__GaitPath_GetResult_Event__request(
  void * untyped_member, size_t index)
{
  human_interfaces__action__GaitPath_GetResult_Request__Sequence * member =
    (human_interfaces__action__GaitPath_GetResult_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__GaitPath_GetResult_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const human_interfaces__action__GaitPath_GetResult_Request * item =
    ((const human_interfaces__action__GaitPath_GetResult_Request *)
    human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__GaitPath_GetResult_Event__request(untyped_member, index));
  human_interfaces__action__GaitPath_GetResult_Request * value =
    (human_interfaces__action__GaitPath_GetResult_Request *)(untyped_value);
  *value = *item;
}

void human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__GaitPath_GetResult_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  human_interfaces__action__GaitPath_GetResult_Request * item =
    ((human_interfaces__action__GaitPath_GetResult_Request *)
    human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__get_function__GaitPath_GetResult_Event__request(untyped_member, index));
  const human_interfaces__action__GaitPath_GetResult_Request * value =
    (const human_interfaces__action__GaitPath_GetResult_Request *)(untyped_value);
  *item = *value;
}

bool human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__GaitPath_GetResult_Event__request(
  void * untyped_member, size_t size)
{
  human_interfaces__action__GaitPath_GetResult_Request__Sequence * member =
    (human_interfaces__action__GaitPath_GetResult_Request__Sequence *)(untyped_member);
  human_interfaces__action__GaitPath_GetResult_Request__Sequence__fini(member);
  return human_interfaces__action__GaitPath_GetResult_Request__Sequence__init(member, size);
}

size_t human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__size_function__GaitPath_GetResult_Event__response(
  const void * untyped_member)
{
  const human_interfaces__action__GaitPath_GetResult_Response__Sequence * member =
    (const human_interfaces__action__GaitPath_GetResult_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__GaitPath_GetResult_Event__response(
  const void * untyped_member, size_t index)
{
  const human_interfaces__action__GaitPath_GetResult_Response__Sequence * member =
    (const human_interfaces__action__GaitPath_GetResult_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__get_function__GaitPath_GetResult_Event__response(
  void * untyped_member, size_t index)
{
  human_interfaces__action__GaitPath_GetResult_Response__Sequence * member =
    (human_interfaces__action__GaitPath_GetResult_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__GaitPath_GetResult_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const human_interfaces__action__GaitPath_GetResult_Response * item =
    ((const human_interfaces__action__GaitPath_GetResult_Response *)
    human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__GaitPath_GetResult_Event__response(untyped_member, index));
  human_interfaces__action__GaitPath_GetResult_Response * value =
    (human_interfaces__action__GaitPath_GetResult_Response *)(untyped_value);
  *value = *item;
}

void human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__GaitPath_GetResult_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  human_interfaces__action__GaitPath_GetResult_Response * item =
    ((human_interfaces__action__GaitPath_GetResult_Response *)
    human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__get_function__GaitPath_GetResult_Event__response(untyped_member, index));
  const human_interfaces__action__GaitPath_GetResult_Response * value =
    (const human_interfaces__action__GaitPath_GetResult_Response *)(untyped_value);
  *item = *value;
}

bool human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__GaitPath_GetResult_Event__response(
  void * untyped_member, size_t size)
{
  human_interfaces__action__GaitPath_GetResult_Response__Sequence * member =
    (human_interfaces__action__GaitPath_GetResult_Response__Sequence *)(untyped_member);
  human_interfaces__action__GaitPath_GetResult_Response__Sequence__fini(member);
  return human_interfaces__action__GaitPath_GetResult_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__GaitPath_GetResult_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces__action__GaitPath_GetResult_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(human_interfaces__action__GaitPath_GetResult_Event, request),  // bytes offset in struct
    NULL,  // default value
    human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__size_function__GaitPath_GetResult_Event__request,  // size() function pointer
    human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__GaitPath_GetResult_Event__request,  // get_const(index) function pointer
    human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__get_function__GaitPath_GetResult_Event__request,  // get(index) function pointer
    human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__GaitPath_GetResult_Event__request,  // fetch(index, &value) function pointer
    human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__GaitPath_GetResult_Event__request,  // assign(index, value) function pointer
    human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__GaitPath_GetResult_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(human_interfaces__action__GaitPath_GetResult_Event, response),  // bytes offset in struct
    NULL,  // default value
    human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__size_function__GaitPath_GetResult_Event__response,  // size() function pointer
    human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__GaitPath_GetResult_Event__response,  // get_const(index) function pointer
    human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__get_function__GaitPath_GetResult_Event__response,  // get(index) function pointer
    human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__GaitPath_GetResult_Event__response,  // fetch(index, &value) function pointer
    human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__GaitPath_GetResult_Event__response,  // assign(index, value) function pointer
    human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__GaitPath_GetResult_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__GaitPath_GetResult_Event_message_members = {
  "human_interfaces__action",  // message namespace
  "GaitPath_GetResult_Event",  // message name
  3,  // number of fields
  sizeof(human_interfaces__action__GaitPath_GetResult_Event),
  false,  // has_any_key_member_
  human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__GaitPath_GetResult_Event_message_member_array,  // message members
  human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__GaitPath_GetResult_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__GaitPath_GetResult_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__GaitPath_GetResult_Event_message_type_support_handle = {
  0,
  &human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__GaitPath_GetResult_Event_message_members,
  get_message_typesupport_handle_function,
  &human_interfaces__action__GaitPath_GetResult_Event__get_type_hash,
  &human_interfaces__action__GaitPath_GetResult_Event__get_type_description,
  &human_interfaces__action__GaitPath_GetResult_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_human_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, action, GaitPath_GetResult_Event)() {
  human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__GaitPath_GetResult_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__GaitPath_GetResult_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, action, GaitPath_GetResult_Request)();
  human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__GaitPath_GetResult_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, action, GaitPath_GetResult_Response)();
  if (!human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__GaitPath_GetResult_Event_message_type_support_handle.typesupport_identifier) {
    human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__GaitPath_GetResult_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__GaitPath_GetResult_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "human_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers human_interfaces__action__detail__gait_path__rosidl_typesupport_introspection_c__GaitPath_GetResult_service_members = {
  "human_interfaces__action",  // service namespace
  "GaitPath_GetResult",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // human_interfaces__action__detail__gait_path__rosidl_typesupport_introspection_c__GaitPath_GetResult_Request_message_type_support_handle,
  NULL,  // response message
  // human_interfaces__action__detail__gait_path__rosidl_typesupport_introspection_c__GaitPath_GetResult_Response_message_type_support_handle
  NULL  // event_message
  // human_interfaces__action__detail__gait_path__rosidl_typesupport_introspection_c__GaitPath_GetResult_Response_message_type_support_handle
};


static rosidl_service_type_support_t human_interfaces__action__detail__gait_path__rosidl_typesupport_introspection_c__GaitPath_GetResult_service_type_support_handle = {
  0,
  &human_interfaces__action__detail__gait_path__rosidl_typesupport_introspection_c__GaitPath_GetResult_service_members,
  get_service_typesupport_handle_function,
  &human_interfaces__action__GaitPath_GetResult_Request__rosidl_typesupport_introspection_c__GaitPath_GetResult_Request_message_type_support_handle,
  &human_interfaces__action__GaitPath_GetResult_Response__rosidl_typesupport_introspection_c__GaitPath_GetResult_Response_message_type_support_handle,
  &human_interfaces__action__GaitPath_GetResult_Event__rosidl_typesupport_introspection_c__GaitPath_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    human_interfaces,
    action,
    GaitPath_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    human_interfaces,
    action,
    GaitPath_GetResult
  ),
  &human_interfaces__action__GaitPath_GetResult__get_type_hash,
  &human_interfaces__action__GaitPath_GetResult__get_type_description,
  &human_interfaces__action__GaitPath_GetResult__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, action, GaitPath_GetResult_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, action, GaitPath_GetResult_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, action, GaitPath_GetResult_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_human_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, action, GaitPath_GetResult)(void) {
  if (!human_interfaces__action__detail__gait_path__rosidl_typesupport_introspection_c__GaitPath_GetResult_service_type_support_handle.typesupport_identifier) {
    human_interfaces__action__detail__gait_path__rosidl_typesupport_introspection_c__GaitPath_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)human_interfaces__action__detail__gait_path__rosidl_typesupport_introspection_c__GaitPath_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, action, GaitPath_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, action, GaitPath_GetResult_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, action, GaitPath_GetResult_Event)()->data;
  }

  return &human_interfaces__action__detail__gait_path__rosidl_typesupport_introspection_c__GaitPath_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "human_interfaces/action/detail/gait_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "human_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__functions.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "human_interfaces/action/gait_path.h"
// Member `feedback`
// already included above
// #include "human_interfaces/action/detail/gait_path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void human_interfaces__action__GaitPath_FeedbackMessage__rosidl_typesupport_introspection_c__GaitPath_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  human_interfaces__action__GaitPath_FeedbackMessage__init(message_memory);
}

void human_interfaces__action__GaitPath_FeedbackMessage__rosidl_typesupport_introspection_c__GaitPath_FeedbackMessage_fini_function(void * message_memory)
{
  human_interfaces__action__GaitPath_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember human_interfaces__action__GaitPath_FeedbackMessage__rosidl_typesupport_introspection_c__GaitPath_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces__action__GaitPath_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces__action__GaitPath_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers human_interfaces__action__GaitPath_FeedbackMessage__rosidl_typesupport_introspection_c__GaitPath_FeedbackMessage_message_members = {
  "human_interfaces__action",  // message namespace
  "GaitPath_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(human_interfaces__action__GaitPath_FeedbackMessage),
  false,  // has_any_key_member_
  human_interfaces__action__GaitPath_FeedbackMessage__rosidl_typesupport_introspection_c__GaitPath_FeedbackMessage_message_member_array,  // message members
  human_interfaces__action__GaitPath_FeedbackMessage__rosidl_typesupport_introspection_c__GaitPath_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  human_interfaces__action__GaitPath_FeedbackMessage__rosidl_typesupport_introspection_c__GaitPath_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t human_interfaces__action__GaitPath_FeedbackMessage__rosidl_typesupport_introspection_c__GaitPath_FeedbackMessage_message_type_support_handle = {
  0,
  &human_interfaces__action__GaitPath_FeedbackMessage__rosidl_typesupport_introspection_c__GaitPath_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
  &human_interfaces__action__GaitPath_FeedbackMessage__get_type_hash,
  &human_interfaces__action__GaitPath_FeedbackMessage__get_type_description,
  &human_interfaces__action__GaitPath_FeedbackMessage__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_human_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, action, GaitPath_FeedbackMessage)() {
  human_interfaces__action__GaitPath_FeedbackMessage__rosidl_typesupport_introspection_c__GaitPath_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  human_interfaces__action__GaitPath_FeedbackMessage__rosidl_typesupport_introspection_c__GaitPath_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, action, GaitPath_Feedback)();
  if (!human_interfaces__action__GaitPath_FeedbackMessage__rosidl_typesupport_introspection_c__GaitPath_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    human_interfaces__action__GaitPath_FeedbackMessage__rosidl_typesupport_introspection_c__GaitPath_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &human_interfaces__action__GaitPath_FeedbackMessage__rosidl_typesupport_introspection_c__GaitPath_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
