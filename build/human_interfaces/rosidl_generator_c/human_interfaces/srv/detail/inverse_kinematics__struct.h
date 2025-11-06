// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from human_interfaces:srv/InverseKinematics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "human_interfaces/srv/inverse_kinematics.h"


#ifndef HUMAN_INTERFACES__SRV__DETAIL__INVERSE_KINEMATICS__STRUCT_H_
#define HUMAN_INTERFACES__SRV__DETAIL__INVERSE_KINEMATICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/InverseKinematics in the package human_interfaces.
typedef struct human_interfaces__srv__InverseKinematics_Request
{
  double target_x;
  double target_y;
  double target_z;
  double link1_length;
  double link2_length;
  double link3_length;
  bool fix_joint1;
  bool fix_joint2;
  bool fix_joint3;
  double fixed_joint1_angle;
  double fixed_joint2_angle;
  double fixed_joint3_angle;
} human_interfaces__srv__InverseKinematics_Request;

// Struct for a sequence of human_interfaces__srv__InverseKinematics_Request.
typedef struct human_interfaces__srv__InverseKinematics_Request__Sequence
{
  human_interfaces__srv__InverseKinematics_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} human_interfaces__srv__InverseKinematics_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/InverseKinematics in the package human_interfaces.
typedef struct human_interfaces__srv__InverseKinematics_Response
{
  double joint1_angle;
  double joint2_angle;
  double joint3_angle;
  bool success;
  rosidl_runtime_c__String message;
} human_interfaces__srv__InverseKinematics_Response;

// Struct for a sequence of human_interfaces__srv__InverseKinematics_Response.
typedef struct human_interfaces__srv__InverseKinematics_Response__Sequence
{
  human_interfaces__srv__InverseKinematics_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} human_interfaces__srv__InverseKinematics_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  human_interfaces__srv__InverseKinematics_Event__request__MAX_SIZE = 1
};
// response
enum
{
  human_interfaces__srv__InverseKinematics_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/InverseKinematics in the package human_interfaces.
typedef struct human_interfaces__srv__InverseKinematics_Event
{
  service_msgs__msg__ServiceEventInfo info;
  human_interfaces__srv__InverseKinematics_Request__Sequence request;
  human_interfaces__srv__InverseKinematics_Response__Sequence response;
} human_interfaces__srv__InverseKinematics_Event;

// Struct for a sequence of human_interfaces__srv__InverseKinematics_Event.
typedef struct human_interfaces__srv__InverseKinematics_Event__Sequence
{
  human_interfaces__srv__InverseKinematics_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} human_interfaces__srv__InverseKinematics_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HUMAN_INTERFACES__SRV__DETAIL__INVERSE_KINEMATICS__STRUCT_H_
