// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from control_msgs:msg/MotionArgument.idl
// generated code does not contain a copyright notice

#include "control_msgs/msg/detail/motion_argument__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_control_msgs
const rosidl_type_hash_t *
control_msgs__msg__MotionArgument__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x68, 0x7b, 0x5e, 0xa4, 0x3a, 0xbb, 0xba, 0x3a,
      0xb7, 0xc3, 0xa2, 0x2d, 0x39, 0xc2, 0x5d, 0x1e,
      0xca, 0x0b, 0x71, 0x28, 0x7a, 0xa0, 0x97, 0xd9,
      0x3b, 0xc9, 0xd9, 0x4d, 0x1d, 0x90, 0x0b, 0x7b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char control_msgs__msg__MotionArgument__TYPE_NAME[] = "control_msgs/msg/MotionArgument";

// Define type names, field names, and default values
static char control_msgs__msg__MotionArgument__FIELD_NAME__name[] = "name";
static char control_msgs__msg__MotionArgument__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field control_msgs__msg__MotionArgument__FIELDS[] = {
  {
    {control_msgs__msg__MotionArgument__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__MotionArgument__FIELD_NAME__value, 5, 5},
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
control_msgs__msg__MotionArgument__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_msgs__msg__MotionArgument__TYPE_NAME, 31, 31},
      {control_msgs__msg__MotionArgument__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Key Value pair to be used in MotionPrimitive messages\n"
  "\n"
  "string name\n"
  "float64 value";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
control_msgs__msg__MotionArgument__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_msgs__msg__MotionArgument__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 83, 83},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_msgs__msg__MotionArgument__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_msgs__msg__MotionArgument__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
