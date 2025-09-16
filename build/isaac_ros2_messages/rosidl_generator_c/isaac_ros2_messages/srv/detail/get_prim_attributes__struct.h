// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from isaac_ros2_messages:srv/GetPrimAttributes.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "isaac_ros2_messages/srv/get_prim_attributes.h"


#ifndef ISAAC_ROS2_MESSAGES__SRV__DETAIL__GET_PRIM_ATTRIBUTES__STRUCT_H_
#define ISAAC_ROS2_MESSAGES__SRV__DETAIL__GET_PRIM_ATTRIBUTES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'path'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetPrimAttributes in the package isaac_ros2_messages.
typedef struct isaac_ros2_messages__srv__GetPrimAttributes_Request
{
  /// prim path
  rosidl_runtime_c__String path;
} isaac_ros2_messages__srv__GetPrimAttributes_Request;

// Struct for a sequence of isaac_ros2_messages__srv__GetPrimAttributes_Request.
typedef struct isaac_ros2_messages__srv__GetPrimAttributes_Request__Sequence
{
  isaac_ros2_messages__srv__GetPrimAttributes_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isaac_ros2_messages__srv__GetPrimAttributes_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'names'
// Member 'displays'
// Member 'types'
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetPrimAttributes in the package isaac_ros2_messages.
typedef struct isaac_ros2_messages__srv__GetPrimAttributes_Response
{
  /// list of attribute base names (name used to Get or Set an attribute)
  rosidl_runtime_c__String__Sequence names;
  /// list of attribute display names (name displayed in Property tab)
  rosidl_runtime_c__String__Sequence displays;
  /// list of attribute data types
  rosidl_runtime_c__String__Sequence types;
  /// indicate a successful execution of the service
  bool success;
  /// informational, e.g. for error messages
  rosidl_runtime_c__String message;
} isaac_ros2_messages__srv__GetPrimAttributes_Response;

// Struct for a sequence of isaac_ros2_messages__srv__GetPrimAttributes_Response.
typedef struct isaac_ros2_messages__srv__GetPrimAttributes_Response__Sequence
{
  isaac_ros2_messages__srv__GetPrimAttributes_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isaac_ros2_messages__srv__GetPrimAttributes_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  isaac_ros2_messages__srv__GetPrimAttributes_Event__request__MAX_SIZE = 1
};
// response
enum
{
  isaac_ros2_messages__srv__GetPrimAttributes_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetPrimAttributes in the package isaac_ros2_messages.
typedef struct isaac_ros2_messages__srv__GetPrimAttributes_Event
{
  service_msgs__msg__ServiceEventInfo info;
  isaac_ros2_messages__srv__GetPrimAttributes_Request__Sequence request;
  isaac_ros2_messages__srv__GetPrimAttributes_Response__Sequence response;
} isaac_ros2_messages__srv__GetPrimAttributes_Event;

// Struct for a sequence of isaac_ros2_messages__srv__GetPrimAttributes_Event.
typedef struct isaac_ros2_messages__srv__GetPrimAttributes_Event__Sequence
{
  isaac_ros2_messages__srv__GetPrimAttributes_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isaac_ros2_messages__srv__GetPrimAttributes_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ISAAC_ROS2_MESSAGES__SRV__DETAIL__GET_PRIM_ATTRIBUTES__STRUCT_H_
