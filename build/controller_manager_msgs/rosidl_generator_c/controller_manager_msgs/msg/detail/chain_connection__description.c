// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from controller_manager_msgs:msg/ChainConnection.idl
// generated code does not contain a copyright notice

#include "controller_manager_msgs/msg/detail/chain_connection__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_type_hash_t *
controller_manager_msgs__msg__ChainConnection__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2d, 0xae, 0xcd, 0x1d, 0xa4, 0xb1, 0x71, 0xf4,
      0x8b, 0x29, 0x1c, 0x79, 0x74, 0x76, 0x57, 0xa6,
      0x51, 0xeb, 0x1a, 0xb8, 0x82, 0x1b, 0x68, 0xe3,
      0x8b, 0x1c, 0x88, 0xc7, 0x36, 0xbb, 0xa9, 0x1c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char controller_manager_msgs__msg__ChainConnection__TYPE_NAME[] = "controller_manager_msgs/msg/ChainConnection";

// Define type names, field names, and default values
static char controller_manager_msgs__msg__ChainConnection__FIELD_NAME__name[] = "name";
static char controller_manager_msgs__msg__ChainConnection__FIELD_NAME__reference_interfaces[] = "reference_interfaces";

static rosidl_runtime_c__type_description__Field controller_manager_msgs__msg__ChainConnection__FIELDS[] = {
  {
    {controller_manager_msgs__msg__ChainConnection__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__ChainConnection__FIELD_NAME__reference_interfaces, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
controller_manager_msgs__msg__ChainConnection__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {controller_manager_msgs__msg__ChainConnection__TYPE_NAME, 43, 43},
      {controller_manager_msgs__msg__ChainConnection__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name        # name of controller exporting reference_interfaces\n"
  "string[] reference_interfaces        # list of reference exported by controller";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
controller_manager_msgs__msg__ChainConnection__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {controller_manager_msgs__msg__ChainConnection__TYPE_NAME, 43, 43},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 151, 151},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
controller_manager_msgs__msg__ChainConnection__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *controller_manager_msgs__msg__ChainConnection__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
