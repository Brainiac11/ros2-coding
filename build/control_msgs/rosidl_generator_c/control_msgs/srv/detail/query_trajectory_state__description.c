// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from control_msgs:srv/QueryTrajectoryState.idl
// generated code does not contain a copyright notice

#include "control_msgs/srv/detail/query_trajectory_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_control_msgs
const rosidl_type_hash_t *
control_msgs__srv__QueryTrajectoryState__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4a, 0x09, 0x35, 0xdf, 0xfe, 0xf1, 0x8b, 0xc5,
      0xb9, 0xe1, 0x01, 0xc9, 0xd0, 0x3d, 0x84, 0xe6,
      0x81, 0xec, 0xd4, 0xce, 0xbd, 0x72, 0x4b, 0x8f,
      0x11, 0xfd, 0xe0, 0x08, 0x75, 0x1a, 0x32, 0x5a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_control_msgs
const rosidl_type_hash_t *
control_msgs__srv__QueryTrajectoryState_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xec, 0x33, 0x22, 0x82, 0x4b, 0x7a, 0x1e, 0xe8,
      0x50, 0xe0, 0x3f, 0xf9, 0x51, 0xf4, 0x8b, 0x10,
      0x39, 0x5c, 0xab, 0x62, 0xa5, 0xa5, 0x66, 0x2d,
      0xa3, 0x20, 0x00, 0xf8, 0xb0, 0x6a, 0xa7, 0x91,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_control_msgs
const rosidl_type_hash_t *
control_msgs__srv__QueryTrajectoryState_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf7, 0xb9, 0x20, 0x12, 0x9b, 0x8d, 0x58, 0x41,
      0x31, 0x2b, 0xcb, 0x89, 0xe6, 0x27, 0x55, 0x08,
      0xe1, 0x9b, 0x37, 0x35, 0xa3, 0x71, 0xb2, 0xdf,
      0x6e, 0x41, 0x74, 0x47, 0xa4, 0x4e, 0xa5, 0xdb,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_control_msgs
const rosidl_type_hash_t *
control_msgs__srv__QueryTrajectoryState_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x87, 0x0d, 0xaa, 0x47, 0x2c, 0x1a, 0x56, 0xf2,
      0x28, 0x59, 0xcd, 0x73, 0xe9, 0xb0, 0x08, 0x92,
      0x3e, 0xcf, 0x1e, 0x48, 0x01, 0x56, 0xc4, 0xdd,
      0xfc, 0x91, 0xed, 0xee, 0x98, 0x88, 0x54, 0x74,
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

