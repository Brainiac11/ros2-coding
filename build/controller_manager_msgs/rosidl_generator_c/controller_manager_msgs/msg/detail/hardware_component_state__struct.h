// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from controller_manager_msgs:msg/HardwareComponentState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "controller_manager_msgs/msg/hardware_component_state.h"


#ifndef CONTROLLER_MANAGER_MSGS__MSG__DETAIL__HARDWARE_COMPONENT_STATE__STRUCT_H_
#define CONTROLLER_MANAGER_MSGS__MSG__DETAIL__HARDWARE_COMPONENT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'type'
// Member 'class_type'
// Member 'plugin_name'
#include "rosidl_runtime_c/string.h"
// Member 'state'
#include "lifecycle_msgs/msg/detail/state__struct.h"
// Member 'command_interfaces'
// Member 'state_interfaces'
#include "controller_manager_msgs/msg/detail/hardware_interface__struct.h"

/// Struct defined in msg/HardwareComponentState in the package controller_manager_msgs.
typedef struct controller_manager_msgs__msg__HardwareComponentState
{
  /// Name of the hardware component
  rosidl_runtime_c__String name;
  /// Type of the hardware component
  rosidl_runtime_c__String type;
  /// If the hardware component is running asynchronously
  bool is_async;
  /// read/write rate of the hardware component in Hz
  uint16_t rw_rate;
  /// DEPRECATED
  rosidl_runtime_c__String class_type;
  /// The name of the plugin that is used to load the hardware component
  rosidl_runtime_c__String plugin_name;
  /// State of the hardware component
  lifecycle_msgs__msg__State state;
  /// Command interfaces of the hardware component
  controller_manager_msgs__msg__HardwareInterface__Sequence command_interfaces;
  /// State interfaces of the hardware component
  controller_manager_msgs__msg__HardwareInterface__Sequence state_interfaces;
} controller_manager_msgs__msg__HardwareComponentState;

// Struct for a sequence of controller_manager_msgs__msg__HardwareComponentState.
typedef struct controller_manager_msgs__msg__HardwareComponentState__Sequence
{
  controller_manager_msgs__msg__HardwareComponentState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_manager_msgs__msg__HardwareComponentState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROLLER_MANAGER_MSGS__MSG__DETAIL__HARDWARE_COMPONENT_STATE__STRUCT_H_
