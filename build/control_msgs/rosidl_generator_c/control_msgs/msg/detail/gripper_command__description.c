// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from control_msgs:msg/GripperCommand.idl
// generated code does not contain a copyright notice

#include "control_msgs/msg/detail/gripper_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_control_msgs
const rosidl_type_hash_t *
control_msgs__msg__GripperCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x57, 0xeb, 0x8f, 0x32, 0x6c, 0x98, 0x89, 0xca,
      0x8b, 0xb3, 0x4e, 0xad, 0x82, 0xcc, 0x94, 0xcc,
      0x09, 0xbf, 0x6b, 0xc5, 0xc3, 0xb6, 0xc0, 0x95,
      0x46, 0xdc, 0xa3, 0xa0, 0x0b, 0x58, 0x98, 0x90,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char control_msgs__msg__GripperCommand__TYPE_NAME[] = "control_msgs/msg/GripperCommand";

// Define type names, field names, and default values
static char control_msgs__msg__GripperCommand__FIELD_NAME__position[] = "position";
static char control_msgs__msg__GripperCommand__FIELD_NAME__max_effort[] = "max_effort";

static rosidl_runtime_c__type_description__Field control_msgs__msg__GripperCommand__FIELDS[] = {
  {
    {control_msgs__msg__GripperCommand__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__GripperCommand__FIELD_NAME__max_effort, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
control_msgs__msg__GripperCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_msgs__msg__GripperCommand__TYPE_NAME, 31, 31},
      {control_msgs__msg__GripperCommand__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 position\n"
  "float64 max_effort";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
control_msgs__msg__GripperCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_msgs__msg__GripperCommand__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 36, 36},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_msgs__msg__GripperCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_msgs__msg__GripperCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
