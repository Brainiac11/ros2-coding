// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from controller_manager_msgs:srv/UnloadController.idl
// generated code does not contain a copyright notice

#include "controller_manager_msgs/srv/detail/unload_controller__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_type_hash_t *
controller_manager_msgs__srv__UnloadController__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x40, 0x55, 0x72, 0x8e, 0x84, 0xc0, 0x41, 0x34,
      0x86, 0x48, 0xd7, 0xf8, 0x08, 0xc6, 0x68, 0x15,
      0x62, 0x00, 0x0e, 0x3a, 0x9c, 0xe9, 0xfb, 0xb4,
      0x2c, 0x33, 0x50, 0xdf, 0x25, 0x77, 0x3f, 0x16,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_type_hash_t *
controller_manager_msgs__srv__UnloadController_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x90, 0xf1, 0x4a, 0x0b, 0x40, 0x27, 0x91, 0x21,
      0x09, 0x88, 0xf4, 0x93, 0x1b, 0xe4, 0x6a, 0x62,
      0xed, 0xc7, 0xf6, 0xc9, 0x0d, 0x05, 0x51, 0xc5,
      0x4c, 0x9a, 0x7c, 0xbc, 0xe1, 0xb5, 0x6e, 0xa1,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_type_hash_t *
controller_manager_msgs__srv__UnloadController_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x46, 0x36, 0x09, 0x9a, 0x7e, 0xaa, 0x6a, 0x9f,
      0x3b, 0x29, 0x95, 0x04, 0x87, 0x8d, 0x58, 0xd5,
      0x80, 0x12, 0x3f, 0x73, 0x8e, 0x23, 0x5c, 0x9d,
      0xf7, 0xbc, 0x46, 0xef, 0x7b, 0x8f, 0x34, 0x61,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_type_hash_t *
controller_manager_msgs__srv__UnloadController_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x36, 0x59, 0x4c, 0x04, 0x7d, 0xd2, 0x2e, 0x32,
      0x6e, 0xe4, 0x71, 0x7f, 0x80, 0xdf, 0x62, 0xae,
      0x5d, 0xb0, 0x45, 0x21, 0x69, 0xb8, 0x4c, 0xf5,
      0xb9, 0x5d, 0x52, 0xba, 0x2b, 0x4d, 0xfb, 0xbb,
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

