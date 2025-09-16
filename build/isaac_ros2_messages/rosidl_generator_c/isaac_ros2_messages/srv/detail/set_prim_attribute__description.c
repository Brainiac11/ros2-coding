// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from isaac_ros2_messages:srv/SetPrimAttribute.idl
// generated code does not contain a copyright notice

#include "isaac_ros2_messages/srv/detail/set_prim_attribute__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
const rosidl_type_hash_t *
isaac_ros2_messages__srv__SetPrimAttribute__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x07, 0x46, 0xb5, 0x97, 0xcc, 0x73, 0x49, 0xe8,
      0xe7, 0x41, 0x0d, 0x56, 0x12, 0x87, 0x9a, 0x37,
      0x20, 0x19, 0xd8, 0xad, 0xa1, 0x62, 0x42, 0xc8,
      0x29, 0xbc, 0x1e, 0xea, 0xce, 0x6f, 0x0e, 0xe8,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
const rosidl_type_hash_t *
isaac_ros2_messages__srv__SetPrimAttribute_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x09, 0xdd, 0x11, 0xe1, 0x5e, 0x67, 0xbc, 0xf0,
      0xbc, 0x83, 0x0d, 0x72, 0x0e, 0x82, 0x6c, 0x20,
      0x76, 0x32, 0x17, 0x09, 0x5d, 0x22, 0xbc, 0x75,
      0x43, 0x28, 0x29, 0xfa, 0x71, 0x18, 0xae, 0xa6,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
const rosidl_type_hash_t *
isaac_ros2_messages__srv__SetPrimAttribute_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x38, 0xf4, 0x74, 0x6b, 0x7a, 0x4c, 0x64, 0xc3,
      0xc7, 0xb6, 0x62, 0xdb, 0xab, 0xc4, 0xab, 0xc5,
      0x30, 0x83, 0x05, 0x69, 0xec, 0x87, 0x4f, 0xba,
      0x40, 0x82, 0xab, 0x39, 0x8d, 0x15, 0xe1, 0xfa,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
const rosidl_type_hash_t *
isaac_ros2_messages__srv__SetPrimAttribute_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x85, 0xc0, 0xe6, 0x03, 0x00, 0xdb, 0x9f, 0x1d,
      0xf2, 0xfb, 0x90, 0x9a, 0x39, 0xd3, 0x8b, 0x38,
      0x94, 0xf3, 0xdc, 0x73, 0x7b, 0xb4, 0x06, 0x37,
      0x59, 0x2e, 0xe6, 0x2a, 0x00, 0x51, 0x5e, 0x58,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char isaac_ros2_messages__srv__SetPrimAttribute__TYPE_NAME[] = "isaac_ros2_messages/srv/SetPrimAttribute";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char isaac_ros2_messages__srv__SetPrimAttribute_Event__TYPE_NAME[] = "isaac_ros2_messages/srv/SetPrimAttribute_Event";
