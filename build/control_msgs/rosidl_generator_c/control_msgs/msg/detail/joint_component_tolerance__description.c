// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from control_msgs:msg/JointComponentTolerance.idl
// generated code does not contain a copyright notice

#include "control_msgs/msg/detail/joint_component_tolerance__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_control_msgs
const rosidl_type_hash_t *
control_msgs__msg__JointComponentTolerance__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x73, 0x9e, 0xa7, 0x56, 0x69, 0x31, 0x94, 0x4d,
      0x33, 0x83, 0x0f, 0xa1, 0x0f, 0x1b, 0xf5, 0xe7,
      0xa7, 0xfb, 0xdc, 0x31, 0x72, 0xbc, 0xe7, 0xa7,
      0xea, 0xac, 0x64, 0x2b, 0xd6, 0xe3, 0xff, 0xa4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char control_msgs__msg__JointComponentTolerance__TYPE_NAME[] = "control_msgs/msg/JointComponentTolerance";

// Define type names, field names, and default values
static char control_msgs__msg__JointComponentTolerance__FIELD_NAME__joint_name[] = "joint_name";
static char control_msgs__msg__JointComponentTolerance__FIELD_NAME__component[] = "component";
static char control_msgs__msg__JointComponentTolerance__FIELD_NAME__position[] = "position";
static char control_msgs__msg__JointComponentTolerance__FIELD_NAME__velocity[] = "velocity";
static char control_msgs__msg__JointComponentTolerance__FIELD_NAME__acceleration[] = "acceleration";

static rosidl_runtime_c__type_description__Field control_msgs__msg__JointComponentTolerance__FIELDS[] = {
  {
    {control_msgs__msg__JointComponentTolerance__FIELD_NAME__joint_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__JointComponentTolerance__FIELD_NAME__component, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__JointComponentTolerance__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__JointComponentTolerance__FIELD_NAME__velocity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__JointComponentTolerance__FIELD_NAME__acceleration, 12, 12},
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
control_msgs__msg__JointComponentTolerance__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_msgs__msg__JointComponentTolerance__TYPE_NAME, 40, 40},
      {control_msgs__msg__JointComponentTolerance__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Version of JointTolerance.msg with added component field for joints with multiple degrees of freedom\n"
  "# The difference between two MultiDOFJointTrajectoryPoint cannot be represented as a single number,\n"
  "# hence we use the component field to represent how to calculate the difference in a way that can\n"
  "# be represented as a single number.\n"
  "\n"
  "# Since each joint has multiple degrees of freedom,\n"
  "# there can be multiple tolerances for each joint, each looking\n"
  "# at different components.\n"
  "\n"
  "# If the component is X_AXIS, Y_AXIS, or Z_AXIS, then the tolerance\n"
  "# is only applied for the specific axis.\n"
  "# However, if the component is TRANSLATION, then the tolerance is for\n"
  "# the overall Euclidean distance.\n"
  "# For these components, the units are meters, meters/sec and meters/sec^2.\n"
  "# Z_AXIS is only valid with a floating joint, not planar.\n"
  "\n"
  "# If the component is ROTATION the tolerance is measured in\n"
  "# radians, radians/sec and radians/sec^2, computed\n"
  "# between the difference in quaternions.\n"
  "\n"
  "uint16 X_AXIS=1\n"
  "uint16 Y_AXIS=2\n"
  "uint16 Z_AXIS=3\n"
  "uint16 TRANSLATION=4\n"
  "uint16 ROTATION=5\n"
  "\n"
  "string joint_name\n"
  "uint16 component\n"
  "float64 position\n"
  "float64 velocity\n"
  "float64 acceleration";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
control_msgs__msg__JointComponentTolerance__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_msgs__msg__JointComponentTolerance__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1161, 1161},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_msgs__msg__JointComponentTolerance__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_msgs__msg__JointComponentTolerance__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
