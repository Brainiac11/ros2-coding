// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from isaac_ros2_messages:srv/GetPrims.idl
// generated code does not contain a copyright notice

#include "isaac_ros2_messages/srv/detail/get_prims__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
const rosidl_type_hash_t *
isaac_ros2_messages__srv__GetPrims__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2a, 0x44, 0xdf, 0xa1, 0xf0, 0x26, 0x9f, 0x92,
      0xb5, 0xbe, 0xf3, 0x36, 0x8e, 0x97, 0xbe, 0x44,
      0x3d, 0xd6, 0xb0, 0xb0, 0xba, 0xcc, 0x28, 0x1b,
      0x24, 0xcd, 0x4f, 0x77, 0x7f, 0x6f, 0xbb, 0x2c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
const rosidl_type_hash_t *
isaac_ros2_messages__srv__GetPrims_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x54, 0x32, 0xdb, 0xa3, 0xb2, 0x3c, 0x3e, 0x44,
      0xf2, 0x30, 0xd2, 0x40, 0x15, 0x2c, 0x9c, 0xfa,
      0xaa, 0xd8, 0xa7, 0xfb, 0x0d, 0xbb, 0xd6, 0x5c,
      0x15, 0x14, 0xf0, 0x85, 0x98, 0x07, 0xd0, 0x80,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
const rosidl_type_hash_t *
isaac_ros2_messages__srv__GetPrims_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x85, 0x24, 0x08, 0xea, 0x32, 0x7c, 0x75, 0x6d,
      0x55, 0x55, 0x7f, 0xab, 0x63, 0x6f, 0x3d, 0x8c,
      0x77, 0x1c, 0x54, 0xdc, 0x29, 0x62, 0xf6, 0x49,
      0x10, 0x21, 0x2d, 0x71, 0xad, 0x6e, 0x7b, 0x52,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
const rosidl_type_hash_t *
isaac_ros2_messages__srv__GetPrims_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x43, 0x13, 0xd9, 0x05, 0x33, 0x8c, 0x86, 0xd0,
      0x14, 0xfa, 0xe6, 0x8c, 0x79, 0xc6, 0x21, 0x5e,
      0x78, 0x37, 0x9a, 0x51, 0x07, 0xe9, 0xa6, 0xe7,
      0xac, 0xe3, 0x2b, 0xde, 0xde, 0x30, 0x38, 0xf3,
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

