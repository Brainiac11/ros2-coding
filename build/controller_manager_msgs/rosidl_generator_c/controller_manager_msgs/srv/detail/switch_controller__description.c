// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from controller_manager_msgs:srv/SwitchController.idl
// generated code does not contain a copyright notice

#include "controller_manager_msgs/srv/detail/switch_controller__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_type_hash_t *
controller_manager_msgs__srv__SwitchController__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd4, 0xad, 0x10, 0xaa, 0x5d, 0xa7, 0x80, 0x8b,
      0xc5, 0x22, 0xd5, 0x5d, 0x41, 0x23, 0xd8, 0xef,
      0x79, 0xde, 0x73, 0xd0, 0x49, 0xd1, 0x65, 0x63,
      0x9d, 0x76, 0x63, 0xac, 0x37, 0xcc, 0x98, 0x95,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_type_hash_t *
controller_manager_msgs__srv__SwitchController_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd2, 0x58, 0xd3, 0x5c, 0x1c, 0xe6, 0xd7, 0x46,
      0x9e, 0x01, 0x55, 0x90, 0x02, 0x02, 0x51, 0x9b,
      0xe2, 0x1f, 0x82, 0xc2, 0x64, 0x13, 0x93, 0x54,
      0x0b, 0xab, 0xd7, 0x28, 0xa0, 0x9c, 0xfa, 0x50,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_type_hash_t *
controller_manager_msgs__srv__SwitchController_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb7, 0xe9, 0x0d, 0x1a, 0x67, 0xa2, 0xe4, 0xe3,
      0xda, 0x70, 0x64, 0xff, 0xb3, 0x28, 0xcf, 0xe3,
      0x11, 0x11, 0x47, 0xa1, 0xa5, 0x5c, 0xaf, 0xaa,
      0xfd, 0x73, 0xb1, 0xd6, 0x66, 0x81, 0xa2, 0x51,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_type_hash_t *
controller_manager_msgs__srv__SwitchController_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4b, 0x68, 0x95, 0xb5, 0xe9, 0x83, 0xda, 0xaa,
      0x9f, 0x3f, 0xc5, 0xad, 0xbf, 0x26, 0xb4, 0x2a,
      0x4d, 0x07, 0x80, 0xec, 0xe9, 0x41, 0xac, 0x4c,
      0xa5, 0x86, 0x4c, 0x33, 0x06, 0x3c, 0xc9, 0x9d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/duration__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Duration__EXPECTED_HASH = {1, {
    0xe8, 0xd0, 0x09, 0xf6, 0x59, 0x81, 0x6f, 0x75,
    0x8b, 0x75, 0x33, 0x4e, 0xe1, 0xa9, 0xca, 0x5b,
    0x5c, 0x0b, 0x85, 0x98, 0x43, 0x26, 0x1f, 0x14,
    0xc7, 0xf9, 0x37, 0x34, 0x95, 0x99, 0xd9, 0x3b,
  }};
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

