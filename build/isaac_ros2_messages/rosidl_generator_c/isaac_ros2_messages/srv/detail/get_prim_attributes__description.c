// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from isaac_ros2_messages:srv/GetPrimAttributes.idl
// generated code does not contain a copyright notice

#include "isaac_ros2_messages/srv/detail/get_prim_attributes__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
const rosidl_type_hash_t *
isaac_ros2_messages__srv__GetPrimAttributes__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4b, 0xa5, 0x21, 0xdf, 0xd5, 0x25, 0x4b, 0x1a,
      0xe4, 0x09, 0xbc, 0x09, 0x3b, 0x4c, 0x10, 0xdb,
      0x9f, 0x63, 0x0b, 0x4d, 0xcf, 0xbe, 0x3c, 0x39,
      0x12, 0xe3, 0x38, 0x5f, 0x9e, 0xe1, 0x0a, 0x19,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
const rosidl_type_hash_t *
isaac_ros2_messages__srv__GetPrimAttributes_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf7, 0xab, 0x90, 0x04, 0xf9, 0xb0, 0x1b, 0xf2,
      0xa6, 0x29, 0x08, 0xa2, 0xa5, 0xd1, 0xa2, 0x9c,
      0x48, 0x9a, 0xc2, 0xc5, 0xe9, 0x95, 0xd2, 0x4b,
      0xba, 0x3d, 0x7b, 0x1a, 0x30, 0x07, 0xf5, 0x41,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
const rosidl_type_hash_t *
isaac_ros2_messages__srv__GetPrimAttributes_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x66, 0x7b, 0xb0, 0x29, 0x70, 0xc6, 0x58, 0xa5,
      0x73, 0xd3, 0x08, 0x72, 0xe3, 0x7f, 0x93, 0x6e,
      0x39, 0x64, 0xa7, 0x5b, 0x93, 0x81, 0xb5, 0x22,
      0x3e, 0x78, 0xf4, 0xbc, 0xd0, 0x85, 0xf6, 0xca,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
const rosidl_type_hash_t *
isaac_ros2_messages__srv__GetPrimAttributes_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x09, 0x5a, 0x41, 0xef, 0x9c, 0x5b, 0x90, 0x38,
      0x65, 0xa5, 0x3f, 0xd6, 0x42, 0x3a, 0xfe, 0xf2,
      0x17, 0x3d, 0x8f, 0x64, 0xc9, 0x5e, 0x10, 0x7c,
      0xdc, 0x58, 0xa7, 0x97, 0xf5, 0x48, 0x76, 0x45,
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

