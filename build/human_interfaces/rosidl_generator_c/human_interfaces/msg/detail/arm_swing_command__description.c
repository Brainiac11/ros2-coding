// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from human_interfaces:msg/ArmSwingCommand.idl
// generated code does not contain a copyright notice

#include "human_interfaces/msg/detail/arm_swing_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_human_interfaces
const rosidl_type_hash_t *
human_interfaces__msg__ArmSwingCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc9, 0x71, 0x1f, 0xbd, 0x6f, 0x6c, 0x6e, 0x65,
      0x63, 0x92, 0xd3, 0xa0, 0xdc, 0xa8, 0x96, 0x4a,
      0xbe, 0x64, 0xe8, 0x1a, 0x87, 0xfb, 0x72, 0x49,
      0x0f, 0x15, 0xc0, 0x36, 0x72, 0xf7, 0x6d, 0xcf,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char human_interfaces__msg__ArmSwingCommand__TYPE_NAME[] = "human_interfaces/msg/ArmSwingCommand";

// Define type names, field names, and default values
static char human_interfaces__msg__ArmSwingCommand__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field human_interfaces__msg__ArmSwingCommand__FIELDS[] = {
  {
    {human_interfaces__msg__ArmSwingCommand__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
human_interfaces__msg__ArmSwingCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {human_interfaces__msg__ArmSwingCommand__TYPE_NAME, 36, 36},
      {human_interfaces__msg__ArmSwingCommand__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}


static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
human_interfaces__msg__ArmSwingCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {human_interfaces__msg__ArmSwingCommand__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
human_interfaces__msg__ArmSwingCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *human_interfaces__msg__ArmSwingCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
