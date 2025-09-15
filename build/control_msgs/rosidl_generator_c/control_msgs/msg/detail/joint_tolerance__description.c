// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from control_msgs:msg/JointTolerance.idl
// generated code does not contain a copyright notice

#include "control_msgs/msg/detail/joint_tolerance__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_control_msgs
const rosidl_type_hash_t *
control_msgs__msg__JointTolerance__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc2, 0x54, 0xf9, 0xce, 0xce, 0x0f, 0x3b, 0x73,
      0x30, 0x17, 0xb6, 0x99, 0x0f, 0xd4, 0x6d, 0x13,
      0x26, 0xe2, 0x52, 0x42, 0xd6, 0xb8, 0x84, 0x43,
      0x98, 0xc9, 0x7d, 0x9a, 0x88, 0xe7, 0xd6, 0x48,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char control_msgs__msg__JointTolerance__TYPE_NAME[] = "control_msgs/msg/JointTolerance";

// Define type names, field names, and default values
static char control_msgs__msg__JointTolerance__FIELD_NAME__name[] = "name";
static char control_msgs__msg__JointTolerance__FIELD_NAME__position[] = "position";
static char control_msgs__msg__JointTolerance__FIELD_NAME__velocity[] = "velocity";
static char control_msgs__msg__JointTolerance__FIELD_NAME__acceleration[] = "acceleration";

static rosidl_runtime_c__type_description__Field control_msgs__msg__JointTolerance__FIELDS[] = {
  {
    {control_msgs__msg__JointTolerance__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__JointTolerance__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__JointTolerance__FIELD_NAME__velocity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__JointTolerance__FIELD_NAME__acceleration, 12, 12},
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
control_msgs__msg__JointTolerance__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_msgs__msg__JointTolerance__TYPE_NAME, 31, 31},
      {control_msgs__msg__JointTolerance__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# The tolerances specify the amount the position, velocity, and\n"
  "# accelerations can vary from the setpoints.  For example, in the case\n"
  "# of trajectory control, when the actual position varies beyond\n"
  "# (desired position + position tolerance), the trajectory goal may\n"
  "# abort.\n"
  "#\n"
  "# There are two special values for tolerances:\n"
  "#  * 0 - The tolerance is unspecified and will remain at whatever the default is\n"
  "#  * -1 - The tolerance is \"erased\".  If there was a default, the joint will be\n"
  "#         allowed to move without restriction.\n"
  "\n"
  "string name\n"
  "float64 position  # in radians or meters (for a revolute or prismatic joint, respectively)\n"
  "float64 velocity  # in rad/sec or m/sec\n"
  "float64 acceleration  # in rad/sec^2 or m/sec^2";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
control_msgs__msg__JointTolerance__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_msgs__msg__JointTolerance__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 724, 724},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_msgs__msg__JointTolerance__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_msgs__msg__JointTolerance__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