static char controller_manager_msgs__srv__SwitchController__TYPE_NAME[] = "controller_manager_msgs/srv/SwitchController";
static char builtin_interfaces__msg__Duration__TYPE_NAME[] = "builtin_interfaces/msg/Duration";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char controller_manager_msgs__srv__SwitchController_Event__TYPE_NAME[] = "controller_manager_msgs/srv/SwitchController_Event";
static char controller_manager_msgs__srv__SwitchController_Request__TYPE_NAME[] = "controller_manager_msgs/srv/SwitchController_Request";
static char controller_manager_msgs__srv__SwitchController_Response__TYPE_NAME[] = "controller_manager_msgs/srv/SwitchController_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char controller_manager_msgs__srv__SwitchController__FIELD_NAME__request_message[] = "request_message";
static char controller_manager_msgs__srv__SwitchController__FIELD_NAME__response_message[] = "response_message";
static char controller_manager_msgs__srv__SwitchController__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field controller_manager_msgs__srv__SwitchController__FIELDS[] = {
  {
    {controller_manager_msgs__srv__SwitchController__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {controller_manager_msgs__srv__SwitchController_Request__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__SwitchController__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {controller_manager_msgs__srv__SwitchController_Response__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__SwitchController__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {controller_manager_msgs__srv__SwitchController_Event__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription controller_manager_msgs__srv__SwitchController__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__SwitchController_Event__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__SwitchController_Request__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__SwitchController_Response__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
controller_manager_msgs__srv__SwitchController__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {controller_manager_msgs__srv__SwitchController__TYPE_NAME, 44, 44},
      {controller_manager_msgs__srv__SwitchController__FIELDS, 3, 3},
    },
    {controller_manager_msgs__srv__SwitchController__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Duration__EXPECTED_HASH, builtin_interfaces__msg__Duration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Duration__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = controller_manager_msgs__srv__SwitchController_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = controller_manager_msgs__srv__SwitchController_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = controller_manager_msgs__srv__SwitchController_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char controller_manager_msgs__srv__SwitchController_Request__FIELD_NAME__activate_controllers[] = "activate_controllers";
static char controller_manager_msgs__srv__SwitchController_Request__FIELD_NAME__deactivate_controllers[] = "deactivate_controllers";
static char controller_manager_msgs__srv__SwitchController_Request__FIELD_NAME__strictness[] = "strictness";
static char controller_manager_msgs__srv__SwitchController_Request__FIELD_NAME__activate_asap[] = "activate_asap";
static char controller_manager_msgs__srv__SwitchController_Request__FIELD_NAME__timeout[] = "timeout";

static rosidl_runtime_c__type_description__Field controller_manager_msgs__srv__SwitchController_Request__FIELDS[] = {
  {
    {controller_manager_msgs__srv__SwitchController_Request__FIELD_NAME__activate_controllers, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__SwitchController_Request__FIELD_NAME__deactivate_controllers, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__SwitchController_Request__FIELD_NAME__strictness, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__SwitchController_Request__FIELD_NAME__activate_asap, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__SwitchController_Request__FIELD_NAME__timeout, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription controller_manager_msgs__srv__SwitchController_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
controller_manager_msgs__srv__SwitchController_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {controller_manager_msgs__srv__SwitchController_Request__TYPE_NAME, 52, 52},
      {controller_manager_msgs__srv__SwitchController_Request__FIELDS, 5, 5},
    },
    {controller_manager_msgs__srv__SwitchController_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Duration__EXPECTED_HASH, builtin_interfaces__msg__Duration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Duration__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char controller_manager_msgs__srv__SwitchController_Response__FIELD_NAME__ok[] = "ok";
static char controller_manager_msgs__srv__SwitchController_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field controller_manager_msgs__srv__SwitchController_Response__FIELDS[] = {
  {
    {controller_manager_msgs__srv__SwitchController_Response__FIELD_NAME__ok, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__SwitchController_Response__FIELD_NAME__message, 7, 7},
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
controller_manager_msgs__srv__SwitchController_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {controller_manager_msgs__srv__SwitchController_Response__TYPE_NAME, 53, 53},
      {controller_manager_msgs__srv__SwitchController_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char controller_manager_msgs__srv__SwitchController_Event__FIELD_NAME__info[] = "info";
static char controller_manager_msgs__srv__SwitchController_Event__FIELD_NAME__request[] = "request";
static char controller_manager_msgs__srv__SwitchController_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field controller_manager_msgs__srv__SwitchController_Event__FIELDS[] = {
  {
    {controller_manager_msgs__srv__SwitchController_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__SwitchController_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {controller_manager_msgs__srv__SwitchController_Request__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__SwitchController_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {controller_manager_msgs__srv__SwitchController_Response__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription controller_manager_msgs__srv__SwitchController_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__SwitchController_Request__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__SwitchController_Response__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
controller_manager_msgs__srv__SwitchController_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {controller_manager_msgs__srv__SwitchController_Event__TYPE_NAME, 50, 50},
      {controller_manager_msgs__srv__SwitchController_Event__FIELDS, 3, 3},
    },
    {controller_manager_msgs__srv__SwitchController_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Duration__EXPECTED_HASH, builtin_interfaces__msg__Duration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Duration__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = controller_manager_msgs__srv__SwitchController_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = controller_manager_msgs__srv__SwitchController_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# The SwitchController service allows you to deactivate a number of controllers\n"
  "# and activate a number of controllers, all in one single timestep of the\n"
  "# controller manager's control loop.\n"
  "\n"
  "# To switch controllers, specify\n"
  "#  * the list of controller names to activate,\n"
  "#  * the list of controller names to deactivate, and\n"
  "#  * the strictness (STRICT, BEST_EFFORT, AUTO, or FORCE_AUTO)\n"
  "#    * STRICT means that switching will fail if anything goes wrong (an invalid\n"
  "#      controller name, a controller that failed to activate, etc.).\n"
  "#    * BEST_EFFORT:\n"
  "#      Transitions are only triggered if the controller is not yet in the target state.\n"
  "#      If it is already in the target state, no error occurs.\n"
  "#      Returns 'false' if all controllers of 'activate_controllers' or 'deactivate_controllers' are not yet loaded or configured,\n"
  "#      or the pending transitions of all existing controllers of 'activate_controllers'\n"
  "#      or 'deactivate_controllers' fail.\n"
  "#      Returns 'true' otherwise.\n"
  "#    * AUTO means that the controller manager will automatically resolve the controller\n"
  "#      chain in order to activate and/or deactivate the specified controllers.\n"
  "#      This is useful in complex systems when you want all dependent controllers to start\n"
  "#      within the same update iteration.\n"
  "#    * FORCE_AUTO means that the controller manager will take all necessary steps to activate\n"
  "#      the specified controllers without requiring you to explicitly list the controllers\n"
  "#      to be deactivated. This is useful when the controller being activated depends on\n"
  "#      another unknown controller that is currently running. The controller manager will\n"
  "#      deactivate any controllers that block the activation of the requested controller,\n"
  "#      following the mutually exclusive joint interface switching principle. For example,\n"
  "#      to activate a controller that uses a joint's position interface, the controller manager\n"
  "#      will automatically deactivate any controllers that use conflicting interfaces for\n"
  "#      the same joint.\n"
  "#  * activate the controllers as soon as their hardware dependencies are ready, will\n"
  "#    wait for all interfaces to be ready otherwise\n"
  "#  * the timeout before aborting pending controllers. Zero for infinite\n"
  "\n"
  "# The return value \"ok\" indicates if the controllers were switched\n"
  "# successfully or not. The meaning of success depends on the\n"
  "# specified strictness.\n"
  "# The return value \"message\" provides some human-readable information.\n"
  "\n"
  "\n"
  "string[] activate_controllers\n"
  "string[] deactivate_controllers\n"
  "int32 strictness\n"
  "int32 BEST_EFFORT=1\n"
  "int32 STRICT=2\n"
  "int32 AUTO=3\n"
  "int32 FORCE_AUTO=4\n"
  "bool activate_asap\n"
  "builtin_interfaces/Duration timeout\n"
  "---\n"
  "bool ok\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
controller_manager_msgs__srv__SwitchController__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {controller_manager_msgs__srv__SwitchController__TYPE_NAME, 44, 44},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 2706, 2706},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
controller_manager_msgs__srv__SwitchController_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {controller_manager_msgs__srv__SwitchController_Request__TYPE_NAME, 52, 52},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
controller_manager_msgs__srv__SwitchController_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {controller_manager_msgs__srv__SwitchController_Response__TYPE_NAME, 53, 53},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
controller_manager_msgs__srv__SwitchController_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {controller_manager_msgs__srv__SwitchController_Event__TYPE_NAME, 50, 50},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
controller_manager_msgs__srv__SwitchController__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *controller_manager_msgs__srv__SwitchController__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Duration__get_individual_type_description_source(NULL);
    sources[2] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[3] = *controller_manager_msgs__srv__SwitchController_Event__get_individual_type_description_source(NULL);
    sources[4] = *controller_manager_msgs__srv__SwitchController_Request__get_individual_type_description_source(NULL);
    sources[5] = *controller_manager_msgs__srv__SwitchController_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
controller_manager_msgs__srv__SwitchController_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *controller_manager_msgs__srv__SwitchController_Request__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Duration__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
controller_manager_msgs__srv__SwitchController_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *controller_manager_msgs__srv__SwitchController_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
controller_manager_msgs__srv__SwitchController_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *controller_manager_msgs__srv__SwitchController_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Duration__get_individual_type_description_source(NULL);
    sources[2] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[3] = *controller_manager_msgs__srv__SwitchController_Request__get_individual_type_description_source(NULL);
    sources[4] = *controller_manager_msgs__srv__SwitchController_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
