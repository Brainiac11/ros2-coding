// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from control_msgs:msg/SpeedScalingFactor.idl
// generated code does not contain a copyright notice

#include "control_msgs/msg/detail/speed_scaling_factor__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_control_msgs
const rosidl_type_hash_t *
control_msgs__msg__SpeedScalingFactor__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0c, 0x24, 0x0f, 0x34, 0x9f, 0x2b, 0x74, 0xe3,
      0x3e, 0x87, 0x41, 0xf8, 0x3e, 0x0f, 0x19, 0x6d,
      0xde, 0xb6, 0x58, 0x59, 0x23, 0x66, 0x38, 0x76,
      0xed, 0x3c, 0x1f, 0x51, 0xf0, 0x56, 0x60, 0x37,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char control_msgs__msg__SpeedScalingFactor__TYPE_NAME[] = "control_msgs/msg/SpeedScalingFactor";

// Define type names, field names, and default values
static char control_msgs__msg__SpeedScalingFactor__FIELD_NAME__factor[] = "factor";

static rosidl_runtime_c__type_description__Field control_msgs__msg__SpeedScalingFactor__FIELDS[] = {
  {
    {control_msgs__msg__SpeedScalingFactor__FIELD_NAME__factor, 6, 6},
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
control_msgs__msg__SpeedScalingFactor__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_msgs__msg__SpeedScalingFactor__TYPE_NAME, 35, 35},
      {control_msgs__msg__SpeedScalingFactor__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message contains a scaling factor to scale trajectory execution. A factor of 1.0 means\n"
  "# execution at normal speed, a factor of 0.0 means a full pause.\n"
  "# Negative values are not allowed (Which should be checked by any instance consuming this message).\n"
  "\n"
  "float64 factor";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
control_msgs__msg__SpeedScalingFactor__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_msgs__msg__SpeedScalingFactor__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 275, 275},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_msgs__msg__SpeedScalingFactor__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_msgs__msg__SpeedScalingFactor__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
