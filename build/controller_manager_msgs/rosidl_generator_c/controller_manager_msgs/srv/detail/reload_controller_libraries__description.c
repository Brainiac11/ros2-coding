// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from controller_manager_msgs:srv/ReloadControllerLibraries.idl
// generated code does not contain a copyright notice

#include "controller_manager_msgs/srv/detail/reload_controller_libraries__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_type_hash_t *
controller_manager_msgs__srv__ReloadControllerLibraries__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x48, 0x5c, 0xd0, 0x04, 0x0f, 0x8a, 0x34, 0x3a,
      0x95, 0x96, 0x15, 0x5b, 0x96, 0x73, 0x63, 0xe1,
      0xbc, 0x71, 0x5f, 0x03, 0x4b, 0xbb, 0x11, 0x1f,
      0x79, 0x5c, 0x73, 0xd9, 0xd8, 0x05, 0x6a, 0x9b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_type_hash_t *
controller_manager_msgs__srv__ReloadControllerLibraries_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc5, 0xae, 0x88, 0x13, 0xad, 0xda, 0x2a, 0xed,
      0x0e, 0x5e, 0x55, 0x58, 0x03, 0x1e, 0x6f, 0x4c,
      0x78, 0x34, 0xb9, 0x41, 0xaa, 0x87, 0x17, 0x46,
      0xe8, 0x6a, 0xdc, 0x1c, 0xb7, 0x45, 0xcd, 0xa8,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_type_hash_t *
controller_manager_msgs__srv__ReloadControllerLibraries_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbe, 0xa6, 0x9b, 0xb8, 0x0e, 0xbb, 0xb4, 0xa0,
      0x00, 0x23, 0x75, 0x8c, 0x51, 0xfd, 0x0e, 0x3e,
      0xaf, 0x30, 0x8c, 0x1a, 0xe6, 0x64, 0x0f, 0xdf,
      0x4b, 0xba, 0xd6, 0x79, 0x3b, 0xb9, 0x67, 0xd4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_type_hash_t *
controller_manager_msgs__srv__ReloadControllerLibraries_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xac, 0xd2, 0xb4, 0x39, 0xf4, 0x27, 0x6f, 0xc0,
      0x02, 0x21, 0x8c, 0xcc, 0x57, 0xca, 0xb0, 0x80,
      0xed, 0xaf, 0x9d, 0xb9, 0xc5, 0xd3, 0xce, 0xcc,
      0xfc, 0xa6, 0xa7, 0x31, 0x82, 0xe1, 0x19, 0xe9,
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

static char controller_manager_msgs__srv__ReloadControllerLibraries__TYPE_NAME[] = "controller_manager_msgs/srv/ReloadControllerLibraries";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char controller_manager_msgs__srv__ReloadControllerLibraries_Event__TYPE_NAME[] = "controller_manager_msgs/srv/ReloadControllerLibraries_Event";
static char controller_manager_msgs__srv__ReloadControllerLibraries_Request__TYPE_NAME[] = "controller_manager_msgs/srv/ReloadControllerLibraries_Request";
static char controller_manager_msgs__srv__ReloadControllerLibraries_Response__TYPE_NAME[] = "controller_manager_msgs/srv/ReloadControllerLibraries_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char controller_manager_msgs__srv__ReloadControllerLibraries__FIELD_NAME__request_message[] = "request_message";
static char controller_manager_msgs__srv__ReloadControllerLibraries__FIELD_NAME__response_message[] = "response_message";
static char controller_manager_msgs__srv__ReloadControllerLibraries__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field controller_manager_msgs__srv__ReloadControllerLibraries__FIELDS[] = {
  {
    {controller_manager_msgs__srv__ReloadControllerLibraries__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {controller_manager_msgs__srv__ReloadControllerLibraries_Request__TYPE_NAME, 61, 61},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ReloadControllerLibraries__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {controller_manager_msgs__srv__ReloadControllerLibraries_Response__TYPE_NAME, 62, 62},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ReloadControllerLibraries__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {controller_manager_msgs__srv__ReloadControllerLibraries_Event__TYPE_NAME, 59, 59},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription controller_manager_msgs__srv__ReloadControllerLibraries__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ReloadControllerLibraries_Event__TYPE_NAME, 59, 59},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ReloadControllerLibraries_Request__TYPE_NAME, 61, 61},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ReloadControllerLibraries_Response__TYPE_NAME, 62, 62},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