static char isaac_ros2_messages__srv__SetPrimAttribute_Request__TYPE_NAME[] = "isaac_ros2_messages/srv/SetPrimAttribute_Request";
static char isaac_ros2_messages__srv__SetPrimAttribute_Response__TYPE_NAME[] = "isaac_ros2_messages/srv/SetPrimAttribute_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char isaac_ros2_messages__srv__SetPrimAttribute__FIELD_NAME__request_message[] = "request_message";
static char isaac_ros2_messages__srv__SetPrimAttribute__FIELD_NAME__response_message[] = "response_message";
static char isaac_ros2_messages__srv__SetPrimAttribute__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field isaac_ros2_messages__srv__SetPrimAttribute__FIELDS[] = {
  {
    {isaac_ros2_messages__srv__SetPrimAttribute__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {isaac_ros2_messages__srv__SetPrimAttribute_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__SetPrimAttribute__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {isaac_ros2_messages__srv__SetPrimAttribute_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__SetPrimAttribute__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {isaac_ros2_messages__srv__SetPrimAttribute_Event__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription isaac_ros2_messages__srv__SetPrimAttribute__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__SetPrimAttribute_Event__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__SetPrimAttribute_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__SetPrimAttribute_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
isaac_ros2_messages__srv__SetPrimAttribute__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {isaac_ros2_messages__srv__SetPrimAttribute__TYPE_NAME, 40, 40},
      {isaac_ros2_messages__srv__SetPrimAttribute__FIELDS, 3, 3},
    },
    {isaac_ros2_messages__srv__SetPrimAttribute__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = isaac_ros2_messages__srv__SetPrimAttribute_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = isaac_ros2_messages__srv__SetPrimAttribute_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = isaac_ros2_messages__srv__SetPrimAttribute_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char isaac_ros2_messages__srv__SetPrimAttribute_Request__FIELD_NAME__path[] = "path";
static char isaac_ros2_messages__srv__SetPrimAttribute_Request__FIELD_NAME__attribute[] = "attribute";
static char isaac_ros2_messages__srv__SetPrimAttribute_Request__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field isaac_ros2_messages__srv__SetPrimAttribute_Request__FIELDS[] = {
  {
    {isaac_ros2_messages__srv__SetPrimAttribute_Request__FIELD_NAME__path, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__SetPrimAttribute_Request__FIELD_NAME__attribute, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__SetPrimAttribute_Request__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
isaac_ros2_messages__srv__SetPrimAttribute_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {isaac_ros2_messages__srv__SetPrimAttribute_Request__TYPE_NAME, 48, 48},
      {isaac_ros2_messages__srv__SetPrimAttribute_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char isaac_ros2_messages__srv__SetPrimAttribute_Response__FIELD_NAME__success[] = "success";
static char isaac_ros2_messages__srv__SetPrimAttribute_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field isaac_ros2_messages__srv__SetPrimAttribute_Response__FIELDS[] = {
  {
    {isaac_ros2_messages__srv__SetPrimAttribute_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__SetPrimAttribute_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
isaac_ros2_messages__srv__SetPrimAttribute_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {isaac_ros2_messages__srv__SetPrimAttribute_Response__TYPE_NAME, 49, 49},
      {isaac_ros2_messages__srv__SetPrimAttribute_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char isaac_ros2_messages__srv__SetPrimAttribute_Event__FIELD_NAME__info[] = "info";
static char isaac_ros2_messages__srv__SetPrimAttribute_Event__FIELD_NAME__request[] = "request";
static char isaac_ros2_messages__srv__SetPrimAttribute_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field isaac_ros2_messages__srv__SetPrimAttribute_Event__FIELDS[] = {
  {
    {isaac_ros2_messages__srv__SetPrimAttribute_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__SetPrimAttribute_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {isaac_ros2_messages__srv__SetPrimAttribute_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__SetPrimAttribute_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {isaac_ros2_messages__srv__SetPrimAttribute_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription isaac_ros2_messages__srv__SetPrimAttribute_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__SetPrimAttribute_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__SetPrimAttribute_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
isaac_ros2_messages__srv__SetPrimAttribute_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {isaac_ros2_messages__srv__SetPrimAttribute_Event__TYPE_NAME, 46, 46},
      {isaac_ros2_messages__srv__SetPrimAttribute_Event__FIELDS, 3, 3},
    },
    {isaac_ros2_messages__srv__SetPrimAttribute_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = isaac_ros2_messages__srv__SetPrimAttribute_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = isaac_ros2_messages__srv__SetPrimAttribute_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string path             # prim path\n"
  "string attribute        # attribute name\n"
  "string value            # attribute value (as JSON)\n"
  "---\n"
  "bool success            # indicate a successful execution of the service\n"
  "string message          # informational, e.g. for error messages";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
isaac_ros2_messages__srv__SetPrimAttribute__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {isaac_ros2_messages__srv__SetPrimAttribute__TYPE_NAME, 40, 40},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 270, 270},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
isaac_ros2_messages__srv__SetPrimAttribute_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {isaac_ros2_messages__srv__SetPrimAttribute_Request__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
isaac_ros2_messages__srv__SetPrimAttribute_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {isaac_ros2_messages__srv__SetPrimAttribute_Response__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
isaac_ros2_messages__srv__SetPrimAttribute_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {isaac_ros2_messages__srv__SetPrimAttribute_Event__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
isaac_ros2_messages__srv__SetPrimAttribute__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *isaac_ros2_messages__srv__SetPrimAttribute__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *isaac_ros2_messages__srv__SetPrimAttribute_Event__get_individual_type_description_source(NULL);
    sources[3] = *isaac_ros2_messages__srv__SetPrimAttribute_Request__get_individual_type_description_source(NULL);
    sources[4] = *isaac_ros2_messages__srv__SetPrimAttribute_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
isaac_ros2_messages__srv__SetPrimAttribute_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *isaac_ros2_messages__srv__SetPrimAttribute_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
isaac_ros2_messages__srv__SetPrimAttribute_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *isaac_ros2_messages__srv__SetPrimAttribute_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
isaac_ros2_messages__srv__SetPrimAttribute_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *isaac_ros2_messages__srv__SetPrimAttribute_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *isaac_ros2_messages__srv__SetPrimAttribute_Request__get_individual_type_description_source(NULL);
    sources[3] = *isaac_ros2_messages__srv__SetPrimAttribute_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