static char controller_manager_msgs__srv__UnloadController__TYPE_NAME[] = "controller_manager_msgs/srv/UnloadController";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char controller_manager_msgs__srv__UnloadController_Event__TYPE_NAME[] = "controller_manager_msgs/srv/UnloadController_Event";
static char controller_manager_msgs__srv__UnloadController_Request__TYPE_NAME[] = "controller_manager_msgs/srv/UnloadController_Request";
static char controller_manager_msgs__srv__UnloadController_Response__TYPE_NAME[] = "controller_manager_msgs/srv/UnloadController_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char controller_manager_msgs__srv__UnloadController__FIELD_NAME__request_message[] = "request_message";
static char controller_manager_msgs__srv__UnloadController__FIELD_NAME__response_message[] = "response_message";
static char controller_manager_msgs__srv__UnloadController__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field controller_manager_msgs__srv__UnloadController__FIELDS[] = {
  {
    {controller_manager_msgs__srv__UnloadController__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {controller_manager_msgs__srv__UnloadController_Request__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__UnloadController__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {controller_manager_msgs__srv__UnloadController_Response__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__UnloadController__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {controller_manager_msgs__srv__UnloadController_Event__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription controller_manager_msgs__srv__UnloadController__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__UnloadController_Event__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__UnloadController_Request__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__UnloadController_Response__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
controller_manager_msgs__srv__UnloadController__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {controller_manager_msgs__srv__UnloadController__TYPE_NAME, 44, 44},
      {controller_manager_msgs__srv__UnloadController__FIELDS, 3, 3},
    },
    {controller_manager_msgs__srv__UnloadController__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = controller_manager_msgs__srv__UnloadController_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = controller_manager_msgs__srv__UnloadController_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = controller_manager_msgs__srv__UnloadController_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char controller_manager_msgs__srv__UnloadController_Request__FIELD_NAME__name[] = "name";

static rosidl_runtime_c__type_description__Field controller_manager_msgs__srv__UnloadController_Request__FIELDS[] = {
  {
    {controller_manager_msgs__srv__UnloadController_Request__FIELD_NAME__name, 4, 4},
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
controller_manager_msgs__srv__UnloadController_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {controller_manager_msgs__srv__UnloadController_Request__TYPE_NAME, 52, 52},
      {controller_manager_msgs__srv__UnloadController_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char controller_manager_msgs__srv__UnloadController_Response__FIELD_NAME__ok[] = "ok";

static rosidl_runtime_c__type_description__Field controller_manager_msgs__srv__UnloadController_Response__FIELDS[] = {
  {
    {controller_manager_msgs__srv__UnloadController_Response__FIELD_NAME__ok, 2, 2},
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
controller_manager_msgs__srv__UnloadController_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {controller_manager_msgs__srv__UnloadController_Response__TYPE_NAME, 53, 53},
      {controller_manager_msgs__srv__UnloadController_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char controller_manager_msgs__srv__UnloadController_Event__FIELD_NAME__info[] = "info";
static char controller_manager_msgs__srv__UnloadController_Event__FIELD_NAME__request[] = "request";
static char controller_manager_msgs__srv__UnloadController_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field controller_manager_msgs__srv__UnloadController_Event__FIELDS[] = {
  {
    {controller_manager_msgs__srv__UnloadController_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__UnloadController_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {controller_manager_msgs__srv__UnloadController_Request__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__UnloadController_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {controller_manager_msgs__srv__UnloadController_Response__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription controller_manager_msgs__srv__UnloadController_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__UnloadController_Request__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__UnloadController_Response__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
controller_manager_msgs__srv__UnloadController_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {controller_manager_msgs__srv__UnloadController_Event__TYPE_NAME, 50, 50},
      {controller_manager_msgs__srv__UnloadController_Event__FIELDS, 3, 3},
    },
    {controller_manager_msgs__srv__UnloadController_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = controller_manager_msgs__srv__UnloadController_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = controller_manager_msgs__srv__UnloadController_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# The UnloadController service allows you to unload a single controller\n"
  "# from controller_manager\n"
  "\n"
  "# To unload a controller, specify the \"name\" of the controller.\n"
  "# The return value \"ok\" indicates if the controller was successfully\n"
  "# unloaded or not\n"
  "\n"
  "string name\n"
  "---\n"
  "bool ok";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
controller_manager_msgs__srv__UnloadController__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {controller_manager_msgs__srv__UnloadController__TYPE_NAME, 44, 44},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 275, 275},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
controller_manager_msgs__srv__UnloadController_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {controller_manager_msgs__srv__UnloadController_Request__TYPE_NAME, 52, 52},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
controller_manager_msgs__srv__UnloadController_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {controller_manager_msgs__srv__UnloadController_Response__TYPE_NAME, 53, 53},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
controller_manager_msgs__srv__UnloadController_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {controller_manager_msgs__srv__UnloadController_Event__TYPE_NAME, 50, 50},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
controller_manager_msgs__srv__UnloadController__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *controller_manager_msgs__srv__UnloadController__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *controller_manager_msgs__srv__UnloadController_Event__get_individual_type_description_source(NULL);
    sources[3] = *controller_manager_msgs__srv__UnloadController_Request__get_individual_type_description_source(NULL);
    sources[4] = *controller_manager_msgs__srv__UnloadController_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
controller_manager_msgs__srv__UnloadController_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *controller_manager_msgs__srv__UnloadController_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
controller_manager_msgs__srv__UnloadController_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *controller_manager_msgs__srv__UnloadController_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
controller_manager_msgs__srv__UnloadController_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *controller_manager_msgs__srv__UnloadController_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *controller_manager_msgs__srv__UnloadController_Request__get_individual_type_description_source(NULL);
    sources[3] = *controller_manager_msgs__srv__UnloadController_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