static char isaac_ros2_messages__srv__GetPrims__TYPE_NAME[] = "isaac_ros2_messages/srv/GetPrims";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char isaac_ros2_messages__srv__GetPrims_Event__TYPE_NAME[] = "isaac_ros2_messages/srv/GetPrims_Event";
static char isaac_ros2_messages__srv__GetPrims_Request__TYPE_NAME[] = "isaac_ros2_messages/srv/GetPrims_Request";
static char isaac_ros2_messages__srv__GetPrims_Response__TYPE_NAME[] = "isaac_ros2_messages/srv/GetPrims_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char isaac_ros2_messages__srv__GetPrims__FIELD_NAME__request_message[] = "request_message";
static char isaac_ros2_messages__srv__GetPrims__FIELD_NAME__response_message[] = "response_message";
static char isaac_ros2_messages__srv__GetPrims__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field isaac_ros2_messages__srv__GetPrims__FIELDS[] = {
  {
    {isaac_ros2_messages__srv__GetPrims__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {isaac_ros2_messages__srv__GetPrims_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__GetPrims__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {isaac_ros2_messages__srv__GetPrims_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__GetPrims__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {isaac_ros2_messages__srv__GetPrims_Event__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription isaac_ros2_messages__srv__GetPrims__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__GetPrims_Event__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__GetPrims_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__GetPrims_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
isaac_ros2_messages__srv__GetPrims__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {isaac_ros2_messages__srv__GetPrims__TYPE_NAME, 32, 32},
      {isaac_ros2_messages__srv__GetPrims__FIELDS, 3, 3},
    },
    {isaac_ros2_messages__srv__GetPrims__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = isaac_ros2_messages__srv__GetPrims_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = isaac_ros2_messages__srv__GetPrims_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = isaac_ros2_messages__srv__GetPrims_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char isaac_ros2_messages__srv__GetPrims_Request__FIELD_NAME__path[] = "path";

static rosidl_runtime_c__type_description__Field isaac_ros2_messages__srv__GetPrims_Request__FIELDS[] = {
  {
    {isaac_ros2_messages__srv__GetPrims_Request__FIELD_NAME__path, 4, 4},
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
isaac_ros2_messages__srv__GetPrims_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {isaac_ros2_messages__srv__GetPrims_Request__TYPE_NAME, 40, 40},
      {isaac_ros2_messages__srv__GetPrims_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char isaac_ros2_messages__srv__GetPrims_Response__FIELD_NAME__paths[] = "paths";
static char isaac_ros2_messages__srv__GetPrims_Response__FIELD_NAME__types[] = "types";
static char isaac_ros2_messages__srv__GetPrims_Response__FIELD_NAME__success[] = "success";
static char isaac_ros2_messages__srv__GetPrims_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field isaac_ros2_messages__srv__GetPrims_Response__FIELDS[] = {
  {
    {isaac_ros2_messages__srv__GetPrims_Response__FIELD_NAME__paths, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__GetPrims_Response__FIELD_NAME__types, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__GetPrims_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__GetPrims_Response__FIELD_NAME__message, 7, 7},
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
isaac_ros2_messages__srv__GetPrims_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {isaac_ros2_messages__srv__GetPrims_Response__TYPE_NAME, 41, 41},
      {isaac_ros2_messages__srv__GetPrims_Response__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char isaac_ros2_messages__srv__GetPrims_Event__FIELD_NAME__info[] = "info";
static char isaac_ros2_messages__srv__GetPrims_Event__FIELD_NAME__request[] = "request";
static char isaac_ros2_messages__srv__GetPrims_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field isaac_ros2_messages__srv__GetPrims_Event__FIELDS[] = {
  {
    {isaac_ros2_messages__srv__GetPrims_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__GetPrims_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {isaac_ros2_messages__srv__GetPrims_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__GetPrims_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {isaac_ros2_messages__srv__GetPrims_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription isaac_ros2_messages__srv__GetPrims_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__GetPrims_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__GetPrims_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
isaac_ros2_messages__srv__GetPrims_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {isaac_ros2_messages__srv__GetPrims_Event__TYPE_NAME, 38, 38},
      {isaac_ros2_messages__srv__GetPrims_Event__FIELDS, 3, 3},
    },
    {isaac_ros2_messages__srv__GetPrims_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = isaac_ros2_messages__srv__GetPrims_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = isaac_ros2_messages__srv__GetPrims_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string path             # get prims at path\n"
  "---\n"
  "string[] paths          # list of prim paths\n"
  "string[] types          # prim type names\n"
  "bool success            # indicate a successful execution of the service\n"
  "string message          # informational, e.g. for error messages";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
isaac_ros2_messages__srv__GetPrims__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {isaac_ros2_messages__srv__GetPrims__TYPE_NAME, 32, 32},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 272, 272},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
isaac_ros2_messages__srv__GetPrims_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {isaac_ros2_messages__srv__GetPrims_Request__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
isaac_ros2_messages__srv__GetPrims_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {isaac_ros2_messages__srv__GetPrims_Response__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
isaac_ros2_messages__srv__GetPrims_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {isaac_ros2_messages__srv__GetPrims_Event__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
isaac_ros2_messages__srv__GetPrims__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *isaac_ros2_messages__srv__GetPrims__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *isaac_ros2_messages__srv__GetPrims_Event__get_individual_type_description_source(NULL);
    sources[3] = *isaac_ros2_messages__srv__GetPrims_Request__get_individual_type_description_source(NULL);
    sources[4] = *isaac_ros2_messages__srv__GetPrims_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
isaac_ros2_messages__srv__GetPrims_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *isaac_ros2_messages__srv__GetPrims_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
isaac_ros2_messages__srv__GetPrims_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *isaac_ros2_messages__srv__GetPrims_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
isaac_ros2_messages__srv__GetPrims_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *isaac_ros2_messages__srv__GetPrims_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *isaac_ros2_messages__srv__GetPrims_Request__get_individual_type_description_source(NULL);
    sources[3] = *isaac_ros2_messages__srv__GetPrims_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
