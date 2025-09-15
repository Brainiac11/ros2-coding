// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from controller_manager_msgs:srv/ListHardwareComponents.idl
// generated code does not contain a copyright notice

#include "controller_manager_msgs/srv/detail/list_hardware_components__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_type_hash_t *
controller_manager_msgs__srv__ListHardwareComponents__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2f, 0xf1, 0x05, 0xe6, 0x09, 0x92, 0x86, 0x71,
      0xaf, 0x16, 0x41, 0x33, 0x62, 0xc0, 0xfd, 0xd0,
      0x89, 0xe1, 0xdd, 0x50, 0xc5, 0xa4, 0x9d, 0x83,
      0x0d, 0xb6, 0x03, 0xba, 0x8e, 0x44, 0x39, 0xc8,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_type_hash_t *
controller_manager_msgs__srv__ListHardwareComponents_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4d, 0x52, 0x8f, 0x3b, 0xba, 0x24, 0x42, 0x5b,
      0x73, 0xc7, 0x88, 0xeb, 0xcb, 0x64, 0x62, 0xbf,
      0x77, 0xd4, 0x0e, 0xb1, 0x94, 0xb7, 0x76, 0x82,
      0x13, 0x8f, 0x07, 0x9f, 0x82, 0x1f, 0xae, 0xab,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_type_hash_t *
controller_manager_msgs__srv__ListHardwareComponents_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x96, 0x07, 0xf3, 0xbd, 0x43, 0xeb, 0xcf, 0xaa,
      0x25, 0xca, 0x4f, 0x50, 0x67, 0x01, 0xfb, 0x26,
      0x97, 0x18, 0x6a, 0x98, 0x63, 0x64, 0xf5, 0x86,
      0x49, 0xb4, 0x31, 0x82, 0xd9, 0xdd, 0x15, 0x56,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_type_hash_t *
controller_manager_msgs__srv__ListHardwareComponents_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x80, 0xe1, 0x68, 0x0b, 0x83, 0x15, 0x37, 0x9c,
      0xa6, 0xea, 0x4e, 0xf2, 0xd9, 0x35, 0x55, 0x78,
      0x7e, 0x28, 0x11, 0x71, 0x12, 0xf9, 0xe3, 0x4a,
      0xb5, 0x42, 0xb0, 0xa0, 0x2e, 0x68, 0x64, 0xf4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "controller_manager_msgs/msg/detail/hardware_interface__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "controller_manager_msgs/msg/detail/hardware_component_state__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "lifecycle_msgs/msg/detail/state__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t controller_manager_msgs__msg__HardwareComponentState__EXPECTED_HASH = {1, {
    0x87, 0x23, 0xf7, 0x6b, 0x60, 0xe3, 0xea, 0x54,
    0x92, 0x00, 0x65, 0xe3, 0xe7, 0x77, 0xd9, 0x3c,
    0x68, 0xb7, 0x6f, 0xc1, 0x28, 0x39, 0xad, 0x6a,
    0x6c, 0xa4, 0xe0, 0xa6, 0x43, 0x9b, 0x38, 0x4c,
  }};
