// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from controller_manager_msgs:srv/ListHardwareComponents.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "controller_manager_msgs/srv/list_hardware_components.h"


#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_COMPONENTS__STRUCT_H_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_COMPONENTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ListHardwareComponents in the package controller_manager_msgs.
typedef struct controller_manager_msgs__srv__ListHardwareComponents_Request
{
  uint8_t structure_needs_at_least_one_member;
} controller_manager_msgs__srv__ListHardwareComponents_Request;

// Struct for a sequence of controller_manager_msgs__srv__ListHardwareComponents_Request.
typedef struct controller_manager_msgs__srv__ListHardwareComponents_Request__Sequence
{
  controller_manager_msgs__srv__ListHardwareComponents_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_manager_msgs__srv__ListHardwareComponents_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'component'
#include "controller_manager_msgs/msg/detail/hardware_component_state__struct.h"

/// Struct defined in srv/ListHardwareComponents in the package controller_manager_msgs.
typedef struct controller_manager_msgs__srv__ListHardwareComponents_Response
{
  controller_manager_msgs__msg__HardwareComponentState__Sequence component;
} controller_manager_msgs__srv__ListHardwareComponents_Response;

// Struct for a sequence of controller_manager_msgs__srv__ListHardwareComponents_Response.
typedef struct controller_manager_msgs__srv__ListHardwareComponents_Response__Sequence
{
  controller_manager_msgs__srv__ListHardwareComponents_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_manager_msgs__srv__ListHardwareComponents_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  controller_manager_msgs__srv__ListHardwareComponents_Event__request__MAX_SIZE = 1
};
// response
enum
{
  controller_manager_msgs__srv__ListHardwareComponents_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ListHardwareComponents in the package controller_manager_msgs.
typedef struct controller_manager_msgs__srv__ListHardwareComponents_Event
{
  service_msgs__msg__ServiceEventInfo info;
  controller_manager_msgs__srv__ListHardwareComponents_Request__Sequence request;
  controller_manager_msgs__srv__ListHardwareComponents_Response__Sequence response;
} controller_manager_msgs__srv__ListHardwareComponents_Event;

// Struct for a sequence of controller_manager_msgs__srv__ListHardwareComponents_Event.
typedef struct controller_manager_msgs__srv__ListHardwareComponents_Event__Sequence
{
  controller_manager_msgs__srv__ListHardwareComponents_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_manager_msgs__srv__ListHardwareComponents_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_COMPONENTS__STRUCT_H_
