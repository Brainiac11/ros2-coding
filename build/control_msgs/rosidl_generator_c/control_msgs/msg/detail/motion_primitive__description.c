// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from control_msgs:msg/MotionPrimitive.idl
// generated code does not contain a copyright notice

#include "control_msgs/msg/detail/motion_primitive__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_control_msgs
const rosidl_type_hash_t *
control_msgs__msg__MotionPrimitive__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x04, 0xbc, 0x62, 0xc5, 0x54, 0x72, 0x20, 0x6d,
      0x3b, 0x97, 0x19, 0x20, 0x1a, 0x9f, 0x81, 0xe0,
      0x84, 0xa9, 0x3d, 0x2a, 0x88, 0x50, 0x56, 0xfc,
      0x7c, 0x1d, 0x94, 0xdb, 0x5f, 0xdb, 0x5c, 0xa5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"
#include "control_msgs/msg/detail/motion_argument__functions.h"
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t control_msgs__msg__MotionArgument__EXPECTED_HASH = {1, {
    0x68, 0x7b, 0x5e, 0xa4, 0x3a, 0xbb, 0xba, 0x3a,
    0xb7, 0xc3, 0xa2, 0x2d, 0x39, 0xc2, 0x5d, 0x1e,
    0xca, 0x0b, 0x71, 0x28, 0x7a, 0xa0, 0x97, 0xd9,
    0x3b, 0xc9, 0xd9, 0x4d, 0x1d, 0x90, 0x0b, 0x7b,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Pose__EXPECTED_HASH = {1, {
    0xd5, 0x01, 0x95, 0x4e, 0x94, 0x76, 0xce, 0xa2,
    0x99, 0x69, 0x84, 0xe8, 0x12, 0x05, 0x4b, 0x68,
    0x02, 0x6a, 0xe0, 0xbf, 0xae, 0x78, 0x9d, 0x9a,
    0x10, 0xb2, 0x3d, 0xaf, 0x35, 0xcc, 0x90, 0xfa,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__PoseStamped__EXPECTED_HASH = {1, {
    0x10, 0xf3, 0x78, 0x6d, 0x7d, 0x40, 0xfd, 0x2b,
    0x54, 0x36, 0x78, 0x35, 0x61, 0x4b, 0xff, 0x85,
    0xd4, 0xad, 0x3b, 0x5d, 0xab, 0x62, 0xbf, 0x8b,
    0xca, 0x0c, 0xc2, 0x32, 0xd7, 0x3b, 0x4c, 0xd8,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char control_msgs__msg__MotionPrimitive__TYPE_NAME[] = "control_msgs/msg/MotionPrimitive";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char control_msgs__msg__MotionArgument__TYPE_NAME[] = "control_msgs/msg/MotionArgument";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__PoseStamped__TYPE_NAME[] = "geometry_msgs/msg/PoseStamped";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char control_msgs__msg__MotionPrimitive__FIELD_NAME__type[] = "type";
static char control_msgs__msg__MotionPrimitive__DEFAULT_VALUE__type[] = "-1";
static char control_msgs__msg__MotionPrimitive__FIELD_NAME__blend_radius[] = "blend_radius";
static char control_msgs__msg__MotionPrimitive__FIELD_NAME__additional_arguments[] = "additional_arguments";
static char control_msgs__msg__MotionPrimitive__FIELD_NAME__poses[] = "poses";
static char control_msgs__msg__MotionPrimitive__FIELD_NAME__joint_positions[] = "joint_positions";

static rosidl_runtime_c__type_description__Field control_msgs__msg__MotionPrimitive__FIELDS[] = {
  {
    {control_msgs__msg__MotionPrimitive__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {control_msgs__msg__MotionPrimitive__DEFAULT_VALUE__type, 2, 2},
  },
  {
    {control_msgs__msg__MotionPrimitive__FIELD_NAME__blend_radius, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__MotionPrimitive__FIELD_NAME__additional_arguments, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {control_msgs__msg__MotionArgument__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__MotionPrimitive__FIELD_NAME__poses, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geometry_msgs__msg__PoseStamped__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__MotionPrimitive__FIELD_NAME__joint_positions, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription control_msgs__msg__MotionPrimitive__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__MotionArgument__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__PoseStamped__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
control_msgs__msg__MotionPrimitive__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_msgs__msg__MotionPrimitive__TYPE_NAME, 32, 32},
      {control_msgs__msg__MotionPrimitive__FIELDS, 5, 5},
    },
    {control_msgs__msg__MotionPrimitive__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&control_msgs__msg__MotionArgument__EXPECTED_HASH, control_msgs__msg__MotionArgument__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = control_msgs__msg__MotionArgument__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__PoseStamped__EXPECTED_HASH, geometry_msgs__msg__PoseStamped__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__PoseStamped__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int8 UNKNOWN=-1\n"
  "int8 LINEAR_JOINT=0 # Often referred as PTP\n"
  "int8 LINEAR_CARTESIAN=50 # Often referred as LIN\n"
  "int8 CIRCULAR_CARTESIAN=51 # Often referred as CIRC\n"
  "# potentially more, such as spline motion\n"
  "\n"
  "int8 type -1 # one of the above\n"
  "\n"
  "float64 blend_radius\n"
  "\n"
  "# MotionArguments are meant to be used as vendor-specific or use-case-specific arguments to\n"
  "# MotionPrimitive messages. This is to avoid bloating the MotionPrimitive message with all possible\n"
  "# uses cases but rather add specific data using as a list of key-value pairs, which is what this\n"
  "# message represents.\n"
  "MotionArgument[] additional_arguments # (max) velocity, (max) acceleration, efficiency\n"
  "\n"
  "# Targets should be either specified through joint configurations or Cartesian poses.\n"
  "# Depending on the motion type and implementation, there might be multiple poses allowed.\n"
  "# For example, circular motions are often specified as via and target\n"
  "# Usually one of these is empty, in some edge cases even both can be empty, when all input is given\n"
  "# in the more flexible MotionArgument[] field.\n"
  "geometry_msgs/PoseStamped[] poses\n"
  "float64[] joint_positions";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
control_msgs__msg__MotionPrimitive__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_msgs__msg__MotionPrimitive__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1111, 1111},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_msgs__msg__MotionPrimitive__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_msgs__msg__MotionPrimitive__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *control_msgs__msg__MotionArgument__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__PoseStamped__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[7] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
