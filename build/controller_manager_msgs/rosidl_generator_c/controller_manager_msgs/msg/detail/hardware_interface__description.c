// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from controller_manager_msgs:msg/HardwareInterface.idl
// generated code does not contain a copyright notice

#include "controller_manager_msgs/msg/detail/hardware_interface__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_type_hash_t *
controller_manager_msgs__msg__HardwareInterface__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb4, 0xc5, 0x56, 0x99, 0x1d, 0xb8, 0x1c, 0xa5,
      0x6a, 0x49, 0x33, 0x8b, 0x5e, 0x8f, 0x06, 0x75,
      0xa6, 0x70, 0x7f, 0xae, 0xe5, 0x4f, 0xba, 0x16,
      0x1d, 0x2b, 0xbd, 0x4d, 0x96, 0x3d, 0x41, 0x8a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char controller_manager_msgs__msg__HardwareInterface__TYPE_NAME[] = "controller_manager_msgs/msg/HardwareInterface";

// Define type names, field names, and default values
static char controller_manager_msgs__msg__HardwareInterface__FIELD_NAME__name[] = "name";
static char controller_manager_msgs__msg__HardwareInterface__FIELD_NAME__data_type[] = "data_type";
static char controller_manager_msgs__msg__HardwareInterface__FIELD_NAME__is_available[] = "is_available";
static char controller_manager_msgs__msg__HardwareInterface__FIELD_NAME__is_claimed[] = "is_claimed";

static rosidl_runtime_c__type_description__Field controller_manager_msgs__msg__HardwareInterface__FIELDS[] = {
  {
    {controller_manager_msgs__msg__HardwareInterface__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__HardwareInterface__FIELD_NAME__data_type, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__HardwareInterface__FIELD_NAME__is_available, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__HardwareInterface__FIELD_NAME__is_claimed, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
controller_manager_msgs__msg__HardwareInterface__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {controller_manager_msgs__msg__HardwareInterface__TYPE_NAME, 45, 45},
      {controller_manager_msgs__msg__HardwareInterface__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "string data_type\n"
  "bool is_available\n"
  "bool is_claimed";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
controller_manager_msgs__msg__HardwareInterface__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {controller_manager_msgs__msg__HardwareInterface__TYPE_NAME, 45, 45},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 63, 63},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
controller_manager_msgs__msg__HardwareInterface__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *controller_manager_msgs__msg__HardwareInterface__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
