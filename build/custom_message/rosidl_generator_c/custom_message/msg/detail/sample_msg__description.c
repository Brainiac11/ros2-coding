// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_message:msg/SampleMsg.idl
// generated code does not contain a copyright notice

#include "custom_message/msg/detail/sample_msg__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_message
const rosidl_type_hash_t *
custom_message__msg__SampleMsg__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbe, 0x39, 0x3c, 0xbc, 0x6b, 0x20, 0xd6, 0x40,
      0x68, 0x83, 0xba, 0x03, 0xc1, 0x4f, 0xce, 0x8a,
      0xea, 0xe8, 0x63, 0xc5, 0x7d, 0x78, 0x3d, 0x65,
      0x29, 0x27, 0x10, 0xb0, 0x7a, 0x86, 0xa7, 0x7c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/string__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t std_msgs__msg__String__EXPECTED_HASH = {1, {
    0xdf, 0x66, 0x8c, 0x74, 0x04, 0x82, 0xbb, 0xd4,
    0x8f, 0xb3, 0x9d, 0x76, 0xa7, 0x0d, 0xfd, 0x4b,
    0xd5, 0x9d, 0xb1, 0x28, 0x80, 0x21, 0x74, 0x35,
    0x03, 0x25, 0x9e, 0x94, 0x8f, 0x6b, 0x1a, 0x18,
  }};
#endif

static char custom_message__msg__SampleMsg__TYPE_NAME[] = "custom_message/msg/SampleMsg";
static char std_msgs__msg__String__TYPE_NAME[] = "std_msgs/msg/String";

// Define type names, field names, and default values
static char custom_message__msg__SampleMsg__FIELD_NAME__my_string[] = "my_string";
static char custom_message__msg__SampleMsg__FIELD_NAME__my_num[] = "my_num";

static rosidl_runtime_c__type_description__Field custom_message__msg__SampleMsg__FIELDS[] = {
  {
    {custom_message__msg__SampleMsg__FIELD_NAME__my_string, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__String__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {custom_message__msg__SampleMsg__FIELD_NAME__my_num, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription custom_message__msg__SampleMsg__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {std_msgs__msg__String__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_message__msg__SampleMsg__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_message__msg__SampleMsg__TYPE_NAME, 28, 28},
      {custom_message__msg__SampleMsg__FIELDS, 2, 2},
    },
    {custom_message__msg__SampleMsg__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&std_msgs__msg__String__EXPECTED_HASH, std_msgs__msg__String__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = std_msgs__msg__String__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/String my_string\n"
  "int64 my_num";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
custom_message__msg__SampleMsg__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_message__msg__SampleMsg__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 39, 39},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_message__msg__SampleMsg__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_message__msg__SampleMsg__get_individual_type_description_source(NULL),
    sources[1] = *std_msgs__msg__String__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
