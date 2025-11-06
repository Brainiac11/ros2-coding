// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from human_interfaces:msg/ArmSwingCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "human_interfaces/msg/arm_swing_command.h"


#ifndef HUMAN_INTERFACES__MSG__DETAIL__ARM_SWING_COMMAND__STRUCT_H_
#define HUMAN_INTERFACES__MSG__DETAIL__ARM_SWING_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/ArmSwingCommand in the package human_interfaces.
typedef struct human_interfaces__msg__ArmSwingCommand
{
  uint8_t structure_needs_at_least_one_member;
} human_interfaces__msg__ArmSwingCommand;

// Struct for a sequence of human_interfaces__msg__ArmSwingCommand.
typedef struct human_interfaces__msg__ArmSwingCommand__Sequence
{
  human_interfaces__msg__ArmSwingCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} human_interfaces__msg__ArmSwingCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HUMAN_INTERFACES__MSG__DETAIL__ARM_SWING_COMMAND__STRUCT_H_
