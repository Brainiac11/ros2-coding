// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from control_msgs:srv/QueryCalibrationState.idl
// generated code does not contain a copyright notice

#include "control_msgs/srv/detail/query_calibration_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_control_msgs
const rosidl_type_hash_t *
control_msgs__srv__QueryCalibrationState__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc6, 0xb9, 0xd1, 0xfd, 0x88, 0xcb, 0xa4, 0x88,
      0x07, 0x5e, 0xe9, 0xfd, 0x7b, 0x69, 0xea, 0x4f,
      0xf6, 0xb1, 0x2b, 0xcd, 0xd0, 0x1a, 0xfe, 0xb9,
      0xc6, 0x08, 0xdd, 0x6f, 0x82, 0x74, 0xde, 0x57,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_control_msgs
const rosidl_type_hash_t *
control_msgs__srv__QueryCalibrationState_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9f, 0x30, 0x4f, 0x2b, 0x04, 0xa8, 0x1a, 0x22,
      0x5a, 0x8a, 0xf7, 0x80, 0x11, 0xc1, 0xb4, 0x3e,
      0xa7, 0xc0, 0xe5, 0xf2, 0xf9, 0xbe, 0x89, 0x1e,
      0x50, 0xa7, 0x30, 0x4b, 0x01, 0x54, 0x1e, 0xa4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_control_msgs
const rosidl_type_hash_t *
control_msgs__srv__QueryCalibrationState_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3c, 0xd0, 0xe4, 0x83, 0x3f, 0x9e, 0x0c, 0xda,
      0x53, 0x59, 0x9f, 0x79, 0x17, 0xea, 0x6a, 0xd3,
      0x8a, 0x45, 0x56, 0x9f, 0x04, 0x6b, 0x6e, 0xb1,
      0x4e, 0x7c, 0x02, 0xbb, 0x24, 0xad, 0x86, 0xc6,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_control_msgs
const rosidl_type_hash_t *
control_msgs__srv__QueryCalibrationState_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbc, 0x51, 0x0f, 0x85, 0x2c, 0x8e, 0xeb, 0x65,
      0x2b, 0x55, 0x98, 0xe1, 0x37, 0x55, 0x04, 0x8d,
      0x1b, 0x96, 0x76, 0xf9, 0xf9, 0xf4, 0xc7, 0xc6,
      0x37, 0x46, 0x70, 0xc4, 0x1d, 0x3c, 0xd6, 0x56,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

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