static const rosidl_type_hash_t controller_manager_msgs__msg__HardwareInterface__EXPECTED_HASH = {1, {
    0xb4, 0xc5, 0x56, 0x99, 0x1d, 0xb8, 0x1c, 0xa5,
    0x6a, 0x49, 0x33, 0x8b, 0x5e, 0x8f, 0x06, 0x75,
    0xa6, 0x70, 0x7f, 0xae, 0xe5, 0x4f, 0xba, 0x16,
    0x1d, 0x2b, 0xbd, 0x4d, 0x96, 0x3d, 0x41, 0x8a,
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

static char controller_manager_msgs__srv__ListHardwareComponents__TYPE_NAME[] = "controller_manager_msgs/srv/ListHardwareComponents";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char controller_manager_msgs__msg__HardwareComponentState__TYPE_NAME[] = "controller_manager_msgs/msg/HardwareComponentState";
static char controller_manager_msgs__msg__HardwareInterface__TYPE_NAME[] = "controller_manager_msgs/msg/HardwareInterface";
static char controller_manager_msgs__srv__ListHardwareComponents_Event__TYPE_NAME[] = "controller_manager_msgs/srv/ListHardwareComponents_Event";
static char controller_manager_msgs__srv__ListHardwareComponents_Request__TYPE_NAME[] = "controller_manager_msgs/srv/ListHardwareComponents_Request";
static char controller_manager_msgs__srv__ListHardwareComponents_Response__TYPE_NAME[] = "controller_manager_msgs/srv/ListHardwareComponents_Response";
static char lifecycle_msgs__msg__State__TYPE_NAME[] = "lifecycle_msgs/msg/State";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char controller_manager_msgs__srv__ListHardwareComponents__FIELD_NAME__request_message[] = "request_message";
static char controller_manager_msgs__srv__ListHardwareComponents__FIELD_NAME__response_message[] = "response_message";
static char controller_manager_msgs__srv__ListHardwareComponents__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field controller_manager_msgs__srv__ListHardwareComponents__FIELDS[] = {
  {
    {controller_manager_msgs__srv__ListHardwareComponents__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {controller_manager_msgs__srv__ListHardwareComponents_Request__TYPE_NAME, 58, 58},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ListHardwareComponents__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {controller_manager_msgs__srv__ListHardwareComponents_Response__TYPE_NAME, 59, 59},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ListHardwareComponents__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {controller_manager_msgs__srv__ListHardwareComponents_Event__TYPE_NAME, 56, 56},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription controller_manager_msgs__srv__ListHardwareComponents__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__HardwareComponentState__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__HardwareInterface__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ListHardwareComponents_Event__TYPE_NAME, 56, 56},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ListHardwareComponents_Request__TYPE_NAME, 58, 58},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ListHardwareComponents_Response__TYPE_NAME, 59, 59},
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
controller_manager_msgs__srv__ListHardwareComponents__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {controller_manager_msgs__srv__ListHardwareComponents__TYPE_NAME, 50, 50},
      {controller_manager_msgs__srv__ListHardwareComponents__FIELDS, 3, 3},
    },
    {controller_manager_msgs__srv__ListHardwareComponents__REFERENCED_TYPE_DESCRIPTIONS, 8, 8},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&controller_manager_msgs__msg__HardwareComponentState__EXPECTED_HASH, controller_manager_msgs__msg__HardwareComponentState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = controller_manager_msgs__msg__HardwareComponentState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&controller_manager_msgs__msg__HardwareInterface__EXPECTED_HASH, controller_manager_msgs__msg__HardwareInterface__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = controller_manager_msgs__msg__HardwareInterface__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = controller_manager_msgs__srv__ListHardwareComponents_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = controller_manager_msgs__srv__ListHardwareComponents_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = controller_manager_msgs__srv__ListHardwareComponents_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&lifecycle_msgs__msg__State__EXPECTED_HASH, lifecycle_msgs__msg__State__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = lifecycle_msgs__msg__State__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char controller_manager_msgs__srv__ListHardwareComponents_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field controller_manager_msgs__srv__ListHardwareComponents_Request__FIELDS[] = {
  {
    {controller_manager_msgs__srv__ListHardwareComponents_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
controller_manager_msgs__srv__ListHardwareComponents_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {controller_manager_msgs__srv__ListHardwareComponents_Request__TYPE_NAME, 58, 58},
      {controller_manager_msgs__srv__ListHardwareComponents_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char controller_manager_msgs__srv__ListHardwareComponents_Response__FIELD_NAME__component[] = "component";

static rosidl_runtime_c__type_description__Field controller_manager_msgs__srv__ListHardwareComponents_Response__FIELDS[] = {
  {
    {controller_manager_msgs__srv__ListHardwareComponents_Response__FIELD_NAME__component, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {controller_manager_msgs__msg__HardwareComponentState__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription controller_manager_msgs__srv__ListHardwareComponents_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {controller_manager_msgs__msg__HardwareComponentState__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__HardwareInterface__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {lifecycle_msgs__msg__State__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
controller_manager_msgs__srv__ListHardwareComponents_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {controller_manager_msgs__srv__ListHardwareComponents_Response__TYPE_NAME, 59, 59},
      {controller_manager_msgs__srv__ListHardwareComponents_Response__FIELDS, 1, 1},
    },
    {controller_manager_msgs__srv__ListHardwareComponents_Response__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&controller_manager_msgs__msg__HardwareComponentState__EXPECTED_HASH, controller_manager_msgs__msg__HardwareComponentState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = controller_manager_msgs__msg__HardwareComponentState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&controller_manager_msgs__msg__HardwareInterface__EXPECTED_HASH, controller_manager_msgs__msg__HardwareInterface__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = controller_manager_msgs__msg__HardwareInterface__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&lifecycle_msgs__msg__State__EXPECTED_HASH, lifecycle_msgs__msg__State__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = lifecycle_msgs__msg__State__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char controller_manager_msgs__srv__ListHardwareComponents_Event__FIELD_NAME__info[] = "info";
static char controller_manager_msgs__srv__ListHardwareComponents_Event__FIELD_NAME__request[] = "request";
static char controller_manager_msgs__srv__ListHardwareComponents_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field controller_manager_msgs__srv__ListHardwareComponents_Event__FIELDS[] = {
  {
    {controller_manager_msgs__srv__ListHardwareComponents_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ListHardwareComponents_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {controller_manager_msgs__srv__ListHardwareComponents_Request__TYPE_NAME, 58, 58},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ListHardwareComponents_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {controller_manager_msgs__srv__ListHardwareComponents_Response__TYPE_NAME, 59, 59},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription controller_manager_msgs__srv__ListHardwareComponents_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__HardwareComponentState__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__HardwareInterface__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ListHardwareComponents_Request__TYPE_NAME, 58, 58},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ListHardwareComponents_Response__TYPE_NAME, 59, 59},
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
controller_manager_msgs__srv__ListHardwareComponents_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {controller_manager_msgs__srv__ListHardwareComponents_Event__TYPE_NAME, 56, 56},
      {controller_manager_msgs__srv__ListHardwareComponents_Event__FIELDS, 3, 3},
    },
    {controller_manager_msgs__srv__ListHardwareComponents_Event__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&controller_manager_msgs__msg__HardwareComponentState__EXPECTED_HASH, controller_manager_msgs__msg__HardwareComponentState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = controller_manager_msgs__msg__HardwareComponentState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&controller_manager_msgs__msg__HardwareInterface__EXPECTED_HASH, controller_manager_msgs__msg__HardwareInterface__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = controller_manager_msgs__msg__HardwareInterface__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = controller_manager_msgs__srv__ListHardwareComponents_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = controller_manager_msgs__srv__ListHardwareComponents_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&lifecycle_msgs__msg__State__EXPECTED_HASH, lifecycle_msgs__msg__State__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = lifecycle_msgs__msg__State__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# The ListHardwareComponents service returns a list of hardware HardwareComponentsState.\n"
  "# This will convey name, component_type, state and type of the components\n"
  "# that are loaded inside the resource_manager.\n"
  "\n"
  "---\n"
  "HardwareComponentState[] component";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
controller_manager_msgs__srv__ListHardwareComponents__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {controller_manager_msgs__srv__ListHardwareComponents__TYPE_NAME, 50, 50},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 250, 250},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
controller_manager_msgs__srv__ListHardwareComponents_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {controller_manager_msgs__srv__ListHardwareComponents_Request__TYPE_NAME, 58, 58},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
controller_manager_msgs__srv__ListHardwareComponents_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {controller_manager_msgs__srv__ListHardwareComponents_Response__TYPE_NAME, 59, 59},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
controller_manager_msgs__srv__ListHardwareComponents_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {controller_manager_msgs__srv__ListHardwareComponents_Event__TYPE_NAME, 56, 56},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
controller_manager_msgs__srv__ListHardwareComponents__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[9];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 9, 9};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *controller_manager_msgs__srv__ListHardwareComponents__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *controller_manager_msgs__msg__HardwareComponentState__get_individual_type_description_source(NULL);
    sources[3] = *controller_manager_msgs__msg__HardwareInterface__get_individual_type_description_source(NULL);
    sources[4] = *controller_manager_msgs__srv__ListHardwareComponents_Event__get_individual_type_description_source(NULL);
    sources[5] = *controller_manager_msgs__srv__ListHardwareComponents_Request__get_individual_type_description_source(NULL);
    sources[6] = *controller_manager_msgs__srv__ListHardwareComponents_Response__get_individual_type_description_source(NULL);
    sources[7] = *lifecycle_msgs__msg__State__get_individual_type_description_source(NULL);
    sources[8] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
controller_manager_msgs__srv__ListHardwareComponents_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *controller_manager_msgs__srv__ListHardwareComponents_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
controller_manager_msgs__srv__ListHardwareComponents_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *controller_manager_msgs__srv__ListHardwareComponents_Response__get_individual_type_description_source(NULL),
    sources[1] = *controller_manager_msgs__msg__HardwareComponentState__get_individual_type_description_source(NULL);
    sources[2] = *controller_manager_msgs__msg__HardwareInterface__get_individual_type_description_source(NULL);
    sources[3] = *lifecycle_msgs__msg__State__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
controller_manager_msgs__srv__ListHardwareComponents_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *controller_manager_msgs__srv__ListHardwareComponents_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *controller_manager_msgs__msg__HardwareComponentState__get_individual_type_description_source(NULL);
    sources[3] = *controller_manager_msgs__msg__HardwareInterface__get_individual_type_description_source(NULL);
    sources[4] = *controller_manager_msgs__srv__ListHardwareComponents_Request__get_individual_type_description_source(NULL);
    sources[5] = *controller_manager_msgs__srv__ListHardwareComponents_Response__get_individual_type_description_source(NULL);
    sources[6] = *lifecycle_msgs__msg__State__get_individual_type_description_source(NULL);
    sources[7] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
