// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from control_msgs:msg/MultiDOFStateStamped.idl
// generated code does not contain a copyright notice

#include "control_msgs/msg/detail/multi_dof_state_stamped__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_control_msgs
const rosidl_type_hash_t *
control_msgs__msg__MultiDOFStateStamped__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x08, 0xe4, 0x7e, 0x3e, 0x73, 0x4a, 0x7d, 0x08,
      0x13, 0x1b, 0x57, 0xe1, 0x4e, 0x9f, 0x74, 0x07,
      0x82, 0xf3, 0xbf, 0x9a, 0x1a, 0xad, 0xab, 0xd2,
      0xa1, 0x6b, 0x54, 0xd2, 0x7e, 0x55, 0x1f, 0x0a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "control_msgs/msg/detail/single_dof_state__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t control_msgs__msg__SingleDOFState__EXPECTED_HASH = {1, {
    0xfe, 0x83, 0x65, 0xf8, 0x62, 0x65, 0xbd, 0xdf,
    0xef, 0xbd, 0x26, 0x69, 0x89, 0x75, 0xa8, 0x18,
    0xbf, 0x02, 0x4a, 0x1c, 0x26, 0x7c, 0x8c, 0xe5,
    0x77, 0xcd, 0x36, 0x6e, 0xf0, 0x6d, 0x71, 0x63,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char control_msgs__msg__MultiDOFStateStamped__TYPE_NAME[] = "control_msgs/msg/MultiDOFStateStamped";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char control_msgs__msg__SingleDOFState__TYPE_NAME[] = "control_msgs/msg/SingleDOFState";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char control_msgs__msg__MultiDOFStateStamped__FIELD_NAME__header[] = "header";
static char control_msgs__msg__MultiDOFStateStamped__FIELD_NAME__dof_states[] = "dof_states";

static rosidl_runtime_c__type_description__Field control_msgs__msg__MultiDOFStateStamped__FIELDS[] = {
  {
    {control_msgs__msg__MultiDOFStateStamped__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__MultiDOFStateStamped__FIELD_NAME__dof_states, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {control_msgs__msg__SingleDOFState__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription control_msgs__msg__MultiDOFStateStamped__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__SingleDOFState__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
control_msgs__msg__MultiDOFStateStamped__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_msgs__msg__MultiDOFStateStamped__TYPE_NAME, 37, 37},
      {control_msgs__msg__MultiDOFStateStamped__FIELDS, 2, 2},
    },
    {control_msgs__msg__MultiDOFStateStamped__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&control_msgs__msg__SingleDOFState__EXPECTED_HASH, control_msgs__msg__SingleDOFState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = control_msgs__msg__SingleDOFState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message presents current controller state of multiple degrees of freedom.\n"
  "\n"
  "# Header timestamp should be update time of controller state\n"
  "std_msgs/Header header\n"
  "\n"
  "SingleDOFState[] dof_states";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
control_msgs__msg__MultiDOFStateStamped__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_msgs__msg__MultiDOFStateStamped__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 195, 195},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_msgs__msg__MultiDOFStateStamped__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_msgs__msg__MultiDOFStateStamped__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *control_msgs__msg__SingleDOFState__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