controller_manager_msgs__srv__ReloadControllerLibraries__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {controller_manager_msgs__srv__ReloadControllerLibraries__TYPE_NAME, 53, 53},
      {controller_manager_msgs__srv__ReloadControllerLibraries__FIELDS, 3, 3},
    },
    {controller_manager_msgs__srv__ReloadControllerLibraries__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = controller_manager_msgs__srv__ReloadControllerLibraries_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = controller_manager_msgs__srv__ReloadControllerLibraries_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = controller_manager_msgs__srv__ReloadControllerLibraries_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char controller_manager_msgs__srv__ReloadControllerLibraries_Request__FIELD_NAME__force_kill[] = "force_kill";

static rosidl_runtime_c__type_description__Field controller_manager_msgs__srv__ReloadControllerLibraries_Request__FIELDS[] = {
  {
    {controller_manager_msgs__srv__ReloadControllerLibraries_Request__FIELD_NAME__force_kill, 10, 10},
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
controller_manager_msgs__srv__ReloadControllerLibraries_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {controller_manager_msgs__srv__ReloadControllerLibraries_Request__TYPE_NAME, 61, 61},
      {controller_manager_msgs__srv__ReloadControllerLibraries_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char controller_manager_msgs__srv__ReloadControllerLibraries_Response__FIELD_NAME__ok[] = "ok";

static rosidl_runtime_c__type_description__Field controller_manager_msgs__srv__ReloadControllerLibraries_Response__FIELDS[] = {
  {
    {controller_manager_msgs__srv__ReloadControllerLibraries_Response__FIELD_NAME__ok, 2, 2},
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
controller_manager_msgs__srv__ReloadControllerLibraries_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {controller_manager_msgs__srv__ReloadControllerLibraries_Response__TYPE_NAME, 62, 62},
      {controller_manager_msgs__srv__ReloadControllerLibraries_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char controller_manager_msgs__srv__ReloadControllerLibraries_Event__FIELD_NAME__info[] = "info";
static char controller_manager_msgs__srv__ReloadControllerLibraries_Event__FIELD_NAME__request[] = "request";
static char controller_manager_msgs__srv__ReloadControllerLibraries_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field controller_manager_msgs__srv__ReloadControllerLibraries_Event__FIELDS[] = {
  {
    {controller_manager_msgs__srv__ReloadControllerLibraries_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ReloadControllerLibraries_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {controller_manager_msgs__srv__ReloadControllerLibraries_Request__TYPE_NAME, 61, 61},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ReloadControllerLibraries_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {controller_manager_msgs__srv__ReloadControllerLibraries_Response__TYPE_NAME, 62, 62},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription controller_manager_msgs__srv__ReloadControllerLibraries_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ReloadControllerLibraries_Request__TYPE_NAME, 61, 61},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ReloadControllerLibraries_Response__TYPE_NAME, 62, 62},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
controller_manager_msgs__srv__ReloadControllerLibraries_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {controller_manager_msgs__srv__ReloadControllerLibraries_Event__TYPE_NAME, 59, 59},
      {controller_manager_msgs__srv__ReloadControllerLibraries_Event__FIELDS, 3, 3},
    },
    {controller_manager_msgs__srv__ReloadControllerLibraries_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = controller_manager_msgs__srv__ReloadControllerLibraries_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = controller_manager_msgs__srv__ReloadControllerLibraries_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# The ReloadControllerLibraries service will reload all controllers that are available in\n"
  "# the system as plugins\n"
  "\n"
  "# Reloading libraries only works if there are no controllers loaded. If there\n"
  "# are still some controllers loaded, the reloading will fail.\n"
  "# If this bool is set to true, all loaded controllers will get\n"
  "# killed automatically, and the reloading can succeed.\n"
  "bool force_kill\n"
  "---\n"
  "bool ok";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
controller_manager_msgs__srv__ReloadControllerLibraries__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {controller_manager_msgs__srv__ReloadControllerLibraries__TYPE_NAME, 53, 53},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 401, 401},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
controller_manager_msgs__srv__ReloadControllerLibraries_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {controller_manager_msgs__srv__ReloadControllerLibraries_Request__TYPE_NAME, 61, 61},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
controller_manager_msgs__srv__ReloadControllerLibraries_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {controller_manager_msgs__srv__ReloadControllerLibraries_Response__TYPE_NAME, 62, 62},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
controller_manager_msgs__srv__ReloadControllerLibraries_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {controller_manager_msgs__srv__ReloadControllerLibraries_Event__TYPE_NAME, 59, 59},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
controller_manager_msgs__srv__ReloadControllerLibraries__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *controller_manager_msgs__srv__ReloadControllerLibraries__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *controller_manager_msgs__srv__ReloadControllerLibraries_Event__get_individual_type_description_source(NULL);
    sources[3] = *controller_manager_msgs__srv__ReloadControllerLibraries_Request__get_individual_type_description_source(NULL);
    sources[4] = *controller_manager_msgs__srv__ReloadControllerLibraries_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
controller_manager_msgs__srv__ReloadControllerLibraries_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *controller_manager_msgs__srv__ReloadControllerLibraries_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
controller_manager_msgs__srv__ReloadControllerLibraries_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *controller_manager_msgs__srv__ReloadControllerLibraries_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
controller_manager_msgs__srv__ReloadControllerLibraries_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *controller_manager_msgs__srv__ReloadControllerLibraries_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *controller_manager_msgs__srv__ReloadControllerLibraries_Request__get_individual_type_description_source(NULL);
    sources[3] = *controller_manager_msgs__srv__ReloadControllerLibraries_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
