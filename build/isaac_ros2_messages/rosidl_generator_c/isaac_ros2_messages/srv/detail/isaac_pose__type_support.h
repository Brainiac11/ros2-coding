// generated from rosidl_generator_c/resource/idl__type_support.h.em
// with input from isaac_ros2_messages:srv/IsaacPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "isaac_ros2_messages/srv/isaac_pose.h"


#ifndef ISAAC_ROS2_MESSAGES__SRV__DETAIL__ISAAC_POSE__TYPE_SUPPORT_H_
#define ISAAC_ROS2_MESSAGES__SRV__DETAIL__ISAAC_POSE__TYPE_SUPPORT_H_

#include "rosidl_typesupport_interface/macros.h"

#include "isaac_ros2_messages/msg/rosidl_generator_c__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  isaac_ros2_messages,
  srv,
  IsaacPose_Request
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  isaac_ros2_messages,
  srv,
  IsaacPose_Response
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  isaac_ros2_messages,
  srv,
  IsaacPose_Event
)(void);

#include "rosidl_runtime_c/service_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_c,
  isaac_ros2_messages,
  srv,
  IsaacPose
)(void);

// Forward declare the function to create a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  isaac_ros2_messages,
  srv,
  IsaacPose
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message);

// Forward declare the function to destroy a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  isaac_ros2_messages,
  srv,
  IsaacPose
)(
  void * event_msg,
  rcutils_allocator_t * allocator);

#ifdef __cplusplus
}
#endif

#endif  // ISAAC_ROS2_MESSAGES__SRV__DETAIL__ISAAC_POSE__TYPE_SUPPORT_H_
