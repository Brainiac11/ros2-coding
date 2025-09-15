// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from control_msgs:msg/MotionPrimitive.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "control_msgs/msg/detail/motion_primitive__rosidl_typesupport_introspection_c.h"
#include "control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "control_msgs/msg/detail/motion_primitive__functions.h"
#include "control_msgs/msg/detail/motion_primitive__struct.h"


// Include directives for member types
// Member `additional_arguments`
#include "control_msgs/msg/motion_argument.h"
// Member `additional_arguments`
#include "control_msgs/msg/detail/motion_argument__rosidl_typesupport_introspection_c.h"
// Member `poses`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `poses`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"
// Member `joint_positions`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__MotionPrimitive_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  control_msgs__msg__MotionPrimitive__init(message_memory);
}

void control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__MotionPrimitive_fini_function(void * message_memory)
{
  control_msgs__msg__MotionPrimitive__fini(message_memory);
}

size_t control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__size_function__MotionPrimitive__additional_arguments(
  const void * untyped_member)
{
  const control_msgs__msg__MotionArgument__Sequence * member =
    (const control_msgs__msg__MotionArgument__Sequence *)(untyped_member);
  return member->size;
}

const void * control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__get_const_function__MotionPrimitive__additional_arguments(
  const void * untyped_member, size_t index)
{
  const control_msgs__msg__MotionArgument__Sequence * member =
    (const control_msgs__msg__MotionArgument__Sequence *)(untyped_member);
  return &member->data[index];
}

void * control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__get_function__MotionPrimitive__additional_arguments(
  void * untyped_member, size_t index)
{
  control_msgs__msg__MotionArgument__Sequence * member =
    (control_msgs__msg__MotionArgument__Sequence *)(untyped_member);
  return &member->data[index];
}

void control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__fetch_function__MotionPrimitive__additional_arguments(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const control_msgs__msg__MotionArgument * item =
    ((const control_msgs__msg__MotionArgument *)
    control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__get_const_function__MotionPrimitive__additional_arguments(untyped_member, index));
  control_msgs__msg__MotionArgument * value =
    (control_msgs__msg__MotionArgument *)(untyped_value);
  *value = *item;
}

void control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__assign_function__MotionPrimitive__additional_arguments(
  void * untyped_member, size_t index, const void * untyped_value)
{
  control_msgs__msg__MotionArgument * item =
    ((control_msgs__msg__MotionArgument *)
    control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__get_function__MotionPrimitive__additional_arguments(untyped_member, index));
  const control_msgs__msg__MotionArgument * value =
    (const control_msgs__msg__MotionArgument *)(untyped_value);
  *item = *value;
}

bool control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__resize_function__MotionPrimitive__additional_arguments(
  void * untyped_member, size_t size)
{
  control_msgs__msg__MotionArgument__Sequence * member =
    (control_msgs__msg__MotionArgument__Sequence *)(untyped_member);
  control_msgs__msg__MotionArgument__Sequence__fini(member);
  return control_msgs__msg__MotionArgument__Sequence__init(member, size);
}

size_t control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__size_function__MotionPrimitive__poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__PoseStamped__Sequence * member =
    (const geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return member->size;
}

const void * control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__get_const_function__MotionPrimitive__poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__PoseStamped__Sequence * member =
    (const geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__get_function__MotionPrimitive__poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__PoseStamped__Sequence * member =
    (geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__fetch_function__MotionPrimitive__poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__PoseStamped * item =
    ((const geometry_msgs__msg__PoseStamped *)
    control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__get_const_function__MotionPrimitive__poses(untyped_member, index));
  geometry_msgs__msg__PoseStamped * value =
    (geometry_msgs__msg__PoseStamped *)(untyped_value);
  *value = *item;
}

void control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__assign_function__MotionPrimitive__poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__PoseStamped * item =
    ((geometry_msgs__msg__PoseStamped *)
    control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__get_function__MotionPrimitive__poses(untyped_member, index));
  const geometry_msgs__msg__PoseStamped * value =
    (const geometry_msgs__msg__PoseStamped *)(untyped_value);
  *item = *value;
}

