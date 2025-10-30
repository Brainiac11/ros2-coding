// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from human_interfaces:msg/KickCommand.idl
// generated code does not contain a copyright notice

#include "human_interfaces/msg/detail/kick_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_human_interfaces
const rosidl_type_hash_t *
human_interfaces__msg__KickCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8a, 0x05, 0xc2, 0xf6, 0x23, 0x50, 0x60, 0xdd,
      0x60, 0xd7, 0x40, 0x43, 0xce, 0x35, 0x55, 0xa7,
      0xc5, 0x84, 0xae, 0x18, 0xf0, 0x5f, 0x6d, 0x58,
      0x14, 0x87, 0xc2, 0x0b, 0x78, 0x00, 0xdf, 0xb3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char human_interfaces__msg__KickCommand__TYPE_NAME[] = "human_interfaces/msg/KickCommand";

// Define type names, field names, and default values
static char human_interfaces__msg__KickCommand__FIELD_NAME__should_kick[] = "should_kick";

static rosidl_runtime_c__type_description__Field human_interfaces__msg__KickCommand__FIELDS[] = {
  {
    {human_interfaces__msg__KickCommand__FIELD_NAME__should_kick, 11, 11},
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
human_interfaces__msg__KickCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {human_interfaces__msg__KickCommand__TYPE_NAME, 32, 32},
      {human_interfaces__msg__KickCommand__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool should_kick";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
human_interfaces__msg__KickCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {human_interfaces__msg__KickCommand__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 17, 17},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
human_interfaces__msg__KickCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *human_interfaces__msg__KickCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
