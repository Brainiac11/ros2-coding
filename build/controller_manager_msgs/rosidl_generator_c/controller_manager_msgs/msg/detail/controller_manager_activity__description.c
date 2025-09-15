// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from controller_manager_msgs:msg/ControllerManagerActivity.idl
// generated code does not contain a copyright notice

#include "controller_manager_msgs/msg/detail/controller_manager_activity__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_type_hash_t *
controller_manager_msgs__msg__ControllerManagerActivity__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x35, 0xb7, 0xde, 0x5d, 0x61, 0x1b, 0x67, 0x80,
      0xe8, 0x97, 0x32, 0xde, 0x32, 0x5f, 0x2f, 0x76,
      0x5e, 0xac, 0xdb, 0x8a, 0x7a, 0xdf, 0xe5, 0x82,
      0x1a, 0x27, 0xaf, 0x4a, 0x03, 0xa7, 0xc2, 0x44,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "controller_manager_msgs/msg/detail/named_lifecycle_state__functions.h"
#include "lifecycle_msgs/msg/detail/state__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t controller_manager_msgs__msg__NamedLifecycleState__EXPECTED_HASH = {1, {
    0xb7, 0x94, 0x7b, 0x6f, 0x8d, 0xf8, 0xf7, 0xe9,
    0x3d, 0x1c, 0xb8, 0xd1, 0x15, 0x84, 0x2f, 0xb0,
    0xee, 0xdd, 0xfa, 0x6f, 0xb5, 0xc7, 0xb8, 0x6c,
    0xc0, 0xf3, 0xca, 0xfd, 0x55, 0xbe, 0x4c, 0x1f,
  }};
static const rosidl_type_hash_t lifecycle_msgs__msg__State__EXPECTED_HASH = {1, {
    0xdd, 0x2d, 0x02, 0xb8, 0x2f, 0x3e, 0xbc, 0x85,
    0x8e, 0x53, 0xc4, 0x31, 0xb1, 0xe6, 0xe9, 0x1f,
    0x3f, 0xfc, 0x71, 0x43, 0x6f, 0xc8, 0x1d, 0x07,
    0x15, 0x21, 0x4a, 0xc6, 0xee, 0x21, 0x07, 0xa0,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char controller_manager_msgs__msg__ControllerManagerActivity__TYPE_NAME[] = "controller_manager_msgs/msg/ControllerManagerActivity";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char controller_manager_msgs__msg__NamedLifecycleState__TYPE_NAME[] = "controller_manager_msgs/msg/NamedLifecycleState";
static char lifecycle_msgs__msg__State__TYPE_NAME[] = "lifecycle_msgs/msg/State";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char controller_manager_msgs__msg__ControllerManagerActivity__FIELD_NAME__header[] = "header";
static char controller_manager_msgs__msg__ControllerManagerActivity__FIELD_NAME__controllers[] = "controllers";
static char controller_manager_msgs__msg__ControllerManagerActivity__FIELD_NAME__hardware_components[] = "hardware_components";

static rosidl_runtime_c__type_description__Field controller_manager_msgs__msg__ControllerManagerActivity__FIELDS[] = {
  {
    {controller_manager_msgs__msg__ControllerManagerActivity__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__ControllerManagerActivity__FIELD_NAME__controllers, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {controller_manager_msgs__msg__NamedLifecycleState__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__ControllerManagerActivity__FIELD_NAME__hardware_components, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {controller_manager_msgs__msg__NamedLifecycleState__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription controller_manager_msgs__msg__ControllerManagerActivity__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__NamedLifecycleState__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {lifecycle_msgs__msg__State__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
controller_manager_msgs__msg__ControllerManagerActivity__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {controller_manager_msgs__msg__ControllerManagerActivity__TYPE_NAME, 53, 53},
      {controller_manager_msgs__msg__ControllerManagerActivity__FIELDS, 3, 3},
    },
    {controller_manager_msgs__msg__ControllerManagerActivity__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&controller_manager_msgs__msg__NamedLifecycleState__EXPECTED_HASH, controller_manager_msgs__msg__NamedLifecycleState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = controller_manager_msgs__msg__NamedLifecycleState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&lifecycle_msgs__msg__State__EXPECTED_HASH, lifecycle_msgs__msg__State__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = lifecycle_msgs__msg__State__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message is used to provide the activity within the controller manager regarding the change in state of controllers and hardware interfaces\n"
  "\n"
  "# The header is used to provide timestamp information\n"
  "std_msgs/Header header\n"
  "\n"
  "# The current state of the controllers\n"
  "NamedLifecycleState[] controllers\n"
  "\n"
  "# The current state of the hardware components\n"
  "NamedLifecycleState[] hardware_components";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
controller_manager_msgs__msg__ControllerManagerActivity__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {controller_manager_msgs__msg__ControllerManagerActivity__TYPE_NAME, 53, 53},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 388, 388},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
controller_manager_msgs__msg__ControllerManagerActivity__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *controller_manager_msgs__msg__ControllerManagerActivity__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *controller_manager_msgs__msg__NamedLifecycleState__get_individual_type_description_source(NULL);
    sources[3] = *lifecycle_msgs__msg__State__get_individual_type_description_source(NULL);
    sources[4] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
