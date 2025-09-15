// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from controller_manager_msgs:srv/SetHardwareComponentState.idl
// generated code does not contain a copyright notice

#include "controller_manager_msgs/srv/detail/set_hardware_component_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_type_hash_t *
controller_manager_msgs__srv__SetHardwareComponentState__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x94, 0x0b, 0x15, 0x84, 0x6e, 0xd3, 0xe1, 0xfb,
      0x56, 0x1a, 0xb4, 0x5e, 0xdf, 0x77, 0xa9, 0x92,
      0xb8, 0x11, 0xfd, 0x59, 0xc5, 0x74, 0xf4, 0x5d,
      0x52, 0x05, 0xa8, 0x4a, 0x0d, 0xeb, 0x2f, 0x65,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_type_hash_t *
controller_manager_msgs__srv__SetHardwareComponentState_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x22, 0xc9, 0xb3, 0xe3, 0x2a, 0x02, 0x22, 0x1d,
      0x41, 0x1a, 0x47, 0xda, 0xb1, 0xfd, 0xa9, 0x21,
      0x00, 0x3a, 0x96, 0xac, 0x41, 0xe8, 0xde, 0x7d,
      0x4d, 0x80, 0x5e, 0x2c, 0xfd, 0x0d, 0xe2, 0x1d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_type_hash_t *
controller_manager_msgs__srv__SetHardwareComponentState_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc2, 0x30, 0xaa, 0x24, 0x4d, 0xd9, 0x7d, 0x76,
      0x1e, 0x27, 0xcc, 0xde, 0x7b, 0x50, 0x56, 0xec,
      0x4e, 0x28, 0xe0, 0xbb, 0x80, 0x4d, 0xa2, 0x83,
      0xe4, 0x2c, 0xd3, 0x79, 0x44, 0xc4, 0x65, 0x92,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_type_hash_t *
controller_manager_msgs__srv__SetHardwareComponentState_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9a, 0x0b, 0xea, 0xbf, 0x9d, 0x13, 0xde, 0x74,
      0x3c, 0xee, 0xef, 0xca, 0x31, 0x34, 0xa9, 0x4f,
      0xb3, 0xbf, 0x11, 0x63, 0xe3, 0x89, 0x34, 0xa3,
      0x6e, 0x56, 0x58, 0xbd, 0x6f, 0xc3, 0x0e, 0xd7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "lifecycle_msgs/msg/detail/state__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t lifecycle_msgs__msg__State__EXPECTED_HASH = {1, {
    0xdd, 0x2d, 0x02, 0xb8, 0x2f, 0x3e, 0xbc, 0x85,
    0x8e, 0x53, 0xc4, 0x31, 0xb1, 0xe6, 0xe9, 0x1f,
    0x3f, 0xfc, 0x71, 0x43, 0x6f, 0xc8, 0x1d, 0x07,
    0x15, 0x21, 0x4a, 0xc6, 0xee, 0x21, 0x07, 0xa0,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char controller_manager_msgs__srv__SetHardwareComponentState__TYPE_NAME[] = "controller_manager_msgs/srv/SetHardwareComponentState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char controller_manager_msgs__srv__SetHardwareComponentState_Event__TYPE_NAME[] = "controller_manager_msgs/srv/SetHardwareComponentState_Event";
