// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from control_msgs:msg/JointControllerState.idl
// generated code does not contain a copyright notice

#include "control_msgs/msg/detail/joint_controller_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_control_msgs
const rosidl_type_hash_t *
control_msgs__msg__JointControllerState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1f, 0x6e, 0xe6, 0x4b, 0x3b, 0x1f, 0x19, 0x47,
      0x95, 0x1f, 0x34, 0x69, 0x4f, 0x8e, 0x19, 0xa1,
      0x0e, 0xa3, 0x2f, 0x34, 0xfe, 0x35, 0x52, 0xdf,
      0x26, 0x51, 0x4f, 0x8b, 0x30, 0x97, 0x6e, 0x90,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char control_msgs__msg__JointControllerState__TYPE_NAME[] = "control_msgs/msg/JointControllerState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char control_msgs__msg__JointControllerState__FIELD_NAME__header[] = "header";
static char control_msgs__msg__JointControllerState__FIELD_NAME__set_point[] = "set_point";
static char control_msgs__msg__JointControllerState__FIELD_NAME__process_value[] = "process_value";
static char control_msgs__msg__JointControllerState__FIELD_NAME__process_value_dot[] = "process_value_dot";
static char control_msgs__msg__JointControllerState__FIELD_NAME__error[] = "error";
static char control_msgs__msg__JointControllerState__FIELD_NAME__time_step[] = "time_step";
static char control_msgs__msg__JointControllerState__FIELD_NAME__command[] = "command";
static char control_msgs__msg__JointControllerState__FIELD_NAME__p[] = "p";
static char control_msgs__msg__JointControllerState__FIELD_NAME__i[] = "i";
static char control_msgs__msg__JointControllerState__FIELD_NAME__d[] = "d";
static char control_msgs__msg__JointControllerState__FIELD_NAME__i_clamp[] = "i_clamp";
static char control_msgs__msg__JointControllerState__FIELD_NAME__antiwindup[] = "antiwindup";

static rosidl_runtime_c__type_description__Field control_msgs__msg__JointControllerState__FIELDS[] = {
  {
    {control_msgs__msg__JointControllerState__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__JointControllerState__FIELD_NAME__set_point, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__JointControllerState__FIELD_NAME__process_value, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__JointControllerState__FIELD_NAME__process_value_dot, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__JointControllerState__FIELD_NAME__error, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__JointControllerState__FIELD_NAME__time_step, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__JointControllerState__FIELD_NAME__command, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__JointControllerState__FIELD_NAME__p, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__JointControllerState__FIELD_NAME__i, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__JointControllerState__FIELD_NAME__d, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__JointControllerState__FIELD_NAME__i_clamp, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__JointControllerState__FIELD_NAME__antiwindup, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription control_msgs__msg__JointControllerState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
control_msgs__msg__JointControllerState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_msgs__msg__JointControllerState__TYPE_NAME, 37, 37},
      {control_msgs__msg__JointControllerState__FIELDS, 12, 12},
    },
    {control_msgs__msg__JointControllerState__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message presents current controller state of one joint.\n"
  "\n"
  "# It is deprecated as of Humble in favor of SingleDOFStateStamped.msg\n"
  "\n"
  "# Header timestamp should be update time of controller state\n"
  "std_msgs/Header header\n"
  "\n"
  "# The set point, that is, desired state.\n"
  "float64 set_point\n"
  "\n"
  "# Current value of the process (ie: latest sensor measurement on the controlled value).\n"
  "float64 process_value\n"
  "\n"
  "# First time-derivative of the process value.\n"
  "float64 process_value_dot\n"
  "\n"
  "# The error of the controlled value, essentially process_value - set_point (for a regular PID implementation).\n"
  "float64 error\n"
  "\n"
  "# Time between two consecutive updates/execution of the control law.\n"
  "float64 time_step\n"
  "\n"
  "# Current output of the controller.\n"
  "float64 command\n"
  "\n"
  "# Current PID parameters of the controller.\n"
  "float64 p\n"
  "float64 i\n"
  "float64 d\n"
  "float64 i_clamp\n"
  "bool antiwindup";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
control_msgs__msg__JointControllerState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_msgs__msg__JointControllerState__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 837, 837},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_msgs__msg__JointControllerState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_msgs__msg__JointControllerState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