static char isaac_ros2_messages__srv__GetPrimAttributes__TYPE_NAME[] = "isaac_ros2_messages/srv/GetPrimAttributes";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char isaac_ros2_messages__srv__GetPrimAttributes_Event__TYPE_NAME[] = "isaac_ros2_messages/srv/GetPrimAttributes_Event";
static char isaac_ros2_messages__srv__GetPrimAttributes_Request__TYPE_NAME[] = "isaac_ros2_messages/srv/GetPrimAttributes_Request";
static char isaac_ros2_messages__srv__GetPrimAttributes_Response__TYPE_NAME[] = "isaac_ros2_messages/srv/GetPrimAttributes_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char isaac_ros2_messages__srv__GetPrimAttributes__FIELD_NAME__request_message[] = "request_message";
static char isaac_ros2_messages__srv__GetPrimAttributes__FIELD_NAME__response_message[] = "response_message";
static char isaac_ros2_messages__srv__GetPrimAttributes__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field isaac_ros2_messages__srv__GetPrimAttributes__FIELDS[] = {
  {
    {isaac_ros2_messages__srv__GetPrimAttributes__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {isaac_ros2_messages__srv__GetPrimAttributes_Request__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__GetPrimAttributes__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {isaac_ros2_messages__srv__GetPrimAttributes_Response__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__GetPrimAttributes__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {isaac_ros2_messages__srv__GetPrimAttributes_Event__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription isaac_ros2_messages__srv__GetPrimAttributes__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__GetPrimAttributes_Event__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__GetPrimAttributes_Request__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__GetPrimAttributes_Response__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
isaac_ros2_messages__srv__GetPrimAttributes__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {isaac_ros2_messages__srv__GetPrimAttributes__TYPE_NAME, 41, 41},
      {isaac_ros2_messages__srv__GetPrimAttributes__FIELDS, 3, 3},
    },
    {isaac_ros2_messages__srv__GetPrimAttributes__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = isaac_ros2_messages__srv__GetPrimAttributes_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = isaac_ros2_messages__srv__GetPrimAttributes_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = isaac_ros2_messages__srv__GetPrimAttributes_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char isaac_ros2_messages__srv__GetPrimAttributes_Request__FIELD_NAME__path[] = "path";

static rosidl_runtime_c__type_description__Field isaac_ros2_messages__srv__GetPrimAttributes_Request__FIELDS[] = {
  {
    {isaac_ros2_messages__srv__GetPrimAttributes_Request__FIELD_NAME__path, 4, 4},
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
isaac_ros2_messages__srv__GetPrimAttributes_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {isaac_ros2_messages__srv__GetPrimAttributes_Request__TYPE_NAME, 49, 49},
      {isaac_ros2_messages__srv__GetPrimAttributes_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char isaac_ros2_messages__srv__GetPrimAttributes_Response__FIELD_NAME__names[] = "names";
static char isaac_ros2_messages__srv__GetPrimAttributes_Response__FIELD_NAME__displays[] = "displays";
static char isaac_ros2_messages__srv__GetPrimAttributes_Response__FIELD_NAME__types[] = "types";
static char isaac_ros2_messages__srv__GetPrimAttributes_Response__FIELD_NAME__success[] = "success";
static char isaac_ros2_messages__srv__GetPrimAttributes_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field isaac_ros2_messages__srv__GetPrimAttributes_Response__FIELDS[] = {
  {
    {isaac_ros2_messages__srv__GetPrimAttributes_Response__FIELD_NAME__names, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__GetPrimAttributes_Response__FIELD_NAME__displays, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__GetPrimAttributes_Response__FIELD_NAME__types, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__GetPrimAttributes_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__GetPrimAttributes_Response__FIELD_NAME__message, 7, 7},
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
isaac_ros2_messages__srv__GetPrimAttributes_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {isaac_ros2_messages__srv__GetPrimAttributes_Response__TYPE_NAME, 50, 50},
      {isaac_ros2_messages__srv__GetPrimAttributes_Response__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char isaac_ros2_messages__srv__GetPrimAttributes_Event__FIELD_NAME__info[] = "info";
static char isaac_ros2_messages__srv__GetPrimAttributes_Event__FIELD_NAME__request[] = "request";
static char isaac_ros2_messages__srv__GetPrimAttributes_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field isaac_ros2_messages__srv__GetPrimAttributes_Event__FIELDS[] = {
  {
    {isaac_ros2_messages__srv__GetPrimAttributes_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__GetPrimAttributes_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {isaac_ros2_messages__srv__GetPrimAttributes_Request__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__GetPrimAttributes_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {isaac_ros2_messages__srv__GetPrimAttributes_Response__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription isaac_ros2_messages__srv__GetPrimAttributes_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__GetPrimAttributes_Request__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {isaac_ros2_messages__srv__GetPrimAttributes_Response__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
isaac_ros2_messages__srv__GetPrimAttributes_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {isaac_ros2_messages__srv__GetPrimAttributes_Event__TYPE_NAME, 47, 47},
      {isaac_ros2_messages__srv__GetPrimAttributes_Event__FIELDS, 3, 3},
    },
    {isaac_ros2_messages__srv__GetPrimAttributes_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = isaac_ros2_messages__srv__GetPrimAttributes_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = isaac_ros2_messages__srv__GetPrimAttributes_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string path             # prim path\n"
  "---\n"
  "string[] names          # list of attribute base names (name used to Get or Set an attribute)\n"
  "string[] displays       # list of attribute display names (name displayed in Property tab)\n"
  "string[] types          # list of attribute data types\n"
  "bool success            # indicate a successful execution of the service\n"
  "string message          # informational, e.g. for error messages";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
isaac_ros2_messages__srv__GetPrimAttributes__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {isaac_ros2_messages__srv__GetPrimAttributes__TYPE_NAME, 41, 41},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 417, 417},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
isaac_ros2_messages__srv__GetPrimAttributes_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {isaac_ros2_messages__srv__GetPrimAttributes_Request__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
isaac_ros2_messages__srv__GetPrimAttributes_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {isaac_ros2_messages__srv__GetPrimAttributes_Response__TYPE_NAME, 50, 50},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
isaac_ros2_messages__srv__GetPrimAttributes_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {isaac_ros2_messages__srv__GetPrimAttributes_Event__TYPE_NAME, 47, 47},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
isaac_ros2_messages__srv__GetPrimAttributes__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *isaac_ros2_messages__srv__GetPrimAttributes__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *isaac_ros2_messages__srv__GetPrimAttributes_Event__get_individual_type_description_source(NULL);
    sources[3] = *isaac_ros2_messages__srv__GetPrimAttributes_Request__get_individual_type_description_source(NULL);
    sources[4] = *isaac_ros2_messages__srv__GetPrimAttributes_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
isaac_ros2_messages__srv__GetPrimAttributes_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *isaac_ros2_messages__srv__GetPrimAttributes_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
isaac_ros2_messages__srv__GetPrimAttributes_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *isaac_ros2_messages__srv__GetPrimAttributes_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
isaac_ros2_messages__srv__GetPrimAttributes_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *isaac_ros2_messages__srv__GetPrimAttributes_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *isaac_ros2_messages__srv__GetPrimAttributes_Request__get_individual_type_description_source(NULL);
    sources[3] = *isaac_ros2_messages__srv__GetPrimAttributes_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
