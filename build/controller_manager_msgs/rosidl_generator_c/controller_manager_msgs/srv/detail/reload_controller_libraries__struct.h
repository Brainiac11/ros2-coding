// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from controller_manager_msgs:srv/ReloadControllerLibraries.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "controller_manager_msgs/srv/reload_controller_libraries.h"


#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__RELOAD_CONTROLLER_LIBRARIES__STRUCT_H_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__RELOAD_CONTROLLER_LIBRARIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ReloadControllerLibraries in the package controller_manager_msgs.
typedef struct controller_manager_msgs__srv__ReloadControllerLibraries_Request
{
  /// Reloading libraries only works if there are no controllers loaded. If there
  /// are still some controllers loaded, the reloading will fail.
  /// If this bool is set to true, all loaded controllers will get
  /// killed automatically, and the reloading can succeed.
  bool force_kill;
} controller_manager_msgs__srv__ReloadControllerLibraries_Request;

// Struct for a sequence of controller_manager_msgs__srv__ReloadControllerLibraries_Request.
typedef struct controller_manager_msgs__srv__ReloadControllerLibraries_Request__Sequence
{
  controller_manager_msgs__srv__ReloadControllerLibraries_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_manager_msgs__srv__ReloadControllerLibraries_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/ReloadControllerLibraries in the package controller_manager_msgs.
typedef struct controller_manager_msgs__srv__ReloadControllerLibraries_Response
{
  bool ok;
} controller_manager_msgs__srv__ReloadControllerLibraries_Response;

// Struct for a sequence of controller_manager_msgs__srv__ReloadControllerLibraries_Response.
typedef struct controller_manager_msgs__srv__ReloadControllerLibraries_Response__Sequence
{
  controller_manager_msgs__srv__ReloadControllerLibraries_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_manager_msgs__srv__ReloadControllerLibraries_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  controller_manager_msgs__srv__ReloadControllerLibraries_Event__request__MAX_SIZE = 1
};
// response
enum
{
  controller_manager_msgs__srv__ReloadControllerLibraries_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ReloadControllerLibraries in the package controller_manager_msgs.
typedef struct controller_manager_msgs__srv__ReloadControllerLibraries_Event
{
  service_msgs__msg__ServiceEventInfo info;
  controller_manager_msgs__srv__ReloadControllerLibraries_Request__Sequence request;
  controller_manager_msgs__srv__ReloadControllerLibraries_Response__Sequence response;
} controller_manager_msgs__srv__ReloadControllerLibraries_Event;

// Struct for a sequence of controller_manager_msgs__srv__ReloadControllerLibraries_Event.
typedef struct controller_manager_msgs__srv__ReloadControllerLibraries_Event__Sequence
{
  controller_manager_msgs__srv__ReloadControllerLibraries_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_manager_msgs__srv__ReloadControllerLibraries_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__RELOAD_CONTROLLER_LIBRARIES__STRUCT_H_