static char controller_manager_msgs__srv__SetHardwareComponentState_Request__TYPE_NAME[] = "controller_manager_msgs/srv/SetHardwareComponentState_Request";
static char controller_manager_msgs__srv__SetHardwareComponentState_Response__TYPE_NAME[] = "controller_manager_msgs/srv/SetHardwareComponentState_Response";
static char lifecycle_msgs__msg__State__TYPE_NAME[] = "lifecycle_msgs/msg/State";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char controller_manager_msgs__srv__SetHardwareComponentState__FIELD_NAME__request_message[] = "request_message";
static char controller_manager_msgs__srv__SetHardwareComponentState__FIELD_NAME__response_message[] = "response_message";
static char controller_manager_msgs__srv__SetHardwareComponentState__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field controller_manager_msgs__srv__SetHardwareComponentState__FIELDS[] = {
  {
    {controller_manager_msgs__srv__SetHardwareComponentState__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {controller_manager_msgs__srv__SetHardwareComponentState_Request__TYPE_NAME, 61, 61},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__SetHardwareComponentState__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {controller_manager_msgs__srv__SetHardwareComponentState_Response__TYPE_NAME, 62, 62},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__SetHardwareComponentState__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {controller_manager_msgs__srv__SetHardwareComponentState_Event__TYPE_NAME, 59, 59},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription controller_manager_msgs__srv__SetHardwareComponentState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__SetHardwareComponentState_Event__TYPE_NAME, 59, 59},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__SetHardwareComponentState_Request__TYPE_NAME, 61, 61},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__SetHardwareComponentState_Response__TYPE_NAME, 62, 62},
    {NULL, 0, 0},
  },
  {
    {lifecycle_msgs__msg__State__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
controller_manager_msgs__srv__SetHardwareComponentState__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {controller_manager_msgs__srv__SetHardwareComponentState__TYPE_NAME, 53, 53},
      {controller_manager_msgs__srv__SetHardwareComponentState__FIELDS, 3, 3},
    },
    {controller_manager_msgs__srv__SetHardwareComponentState__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = controller_manager_msgs__srv__SetHardwareComponentState_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = controller_manager_msgs__srv__SetHardwareComponentState_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = controller_manager_msgs__srv__SetHardwareComponentState_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&lifecycle_msgs__msg__State__EXPECTED_HASH, lifecycle_msgs__msg__State__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = lifecycle_msgs__msg__State__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char controller_manager_msgs__srv__SetHardwareComponentState_Request__FIELD_NAME__name[] = "name";
static char controller_manager_msgs__srv__SetHardwareComponentState_Request__FIELD_NAME__target_state[] = "target_state";

static rosidl_runtime_c__type_description__Field controller_manager_msgs__srv__SetHardwareComponentState_Request__FIELDS[] = {
  {
    {controller_manager_msgs__srv__SetHardwareComponentState_Request__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__SetHardwareComponentState_Request__FIELD_NAME__target_state, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {lifecycle_msgs__msg__State__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription controller_manager_msgs__srv__SetHardwareComponentState_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {lifecycle_msgs__msg__State__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
controller_manager_msgs__srv__SetHardwareComponentState_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {controller_manager_msgs__srv__SetHardwareComponentState_Request__TYPE_NAME, 61, 61},
      {controller_manager_msgs__srv__SetHardwareComponentState_Request__FIELDS, 2, 2},
    },
    {controller_manager_msgs__srv__SetHardwareComponentState_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&lifecycle_msgs__msg__State__EXPECTED_HASH, lifecycle_msgs__msg__State__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = lifecycle_msgs__msg__State__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char controller_manager_msgs__srv__SetHardwareComponentState_Response__FIELD_NAME__ok[] = "ok";
static char controller_manager_msgs__srv__SetHardwareComponentState_Response__FIELD_NAME__state[] = "state";

static rosidl_runtime_c__type_description__Field controller_manager_msgs__srv__SetHardwareComponentState_Response__FIELDS[] = {
  {
    {controller_manager_msgs__srv__SetHardwareComponentState_Response__FIELD_NAME__ok, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__SetHardwareComponentState_Response__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {lifecycle_msgs__msg__State__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription controller_manager_msgs__srv__SetHardwareComponentState_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {lifecycle_msgs__msg__State__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
controller_manager_msgs__srv__SetHardwareComponentState_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {controller_manager_msgs__srv__SetHardwareComponentState_Response__TYPE_NAME, 62, 62},
      {controller_manager_msgs__srv__SetHardwareComponentState_Response__FIELDS, 2, 2},
    },
    {controller_manager_msgs__srv__SetHardwareComponentState_Response__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&lifecycle_msgs__msg__State__EXPECTED_HASH, lifecycle_msgs__msg__State__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = lifecycle_msgs__msg__State__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char controller_manager_msgs__srv__SetHardwareComponentState_Event__FIELD_NAME__info[] = "info";
static char controller_manager_msgs__srv__SetHardwareComponentState_Event__FIELD_NAME__request[] = "request";
static char controller_manager_msgs__srv__SetHardwareComponentState_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field controller_manager_msgs__srv__SetHardwareComponentState_Event__FIELDS[] = {
  {
    {controller_manager_msgs__srv__SetHardwareComponentState_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__SetHardwareComponentState_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {controller_manager_msgs__srv__SetHardwareComponentState_Request__TYPE_NAME, 61, 61},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__SetHardwareComponentState_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {controller_manager_msgs__srv__SetHardwareComponentState_Response__TYPE_NAME, 62, 62},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription controller_manager_msgs__srv__SetHardwareComponentState_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__SetHardwareComponentState_Request__TYPE_NAME, 61, 61},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__SetHardwareComponentState_Response__TYPE_NAME, 62, 62},
    {NULL, 0, 0},
  },
  {
    {lifecycle_msgs__msg__State__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
controller_manager_msgs__srv__SetHardwareComponentState_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {controller_manager_msgs__srv__SetHardwareComponentState_Event__TYPE_NAME, 59, 59},
      {controller_manager_msgs__srv__SetHardwareComponentState_Event__FIELDS, 3, 3},
    },
    {controller_manager_msgs__srv__SetHardwareComponentState_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = controller_manager_msgs__srv__SetHardwareComponentState_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = controller_manager_msgs__srv__SetHardwareComponentState_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&lifecycle_msgs__msg__State__EXPECTED_HASH, lifecycle_msgs__msg__State__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = lifecycle_msgs__msg__State__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# The SetHardwareComponentState service allows to control life-cycle of a single hardware component.\n"
  "# Supported states are defined in the design document of LifecycleNodes available at:\n"
  "# https://design.ros2.org/articles/node_lifecycle.html\n"
  "# To control life-cycle of a hardware component, specify its \"name\" and \"target_state\".\n"
  "# Target state may be defined by \"id\" using a constant from `lifecycle_msgs/msg/State` or a label\n"
  "# using definitions from `hardware_interface/types/lifecycle_state_names.hpp` file.\n"
  "# The return value \"ok\" indicates if the component has successfully changed its state to \"target_state\".\n"
  "# The return value \"state\" returns current state of the hardware component.\n"
  "\n"
  "string name\n"
  "lifecycle_msgs/State target_state\n"
  "---\n"
  "bool ok\n"
  "lifecycle_msgs/State state";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
controller_manager_msgs__srv__SetHardwareComponentState__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {controller_manager_msgs__srv__SetHardwareComponentState__TYPE_NAME, 53, 53},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 779, 779},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
controller_manager_msgs__srv__SetHardwareComponentState_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {controller_manager_msgs__srv__SetHardwareComponentState_Request__TYPE_NAME, 61, 61},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
controller_manager_msgs__srv__SetHardwareComponentState_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {controller_manager_msgs__srv__SetHardwareComponentState_Response__TYPE_NAME, 62, 62},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
controller_manager_msgs__srv__SetHardwareComponentState_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {controller_manager_msgs__srv__SetHardwareComponentState_Event__TYPE_NAME, 59, 59},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
controller_manager_msgs__srv__SetHardwareComponentState__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *controller_manager_msgs__srv__SetHardwareComponentState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *controller_manager_msgs__srv__SetHardwareComponentState_Event__get_individual_type_description_source(NULL);
    sources[3] = *controller_manager_msgs__srv__SetHardwareComponentState_Request__get_individual_type_description_source(NULL);
    sources[4] = *controller_manager_msgs__srv__SetHardwareComponentState_Response__get_individual_type_description_source(NULL);
    sources[5] = *lifecycle_msgs__msg__State__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
controller_manager_msgs__srv__SetHardwareComponentState_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *controller_manager_msgs__srv__SetHardwareComponentState_Request__get_individual_type_description_source(NULL),
    sources[1] = *lifecycle_msgs__msg__State__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
controller_manager_msgs__srv__SetHardwareComponentState_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *controller_manager_msgs__srv__SetHardwareComponentState_Response__get_individual_type_description_source(NULL),
    sources[1] = *lifecycle_msgs__msg__State__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
controller_manager_msgs__srv__SetHardwareComponentState_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *controller_manager_msgs__srv__SetHardwareComponentState_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *controller_manager_msgs__srv__SetHardwareComponentState_Request__get_individual_type_description_source(NULL);
    sources[3] = *controller_manager_msgs__srv__SetHardwareComponentState_Response__get_individual_type_description_source(NULL);
    sources[4] = *lifecycle_msgs__msg__State__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
