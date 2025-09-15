// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from controller_manager_msgs:msg/NamedLifecycleState.idl
// generated code does not contain a copyright notice

#include "controller_manager_msgs/msg/detail/named_lifecycle_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_type_hash_t *
controller_manager_msgs__msg__NamedLifecycleState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb7, 0x94, 0x7b, 0x6f, 0x8d, 0xf8, 0xf7, 0xe9,
      0x3d, 0x1c, 0xb8, 0xd1, 0x15, 0x84, 0x2f, 0xb0,
      0xee, 0xdd, 0xfa, 0x6f, 0xb5, 0xc7, 0xb8, 0x6c,
      0xc0, 0xf3, 0xca, 0xfd, 0x55, 0xbe, 0x4c, 0x1f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "lifecycle_msgs/msg/detail/state__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t lifecycle_msgs__msg__State__EXPECTED_HASH = {1, {
    0xdd, 0x2d, 0x02, 0xb8, 0x2f, 0x3e, 0xbc, 0x85,
    0x8e, 0x53, 0xc4, 0x31, 0xb1, 0xe6, 0xe9, 0x1f,
    0x3f, 0xfc, 0x71, 0x43, 0x6f, 0xc8, 0x1d, 0x07,
    0x15, 0x21, 0x4a, 0xc6, 0xee, 0x21, 0x07, 0xa0,
  }};
#endif

static char controller_manager_msgs__msg__NamedLifecycleState__TYPE_NAME[] = "controller_manager_msgs/msg/NamedLifecycleState";
static char lifecycle_msgs__msg__State__TYPE_NAME[] = "lifecycle_msgs/msg/State";

// Define type names, field names, and default values
static char controller_manager_msgs__msg__NamedLifecycleState__FIELD_NAME__name[] = "name";
static char controller_manager_msgs__msg__NamedLifecycleState__FIELD_NAME__state[] = "state";

static rosidl_runtime_c__type_description__Field controller_manager_msgs__msg__NamedLifecycleState__FIELDS[] = {
  {
    {controller_manager_msgs__msg__NamedLifecycleState__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__NamedLifecycleState__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {lifecycle_msgs__msg__State__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription controller_manager_msgs__msg__NamedLifecycleState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {lifecycle_msgs__msg__State__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
controller_manager_msgs__msg__NamedLifecycleState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {controller_manager_msgs__msg__NamedLifecycleState__TYPE_NAME, 47, 47},
      {controller_manager_msgs__msg__NamedLifecycleState__FIELDS, 2, 2},
    },
    {controller_manager_msgs__msg__NamedLifecycleState__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&lifecycle_msgs__msg__State__EXPECTED_HASH, lifecycle_msgs__msg__State__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = lifecycle_msgs__msg__State__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message is used to provide information about the lifecycle state of the controller or the hardware components\n"
  "\n"
  "# The name of the controller or hardware interface\n"
  "string name\n"
  "\n"
  "# The current lifecycle state of the controller or hardware components\n"
  "lifecycle_msgs/State state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
controller_manager_msgs__msg__NamedLifecycleState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {controller_manager_msgs__msg__NamedLifecycleState__TYPE_NAME, 47, 47},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 280, 280},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
controller_manager_msgs__msg__NamedLifecycleState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *controller_manager_msgs__msg__NamedLifecycleState__get_individual_type_description_source(NULL),
    sources[1] = *lifecycle_msgs__msg__State__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
