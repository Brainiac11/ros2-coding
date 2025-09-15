// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from control_msgs:msg/InterfaceValue.idl
// generated code does not contain a copyright notice

#include "control_msgs/msg/detail/interface_value__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_control_msgs
const rosidl_type_hash_t *
control_msgs__msg__InterfaceValue__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x74, 0xa1, 0x21, 0x44, 0xef, 0x6b, 0x7a, 0xf6,
      0x75, 0x33, 0x19, 0x5c, 0xb3, 0x0f, 0x7f, 0x60,
      0x7d, 0x33, 0x01, 0xb6, 0x69, 0x50, 0x20, 0x8a,
      0x72, 0xd2, 0x80, 0x69, 0x5f, 0x3e, 0x19, 0x0c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char control_msgs__msg__InterfaceValue__TYPE_NAME[] = "control_msgs/msg/InterfaceValue";

// Define type names, field names, and default values
static char control_msgs__msg__InterfaceValue__FIELD_NAME__interface_names[] = "interface_names";
static char control_msgs__msg__InterfaceValue__FIELD_NAME__values[] = "values";

static rosidl_runtime_c__type_description__Field control_msgs__msg__InterfaceValue__FIELDS[] = {
  {
    {control_msgs__msg__InterfaceValue__FIELD_NAME__interface_names, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__InterfaceValue__FIELD_NAME__values, 6, 6},
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
control_msgs__msg__InterfaceValue__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_msgs__msg__InterfaceValue__TYPE_NAME, 31, 31},
      {control_msgs__msg__InterfaceValue__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# List of resource interface names\n"
  "string[] interface_names\n"
  "# Values corresponding to the list of interfaces in `interface_names`, [1.0, 0.0] for example\n"
  "float64[] values";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
control_msgs__msg__InterfaceValue__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_msgs__msg__InterfaceValue__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 171, 171},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_msgs__msg__InterfaceValue__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_msgs__msg__InterfaceValue__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