static char control_msgs__srv__QueryCalibrationState__TYPE_NAME[] = "control_msgs/srv/QueryCalibrationState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char control_msgs__srv__QueryCalibrationState_Event__TYPE_NAME[] = "control_msgs/srv/QueryCalibrationState_Event";
static char control_msgs__srv__QueryCalibrationState_Request__TYPE_NAME[] = "control_msgs/srv/QueryCalibrationState_Request";
static char control_msgs__srv__QueryCalibrationState_Response__TYPE_NAME[] = "control_msgs/srv/QueryCalibrationState_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char control_msgs__srv__QueryCalibrationState__FIELD_NAME__request_message[] = "request_message";
static char control_msgs__srv__QueryCalibrationState__FIELD_NAME__response_message[] = "response_message";
static char control_msgs__srv__QueryCalibrationState__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field control_msgs__srv__QueryCalibrationState__FIELDS[] = {
  {
    {control_msgs__srv__QueryCalibrationState__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {control_msgs__srv__QueryCalibrationState_Request__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__srv__QueryCalibrationState__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {control_msgs__srv__QueryCalibrationState_Response__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__srv__QueryCalibrationState__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {control_msgs__srv__QueryCalibrationState_Event__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription control_msgs__srv__QueryCalibrationState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {control_msgs__srv__QueryCalibrationState_Event__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {control_msgs__srv__QueryCalibrationState_Request__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {control_msgs__srv__QueryCalibrationState_Response__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
control_msgs__srv__QueryCalibrationState__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_msgs__srv__QueryCalibrationState__TYPE_NAME, 38, 38},
      {control_msgs__srv__QueryCalibrationState__FIELDS, 3, 3},
    },
    {control_msgs__srv__QueryCalibrationState__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = control_msgs__srv__QueryCalibrationState_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = control_msgs__srv__QueryCalibrationState_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = control_msgs__srv__QueryCalibrationState_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char control_msgs__srv__QueryCalibrationState_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field control_msgs__srv__QueryCalibrationState_Request__FIELDS[] = {
  {
    {control_msgs__srv__QueryCalibrationState_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
control_msgs__srv__QueryCalibrationState_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_msgs__srv__QueryCalibrationState_Request__TYPE_NAME, 46, 46},
      {control_msgs__srv__QueryCalibrationState_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char control_msgs__srv__QueryCalibrationState_Response__FIELD_NAME__is_calibrated[] = "is_calibrated";

static rosidl_runtime_c__type_description__Field control_msgs__srv__QueryCalibrationState_Response__FIELDS[] = {
  {
    {control_msgs__srv__QueryCalibrationState_Response__FIELD_NAME__is_calibrated, 13, 13},
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
control_msgs__srv__QueryCalibrationState_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_msgs__srv__QueryCalibrationState_Response__TYPE_NAME, 47, 47},
      {control_msgs__srv__QueryCalibrationState_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char control_msgs__srv__QueryCalibrationState_Event__FIELD_NAME__info[] = "info";
static char control_msgs__srv__QueryCalibrationState_Event__FIELD_NAME__request[] = "request";
static char control_msgs__srv__QueryCalibrationState_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field control_msgs__srv__QueryCalibrationState_Event__FIELDS[] = {
  {
    {control_msgs__srv__QueryCalibrationState_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__srv__QueryCalibrationState_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {control_msgs__srv__QueryCalibrationState_Request__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__srv__QueryCalibrationState_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {control_msgs__srv__QueryCalibrationState_Response__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription control_msgs__srv__QueryCalibrationState_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {control_msgs__srv__QueryCalibrationState_Request__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {control_msgs__srv__QueryCalibrationState_Response__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
control_msgs__srv__QueryCalibrationState_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_msgs__srv__QueryCalibrationState_Event__TYPE_NAME, 44, 44},
      {control_msgs__srv__QueryCalibrationState_Event__FIELDS, 3, 3},
    },
    {control_msgs__srv__QueryCalibrationState_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = control_msgs__srv__QueryCalibrationState_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = control_msgs__srv__QueryCalibrationState_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "---\n"
  "bool is_calibrated";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
control_msgs__srv__QueryCalibrationState__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_msgs__srv__QueryCalibrationState__TYPE_NAME, 38, 38},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 23, 23},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
control_msgs__srv__QueryCalibrationState_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_msgs__srv__QueryCalibrationState_Request__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
control_msgs__srv__QueryCalibrationState_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_msgs__srv__QueryCalibrationState_Response__TYPE_NAME, 47, 47},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
control_msgs__srv__QueryCalibrationState_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_msgs__srv__QueryCalibrationState_Event__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_msgs__srv__QueryCalibrationState__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_msgs__srv__QueryCalibrationState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *control_msgs__srv__QueryCalibrationState_Event__get_individual_type_description_source(NULL);
    sources[3] = *control_msgs__srv__QueryCalibrationState_Request__get_individual_type_description_source(NULL);
    sources[4] = *control_msgs__srv__QueryCalibrationState_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_msgs__srv__QueryCalibrationState_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_msgs__srv__QueryCalibrationState_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_msgs__srv__QueryCalibrationState_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_msgs__srv__QueryCalibrationState_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_msgs__srv__QueryCalibrationState_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_msgs__srv__QueryCalibrationState_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *control_msgs__srv__QueryCalibrationState_Request__get_individual_type_description_source(NULL);
    sources[3] = *control_msgs__srv__QueryCalibrationState_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
