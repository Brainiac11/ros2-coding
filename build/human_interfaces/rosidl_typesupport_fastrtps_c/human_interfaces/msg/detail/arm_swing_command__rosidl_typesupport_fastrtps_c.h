// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from human_interfaces:msg/ArmSwingCommand.idl
// generated code does not contain a copyright notice
#ifndef HUMAN_INTERFACES__MSG__DETAIL__ARM_SWING_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define HUMAN_INTERFACES__MSG__DETAIL__ARM_SWING_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "human_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "human_interfaces/msg/detail/arm_swing_command__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_human_interfaces
bool cdr_serialize_human_interfaces__msg__ArmSwingCommand(
  const human_interfaces__msg__ArmSwingCommand * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_human_interfaces
bool cdr_deserialize_human_interfaces__msg__ArmSwingCommand(
  eprosima::fastcdr::Cdr &,
  human_interfaces__msg__ArmSwingCommand * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_human_interfaces
size_t get_serialized_size_human_interfaces__msg__ArmSwingCommand(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_human_interfaces
size_t max_serialized_size_human_interfaces__msg__ArmSwingCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_human_interfaces
bool cdr_serialize_key_human_interfaces__msg__ArmSwingCommand(
  const human_interfaces__msg__ArmSwingCommand * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_human_interfaces
size_t get_serialized_size_key_human_interfaces__msg__ArmSwingCommand(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_human_interfaces
size_t max_serialized_size_key_human_interfaces__msg__ArmSwingCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_human_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, human_interfaces, msg, ArmSwingCommand)();

#ifdef __cplusplus
}
#endif

#endif  // HUMAN_INTERFACES__MSG__DETAIL__ARM_SWING_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