bool control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__resize_function__MotionPrimitive__poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__PoseStamped__Sequence * member =
    (geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  geometry_msgs__msg__PoseStamped__Sequence__fini(member);
  return geometry_msgs__msg__PoseStamped__Sequence__init(member, size);
}

size_t control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__size_function__MotionPrimitive__joint_positions(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__get_const_function__MotionPrimitive__joint_positions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__get_function__MotionPrimitive__joint_positions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__fetch_function__MotionPrimitive__joint_positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__get_const_function__MotionPrimitive__joint_positions(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__assign_function__MotionPrimitive__joint_positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__get_function__MotionPrimitive__joint_positions(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__resize_function__MotionPrimitive__joint_positions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__MotionPrimitive_message_member_array[5] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__MotionPrimitive, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "blend_radius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__MotionPrimitive, blend_radius),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "additional_arguments",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__MotionPrimitive, additional_arguments),  // bytes offset in struct
    NULL,  // default value
    control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__size_function__MotionPrimitive__additional_arguments,  // size() function pointer
    control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__get_const_function__MotionPrimitive__additional_arguments,  // get_const(index) function pointer
    control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__get_function__MotionPrimitive__additional_arguments,  // get(index) function pointer
    control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__fetch_function__MotionPrimitive__additional_arguments,  // fetch(index, &value) function pointer
    control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__assign_function__MotionPrimitive__additional_arguments,  // assign(index, value) function pointer
    control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__resize_function__MotionPrimitive__additional_arguments  // resize(index) function pointer
  },
  {
    "poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__MotionPrimitive, poses),  // bytes offset in struct
    NULL,  // default value
    control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__size_function__MotionPrimitive__poses,  // size() function pointer
    control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__get_const_function__MotionPrimitive__poses,  // get_const(index) function pointer
    control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__get_function__MotionPrimitive__poses,  // get(index) function pointer
    control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__fetch_function__MotionPrimitive__poses,  // fetch(index, &value) function pointer
    control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__assign_function__MotionPrimitive__poses,  // assign(index, value) function pointer
    control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__resize_function__MotionPrimitive__poses  // resize(index) function pointer
  },
  {
    "joint_positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__MotionPrimitive, joint_positions),  // bytes offset in struct
    NULL,  // default value
    control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__size_function__MotionPrimitive__joint_positions,  // size() function pointer
    control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__get_const_function__MotionPrimitive__joint_positions,  // get_const(index) function pointer
    control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__get_function__MotionPrimitive__joint_positions,  // get(index) function pointer
    control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__fetch_function__MotionPrimitive__joint_positions,  // fetch(index, &value) function pointer
    control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__assign_function__MotionPrimitive__joint_positions,  // assign(index, value) function pointer
    control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__resize_function__MotionPrimitive__joint_positions  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__MotionPrimitive_message_members = {
  "control_msgs__msg",  // message namespace
  "MotionPrimitive",  // message name
  5,  // number of fields
  sizeof(control_msgs__msg__MotionPrimitive),
  false,  // has_any_key_member_
  control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__MotionPrimitive_message_member_array,  // message members
  control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__MotionPrimitive_init_function,  // function to initialize message memory (memory has to be allocated)
  control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__MotionPrimitive_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__MotionPrimitive_message_type_support_handle = {
  0,
  &control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__MotionPrimitive_message_members,
  get_message_typesupport_handle_function,
  &control_msgs__msg__MotionPrimitive__get_type_hash,
  &control_msgs__msg__MotionPrimitive__get_type_description,
  &control_msgs__msg__MotionPrimitive__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, msg, MotionPrimitive)() {
  control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__MotionPrimitive_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, msg, MotionArgument)();
  control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__MotionPrimitive_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  if (!control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__MotionPrimitive_message_type_support_handle.typesupport_identifier) {
    control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__MotionPrimitive_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &control_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__MotionPrimitive_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
