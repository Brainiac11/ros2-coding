// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from control_msgs:msg/SingleDOFState.idl
// generated code does not contain a copyright notice

#include "control_msgs/msg/detail/single_dof_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_control_msgs
const rosidl_type_hash_t *
control_msgs__msg__SingleDOFState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfe, 0x83, 0x65, 0xf8, 0x62, 0x65, 0xbd, 0xdf,
      0xef, 0xbd, 0x26, 0x69, 0x89, 0x75, 0xa8, 0x18,
      0xbf, 0x02, 0x4a, 0x1c, 0x26, 0x7c, 0x8c, 0xe5,
      0x77, 0xcd, 0x36, 0x6e, 0xf0, 0x6d, 0x71, 0x63,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char control_msgs__msg__SingleDOFState__TYPE_NAME[] = "control_msgs/msg/SingleDOFState";

// Define type names, field names, and default values
static char control_msgs__msg__SingleDOFState__FIELD_NAME__name[] = "name";
static char control_msgs__msg__SingleDOFState__FIELD_NAME__reference[] = "reference";
static char control_msgs__msg__SingleDOFState__FIELD_NAME__feedback[] = "feedback";
static char control_msgs__msg__SingleDOFState__FIELD_NAME__feedback_dot[] = "feedback_dot";
static char control_msgs__msg__SingleDOFState__FIELD_NAME__error[] = "error";
static char control_msgs__msg__SingleDOFState__FIELD_NAME__error_dot[] = "error_dot";
static char control_msgs__msg__SingleDOFState__FIELD_NAME__time_step[] = "time_step";
static char control_msgs__msg__SingleDOFState__FIELD_NAME__output[] = "output";

static rosidl_runtime_c__type_description__Field control_msgs__msg__SingleDOFState__FIELDS[] = {
  {
    {control_msgs__msg__SingleDOFState__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__SingleDOFState__FIELD_NAME__reference, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__SingleDOFState__FIELD_NAME__feedback, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__SingleDOFState__FIELD_NAME__feedback_dot, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__SingleDOFState__FIELD_NAME__error, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__SingleDOFState__FIELD_NAME__error_dot, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__SingleDOFState__FIELD_NAME__time_step, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__SingleDOFState__FIELD_NAME__output, 6, 6},
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
control_msgs__msg__SingleDOFState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_msgs__msg__SingleDOFState__TYPE_NAME, 31, 31},
      {control_msgs__msg__SingleDOFState__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message presents current controller state of one degree of freedom.\n"
  "\n"
  "# DoF name, e.g., joint or Cartesian axis name\n"
  "string name\n"
  "\n"
  "# The set point, that is, desired state.\n"
  "float64 reference\n"
  "\n"
  "# Current value of the process (ie: latest sensor measurement on the controlled value).\n"
  "float64 feedback\n"
  "\n"
  "# First time-derivative of the process value. E.g., velocity.\n"
  "float64 feedback_dot\n"
  "\n"
  "# The error of the controlled value, essentially reference - feedback (for a regular PID implementation).\n"
  "float64 error\n"
  "\n"
  "# First time-derivative of the error of the controlled value.\n"
  "float64 error_dot\n"
  "\n"
  "# Time between two consecutive updates/execution of the control law.\n"
  "float64 time_step\n"
  "\n"
  "# Current output of the controller.\n"
  "float64 output";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
control_msgs__msg__SingleDOFState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_msgs__msg__SingleDOFState__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 727, 727},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_msgs__msg__SingleDOFState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_msgs__msg__SingleDOFState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