static char control_msgs__srv__QueryTrajectoryState__TYPE_NAME[] = "control_msgs/srv/QueryTrajectoryState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char control_msgs__srv__QueryTrajectoryState_Event__TYPE_NAME[] = "control_msgs/srv/QueryTrajectoryState_Event";
static char control_msgs__srv__QueryTrajectoryState_Request__TYPE_NAME[] = "control_msgs/srv/QueryTrajectoryState_Request";
static char control_msgs__srv__QueryTrajectoryState_Response__TYPE_NAME[] = "control_msgs/srv/QueryTrajectoryState_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char control_msgs__srv__QueryTrajectoryState__FIELD_NAME__request_message[] = "request_message";
static char control_msgs__srv__QueryTrajectoryState__FIELD_NAME__response_message[] = "response_message";
static char control_msgs__srv__QueryTrajectoryState__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field control_msgs__srv__QueryTrajectoryState__FIELDS[] = {
  {
    {control_msgs__srv__QueryTrajectoryState__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {control_msgs__srv__QueryTrajectoryState_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__srv__QueryTrajectoryState__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {control_msgs__srv__QueryTrajectoryState_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__srv__QueryTrajectoryState__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {control_msgs__srv__QueryTrajectoryState_Event__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription control_msgs__srv__QueryTrajectoryState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {control_msgs__srv__QueryTrajectoryState_Event__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {control_msgs__srv__QueryTrajectoryState_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {control_msgs__srv__QueryTrajectoryState_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
control_msgs__srv__QueryTrajectoryState__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_msgs__srv__QueryTrajectoryState__TYPE_NAME, 37, 37},
      {control_msgs__srv__QueryTrajectoryState__FIELDS, 3, 3},
    },
    {control_msgs__srv__QueryTrajectoryState__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = control_msgs__srv__QueryTrajectoryState_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = control_msgs__srv__QueryTrajectoryState_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = control_msgs__srv__QueryTrajectoryState_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char control_msgs__srv__QueryTrajectoryState_Request__FIELD_NAME__time[] = "time";

static rosidl_runtime_c__type_description__Field control_msgs__srv__QueryTrajectoryState_Request__FIELDS[] = {
  {
    {control_msgs__srv__QueryTrajectoryState_Request__FIELD_NAME__time, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription control_msgs__srv__QueryTrajectoryState_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
control_msgs__srv__QueryTrajectoryState_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_msgs__srv__QueryTrajectoryState_Request__TYPE_NAME, 45, 45},
      {control_msgs__srv__QueryTrajectoryState_Request__FIELDS, 1, 1},
    },
    {control_msgs__srv__QueryTrajectoryState_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char control_msgs__srv__QueryTrajectoryState_Response__FIELD_NAME__success[] = "success";
static char control_msgs__srv__QueryTrajectoryState_Response__FIELD_NAME__message[] = "message";
static char control_msgs__srv__QueryTrajectoryState_Response__FIELD_NAME__name[] = "name";
static char control_msgs__srv__QueryTrajectoryState_Response__FIELD_NAME__position[] = "position";
static char control_msgs__srv__QueryTrajectoryState_Response__FIELD_NAME__velocity[] = "velocity";
static char control_msgs__srv__QueryTrajectoryState_Response__FIELD_NAME__acceleration[] = "acceleration";

static rosidl_runtime_c__type_description__Field control_msgs__srv__QueryTrajectoryState_Response__FIELDS[] = {
  {
    {control_msgs__srv__QueryTrajectoryState_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__srv__QueryTrajectoryState_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__srv__QueryTrajectoryState_Response__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__srv__QueryTrajectoryState_Response__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__srv__QueryTrajectoryState_Response__FIELD_NAME__velocity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__srv__QueryTrajectoryState_Response__FIELD_NAME__acceleration, 12, 12},
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
control_msgs__srv__QueryTrajectoryState_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_msgs__srv__QueryTrajectoryState_Response__TYPE_NAME, 46, 46},
      {control_msgs__srv__QueryTrajectoryState_Response__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char control_msgs__srv__QueryTrajectoryState_Event__FIELD_NAME__info[] = "info";
static char control_msgs__srv__QueryTrajectoryState_Event__FIELD_NAME__request[] = "request";
static char control_msgs__srv__QueryTrajectoryState_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field control_msgs__srv__QueryTrajectoryState_Event__FIELDS[] = {
  {
    {control_msgs__srv__QueryTrajectoryState_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__srv__QueryTrajectoryState_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {control_msgs__srv__QueryTrajectoryState_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__srv__QueryTrajectoryState_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {control_msgs__srv__QueryTrajectoryState_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription control_msgs__srv__QueryTrajectoryState_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {control_msgs__srv__QueryTrajectoryState_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {control_msgs__srv__QueryTrajectoryState_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
control_msgs__srv__QueryTrajectoryState_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_msgs__srv__QueryTrajectoryState_Event__TYPE_NAME, 43, 43},
      {control_msgs__srv__QueryTrajectoryState_Event__FIELDS, 3, 3},
    },
    {control_msgs__srv__QueryTrajectoryState_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = control_msgs__srv__QueryTrajectoryState_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = control_msgs__srv__QueryTrajectoryState_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "builtin_interfaces/Time time\n"
  "---\n"
  "bool success   # indicate successful run of triggered service\n"
  "string message # informational, e.g. for error messages\n"
  "\n"
  "string[] name\n"
  "float64[] position\n"
  "float64[] velocity\n"
  "float64[] acceleration";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
control_msgs__srv__QueryTrajectoryState__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_msgs__srv__QueryTrajectoryState__TYPE_NAME, 37, 37},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 227, 227},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
control_msgs__srv__QueryTrajectoryState_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_msgs__srv__QueryTrajectoryState_Request__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
control_msgs__srv__QueryTrajectoryState_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_msgs__srv__QueryTrajectoryState_Response__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
control_msgs__srv__QueryTrajectoryState_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_msgs__srv__QueryTrajectoryState_Event__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_msgs__srv__QueryTrajectoryState__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_msgs__srv__QueryTrajectoryState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *control_msgs__srv__QueryTrajectoryState_Event__get_individual_type_description_source(NULL);
    sources[3] = *control_msgs__srv__QueryTrajectoryState_Request__get_individual_type_description_source(NULL);
    sources[4] = *control_msgs__srv__QueryTrajectoryState_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_msgs__srv__QueryTrajectoryState_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_msgs__srv__QueryTrajectoryState_Request__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_msgs__srv__QueryTrajectoryState_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_msgs__srv__QueryTrajectoryState_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_msgs__srv__QueryTrajectoryState_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_msgs__srv__QueryTrajectoryState_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *control_msgs__srv__QueryTrajectoryState_Request__get_individual_type_description_source(NULL);
    sources[3] = *control_msgs__srv__QueryTrajectoryState_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
