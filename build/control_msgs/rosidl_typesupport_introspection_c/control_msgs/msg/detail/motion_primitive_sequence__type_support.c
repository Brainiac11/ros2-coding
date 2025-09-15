// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from control_msgs:msg/MotionPrimitiveSequence.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "control_msgs/msg/detail/motion_primitive_sequence__rosidl_typesupport_introspection_c.h"
#include "control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "control_msgs/msg/detail/motion_primitive_sequence__functions.h"
#include "control_msgs/msg/detail/motion_primitive_sequence__struct.h"


// Include directives for member types
// Member `motions`
#include "control_msgs/msg/motion_primitive.h"
// Member `motions`
#include "control_msgs/msg/detail/motion_primitive__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void control_msgs__msg__MotionPrimitiveSequence__rosidl_typesupport_introspection_c__MotionPrimitiveSequence_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  control_msgs__msg__MotionPrimitiveSequence__init(message_memory);
}

void control_msgs__msg__MotionPrimitiveSequence__rosidl_typesupport_introspection_c__MotionPrimitiveSequence_fini_function(void * message_memory)
{
  control_msgs__msg__MotionPrimitiveSequence__fini(message_memory);
}

size_t control_msgs__msg__MotionPrimitiveSequence__rosidl_typesupport_introspection_c__size_function__MotionPrimitiveSequence__motions(
  const void * untyped_member)
{
  const control_msgs__msg__MotionPrimitive__Sequence * member =
    (const control_msgs__msg__MotionPrimitive__Sequence *)(untyped_member);
  return member->size;
}

const void * control_msgs__msg__MotionPrimitiveSequence__rosidl_typesupport_introspection_c__get_const_function__MotionPrimitiveSequence__motions(
  const void * untyped_member, size_t index)
{
  const control_msgs__msg__MotionPrimitive__Sequence * member =
    (const control_msgs__msg__MotionPrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

void * control_msgs__msg__MotionPrimitiveSequence__rosidl_typesupport_introspection_c__get_function__MotionPrimitiveSequence__motions(
  void * untyped_member, size_t index)
{
  control_msgs__msg__MotionPrimitive__Sequence * member =
    (control_msgs__msg__MotionPrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

void control_msgs__msg__MotionPrimitiveSequence__rosidl_typesupport_introspection_c__fetch_function__MotionPrimitiveSequence__motions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const control_msgs__msg__MotionPrimitive * item =
    ((const control_msgs__msg__MotionPrimitive *)
    control_msgs__msg__MotionPrimitiveSequence__rosidl_typesupport_introspection_c__get_const_function__MotionPrimitiveSequence__motions(untyped_member, index));
  control_msgs__msg__MotionPrimitive * value =
    (control_msgs__msg__MotionPrimitive *)(untyped_value);
  *value = *item;
}

void control_msgs__msg__MotionPrimitiveSequence__rosidl_typesupport_introspection_c__assign_function__MotionPrimitiveSequence__motions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  control_msgs__msg__MotionPrimitive * item =
    ((control_msgs__msg__MotionPrimitive *)
    control_msgs__msg__MotionPrimitiveSequence__rosidl_typesupport_introspection_c__get_function__MotionPrimitiveSequence__motions(untyped_member, index));
  const control_msgs__msg__MotionPrimitive * value =
    (const control_msgs__msg__MotionPrimitive *)(untyped_value);
  *item = *value;
}

bool control_msgs__msg__MotionPrimitiveSequence__rosidl_typesupport_introspection_c__resize_function__MotionPrimitiveSequence__motions(
  void * untyped_member, size_t size)
{
  control_msgs__msg__MotionPrimitive__Sequence * member =
    (control_msgs__msg__MotionPrimitive__Sequence *)(untyped_member);
  control_msgs__msg__MotionPrimitive__Sequence__fini(member);
  return control_msgs__msg__MotionPrimitive__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember control_msgs__msg__MotionPrimitiveSequence__rosidl_typesupport_introspection_c__MotionPrimitiveSequence_message_member_array[1] = {
  {
    "motions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__MotionPrimitiveSequence, motions),  // bytes offset in struct
    NULL,  // default value
    control_msgs__msg__MotionPrimitiveSequence__rosidl_typesupport_introspection_c__size_function__MotionPrimitiveSequence__motions,  // size() function pointer
    control_msgs__msg__MotionPrimitiveSequence__rosidl_typesupport_introspection_c__get_const_function__MotionPrimitiveSequence__motions,  // get_const(index) function pointer
    control_msgs__msg__MotionPrimitiveSequence__rosidl_typesupport_introspection_c__get_function__MotionPrimitiveSequence__motions,  // get(index) function pointer
    control_msgs__msg__MotionPrimitiveSequence__rosidl_typesupport_introspection_c__fetch_function__MotionPrimitiveSequence__motions,  // fetch(index, &value) function pointer
    control_msgs__msg__MotionPrimitiveSequence__rosidl_typesupport_introspection_c__assign_function__MotionPrimitiveSequence__motions,  // assign(index, value) function pointer
    control_msgs__msg__MotionPrimitiveSequence__rosidl_typesupport_introspection_c__resize_function__MotionPrimitiveSequence__motions  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers control_msgs__msg__MotionPrimitiveSequence__rosidl_typesupport_introspection_c__MotionPrimitiveSequence_message_members = {
  "control_msgs__msg",  // message namespace
  "MotionPrimitiveSequence",  // message name
  1,  // number of fields
  sizeof(control_msgs__msg__MotionPrimitiveSequence),
  false,  // has_any_key_member_
  control_msgs__msg__MotionPrimitiveSequence__rosidl_typesupport_introspection_c__MotionPrimitiveSequence_message_member_array,  // message members
  control_msgs__msg__MotionPrimitiveSequence__rosidl_typesupport_introspection_c__MotionPrimitiveSequence_init_function,  // function to initialize message memory (memory has to be allocated)
  control_msgs__msg__MotionPrimitiveSequence__rosidl_typesupport_introspection_c__MotionPrimitiveSequence_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t control_msgs__msg__MotionPrimitiveSequence__rosidl_typesupport_introspection_c__MotionPrimitiveSequence_message_type_support_handle = {
  0,
  &control_msgs__msg__MotionPrimitiveSequence__rosidl_typesupport_introspection_c__MotionPrimitiveSequence_message_members,
  get_message_typesupport_handle_function,
  &control_msgs__msg__MotionPrimitiveSequence__get_type_hash,
  &control_msgs__msg__MotionPrimitiveSequence__get_type_description,
  &control_msgs__msg__MotionPrimitiveSequence__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, msg, MotionPrimitiveSequence)() {
  control_msgs__msg__MotionPrimitiveSequence__rosidl_typesupport_introspection_c__MotionPrimitiveSequence_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, msg, MotionPrimitive)();
  if (!control_msgs__msg__MotionPrimitiveSequence__rosidl_typesupport_introspection_c__MotionPrimitiveSequence_message_type_support_handle.typesupport_identifier) {
    control_msgs__msg__MotionPrimitiveSequence__rosidl_typesupport_introspection_c__MotionPrimitiveSequence_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &control_msgs__msg__MotionPrimitiveSequence__rosidl_typesupport_introspection_c__MotionPrimitiveSequence_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
