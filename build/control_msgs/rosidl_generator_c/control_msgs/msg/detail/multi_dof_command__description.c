// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from control_msgs:msg/MultiDOFCommand.idl
// generated code does not contain a copyright notice

#include "control_msgs/msg/detail/multi_dof_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_control_msgs
const rosidl_type_hash_t *
control_msgs__msg__MultiDOFCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x03, 0x3f, 0xb0, 0xfa, 0x1f, 0xfc, 0x63, 0xa8,
      0x72, 0xca, 0x73, 0xc6, 0x1a, 0x49, 0xde, 0xd8,
      0x3a, 0x22, 0xda, 0xa5, 0xcc, 0x3f, 0x07, 0x4c,
      0xc2, 0x89, 0x49, 0xf7, 0x33, 0x59, 0xe6, 0x77,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char control_msgs__msg__MultiDOFCommand__TYPE_NAME[] = "control_msgs/msg/MultiDOFCommand";

// Define type names, field names, and default values
static char control_msgs__msg__MultiDOFCommand__FIELD_NAME__dof_names[] = "dof_names";
static char control_msgs__msg__MultiDOFCommand__FIELD_NAME__values[] = "values";
static char control_msgs__msg__MultiDOFCommand__FIELD_NAME__values_dot[] = "values_dot";

static rosidl_runtime_c__type_description__Field control_msgs__msg__MultiDOFCommand__FIELDS[] = {
  {
    {control_msgs__msg__MultiDOFCommand__FIELD_NAME__dof_names, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__MultiDOFCommand__FIELD_NAME__values, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__MultiDOFCommand__FIELD_NAME__values_dot, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
control_msgs__msg__MultiDOFCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_msgs__msg__MultiDOFCommand__TYPE_NAME, 32, 32},
      {control_msgs__msg__MultiDOFCommand__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# The message defines command for multiple degrees of freedom (DoF) typically used by many controllers.\n"
  "# The message intentionally avoids 'joint' nomenclature because it can be generally use for command with\n"
  "# different semantic meanings, e.g., joints, Cartesian axes, or have abstract meaning like GPIO interface.\n"
  "\n"
  "# names of degrees of freedom\n"
  "string[] dof_names\n"
  "\n"
  "# values used by most of the controller\n"
  "float64[] values\n"
  "\n"
  "# First derivation of the values, e.g., velocity if values are positions.\n"
  "# This is useful for PID and similar controllers.\n"
  "float64[] values_dot";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
control_msgs__msg__MultiDOFCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_msgs__msg__MultiDOFCommand__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 570, 570},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_msgs__msg__MultiDOFCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_msgs__msg__MultiDOFCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
