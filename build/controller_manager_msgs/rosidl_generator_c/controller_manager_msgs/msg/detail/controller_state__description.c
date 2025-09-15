// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from controller_manager_msgs:msg/ControllerState.idl
// generated code does not contain a copyright notice

#include "controller_manager_msgs/msg/detail/controller_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_type_hash_t *
controller_manager_msgs__msg__ControllerState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9a, 0x87, 0x80, 0xab, 0x98, 0x14, 0xb6, 0x03,
      0x29, 0x78, 0xa0, 0x7c, 0x6c, 0x70, 0x33, 0xcf,
      0x1a, 0x78, 0x94, 0xac, 0x8d, 0x94, 0x8a, 0x6f,
      0xb7, 0x2a, 0xfe, 0xa0, 0x7b, 0x04, 0xcc, 0x83,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "controller_manager_msgs/msg/detail/chain_connection__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t controller_manager_msgs__msg__ChainConnection__EXPECTED_HASH = {1, {
    0x2d, 0xae, 0xcd, 0x1d, 0xa4, 0xb1, 0x71, 0xf4,
    0x8b, 0x29, 0x1c, 0x79, 0x74, 0x76, 0x57, 0xa6,
    0x51, 0xeb, 0x1a, 0xb8, 0x82, 0x1b, 0x68, 0xe3,
    0x8b, 0x1c, 0x88, 0xc7, 0x36, 0xbb, 0xa9, 0x1c,
  }};
#endif

static char controller_manager_msgs__msg__ControllerState__TYPE_NAME[] = "controller_manager_msgs/msg/ControllerState";
static char controller_manager_msgs__msg__ChainConnection__TYPE_NAME[] = "controller_manager_msgs/msg/ChainConnection";

// Define type names, field names, and default values
static char controller_manager_msgs__msg__ControllerState__FIELD_NAME__name[] = "name";
static char controller_manager_msgs__msg__ControllerState__FIELD_NAME__state[] = "state";
static char controller_manager_msgs__msg__ControllerState__FIELD_NAME__type[] = "type";
static char controller_manager_msgs__msg__ControllerState__FIELD_NAME__is_async[] = "is_async";
static char controller_manager_msgs__msg__ControllerState__FIELD_NAME__update_rate[] = "update_rate";
static char controller_manager_msgs__msg__ControllerState__FIELD_NAME__claimed_interfaces[] = "claimed_interfaces";
static char controller_manager_msgs__msg__ControllerState__FIELD_NAME__required_command_interfaces[] = "required_command_interfaces";
static char controller_manager_msgs__msg__ControllerState__FIELD_NAME__required_state_interfaces[] = "required_state_interfaces";
static char controller_manager_msgs__msg__ControllerState__FIELD_NAME__is_chainable[] = "is_chainable";
static char controller_manager_msgs__msg__ControllerState__FIELD_NAME__is_chained[] = "is_chained";
static char controller_manager_msgs__msg__ControllerState__FIELD_NAME__exported_state_interfaces[] = "exported_state_interfaces";
static char controller_manager_msgs__msg__ControllerState__FIELD_NAME__reference_interfaces[] = "reference_interfaces";
static char controller_manager_msgs__msg__ControllerState__FIELD_NAME__chain_connections[] = "chain_connections";

static rosidl_runtime_c__type_description__Field controller_manager_msgs__msg__ControllerState__FIELDS[] = {
  {
    {controller_manager_msgs__msg__ControllerState__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__ControllerState__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__ControllerState__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__ControllerState__FIELD_NAME__is_async, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__ControllerState__FIELD_NAME__update_rate, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__ControllerState__FIELD_NAME__claimed_interfaces, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__ControllerState__FIELD_NAME__required_command_interfaces, 27, 27},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__ControllerState__FIELD_NAME__required_state_interfaces, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__ControllerState__FIELD_NAME__is_chainable, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__ControllerState__FIELD_NAME__is_chained, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__ControllerState__FIELD_NAME__exported_state_interfaces, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__ControllerState__FIELD_NAME__reference_interfaces, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__ControllerState__FIELD_NAME__chain_connections, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {controller_manager_msgs__msg__ChainConnection__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription controller_manager_msgs__msg__ControllerState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {controller_manager_msgs__msg__ChainConnection__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
controller_manager_msgs__msg__ControllerState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {controller_manager_msgs__msg__ControllerState__TYPE_NAME, 43, 43},
      {controller_manager_msgs__msg__ControllerState__FIELDS, 13, 13},
    },
    {controller_manager_msgs__msg__ControllerState__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&controller_manager_msgs__msg__ChainConnection__EXPECTED_HASH, controller_manager_msgs__msg__ChainConnection__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = controller_manager_msgs__msg__ChainConnection__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name        # controller name\n"
  "string state        # controller state: unconfigured, inactive, active, or finalized\n"
  "string type        # the controller class name, e.g. joint_trajectory_controller/JointTrajectoryController\n"
  "bool is_async       # true, if controller runs asynchronously. false, if controller runs synchronously\n"
  "uint16 update_rate        # update rate of the controller in Hz\n"
  "string[] claimed_interfaces        # command interfaces currently owned by controller\n"
  "string[] required_command_interfaces        # command interfaces required by controller\n"
  "string[] required_state_interfaces        # state interfaces required by controller\n"
  "bool is_chainable        # specifies whether or not controller can export references for a controller chain\n"
  "bool is_chained        # specifies whether or not controller's exported references are claimed by another controller\n"
  "string[] exported_state_interfaces        # state interfaces to be exported (only applicable if is_chainable is true)\n"
  "string[] reference_interfaces        # references to be exported (only applicable if is_chainable is true)\n"
  "ChainConnection[] chain_connections        # specifies list of controllers and their exported references that the controller is chained to";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
controller_manager_msgs__msg__ControllerState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {controller_manager_msgs__msg__ControllerState__TYPE_NAME, 43, 43},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1243, 1243},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
controller_manager_msgs__msg__ControllerState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *controller_manager_msgs__msg__ControllerState__get_individual_type_description_source(NULL),
    sources[1] = *controller_manager_msgs__msg__ChainConnection__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
