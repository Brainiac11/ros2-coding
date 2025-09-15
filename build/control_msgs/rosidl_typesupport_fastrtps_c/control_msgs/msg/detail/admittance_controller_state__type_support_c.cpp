// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from control_msgs:msg/AdmittanceControllerState.idl
// generated code does not contain a copyright notice
#include "control_msgs/msg/detail/admittance_controller_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "control_msgs/msg/detail/admittance_controller_state__struct.h"
#include "control_msgs/msg/detail/admittance_controller_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/quaternion__functions.h"  // rot_base_control
#include "geometry_msgs/msg/detail/transform_stamped__functions.h"  // admittance_position, ref_trans_base_ft
#include "geometry_msgs/msg/detail/twist_stamped__functions.h"  // admittance_acceleration, admittance_velocity
#include "geometry_msgs/msg/detail/wrench_stamped__functions.h"  // wrench_base
#include "sensor_msgs/msg/detail/joint_state__functions.h"  // joint_state
#include "std_msgs/msg/detail/float64_multi_array__functions.h"  // damping, mass, stiffness
#include "std_msgs/msg/detail/int8_multi_array__functions.h"  // selected_axes
#include "std_msgs/msg/detail/string__functions.h"  // ft_sensor_frame

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_serialize_geometry_msgs__msg__Quaternion(
  const geometry_msgs__msg__Quaternion * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_deserialize_geometry_msgs__msg__Quaternion(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Quaternion * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_geometry_msgs__msg__Quaternion(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_geometry_msgs__msg__Quaternion(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_serialize_key_geometry_msgs__msg__Quaternion(
  const geometry_msgs__msg__Quaternion * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_key_geometry_msgs__msg__Quaternion(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_key_geometry_msgs__msg__Quaternion(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Quaternion)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_serialize_geometry_msgs__msg__TransformStamped(
  const geometry_msgs__msg__TransformStamped * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_deserialize_geometry_msgs__msg__TransformStamped(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__TransformStamped * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_geometry_msgs__msg__TransformStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_geometry_msgs__msg__TransformStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_serialize_key_geometry_msgs__msg__TransformStamped(
  const geometry_msgs__msg__TransformStamped * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_key_geometry_msgs__msg__TransformStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_key_geometry_msgs__msg__TransformStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, TransformStamped)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_serialize_geometry_msgs__msg__TwistStamped(
  const geometry_msgs__msg__TwistStamped * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_deserialize_geometry_msgs__msg__TwistStamped(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__TwistStamped * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_geometry_msgs__msg__TwistStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_geometry_msgs__msg__TwistStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_serialize_key_geometry_msgs__msg__TwistStamped(
  const geometry_msgs__msg__TwistStamped * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_key_geometry_msgs__msg__TwistStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_key_geometry_msgs__msg__TwistStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, TwistStamped)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_serialize_geometry_msgs__msg__WrenchStamped(
  const geometry_msgs__msg__WrenchStamped * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_deserialize_geometry_msgs__msg__WrenchStamped(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__WrenchStamped * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_geometry_msgs__msg__WrenchStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_geometry_msgs__msg__WrenchStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_serialize_key_geometry_msgs__msg__WrenchStamped(
  const geometry_msgs__msg__WrenchStamped * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_key_geometry_msgs__msg__WrenchStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_key_geometry_msgs__msg__WrenchStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, WrenchStamped)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_serialize_sensor_msgs__msg__JointState(
  const sensor_msgs__msg__JointState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_deserialize_sensor_msgs__msg__JointState(
  eprosima::fastcdr::Cdr & cdr,
  sensor_msgs__msg__JointState * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_sensor_msgs__msg__JointState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_sensor_msgs__msg__JointState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_serialize_key_sensor_msgs__msg__JointState(
  const sensor_msgs__msg__JointState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_key_sensor_msgs__msg__JointState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_key_sensor_msgs__msg__JointState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, JointState)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_serialize_std_msgs__msg__Float64MultiArray(
  const std_msgs__msg__Float64MultiArray * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_deserialize_std_msgs__msg__Float64MultiArray(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Float64MultiArray * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_std_msgs__msg__Float64MultiArray(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_std_msgs__msg__Float64MultiArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_serialize_key_std_msgs__msg__Float64MultiArray(
  const std_msgs__msg__Float64MultiArray * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_key_std_msgs__msg__Float64MultiArray(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_key_std_msgs__msg__Float64MultiArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64MultiArray)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_serialize_std_msgs__msg__Int8MultiArray(
  const std_msgs__msg__Int8MultiArray * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_deserialize_std_msgs__msg__Int8MultiArray(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Int8MultiArray * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_std_msgs__msg__Int8MultiArray(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_std_msgs__msg__Int8MultiArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_serialize_key_std_msgs__msg__Int8MultiArray(
  const std_msgs__msg__Int8MultiArray * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_key_std_msgs__msg__Int8MultiArray(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_key_std_msgs__msg__Int8MultiArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Int8MultiArray)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_serialize_std_msgs__msg__String(
  const std_msgs__msg__String * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_deserialize_std_msgs__msg__String(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__String * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_std_msgs__msg__String(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_std_msgs__msg__String(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
bool cdr_serialize_key_std_msgs__msg__String(
  const std_msgs__msg__String * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t get_serialized_size_key_std_msgs__msg__String(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
size_t max_serialized_size_key_std_msgs__msg__String(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, String)();


using _AdmittanceControllerState__ros_msg_type = control_msgs__msg__AdmittanceControllerState;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
bool cdr_serialize_control_msgs__msg__AdmittanceControllerState(
  const control_msgs__msg__AdmittanceControllerState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: mass
  {
    cdr_serialize_std_msgs__msg__Float64MultiArray(
      &ros_message->mass, cdr);
  }

  // Field name: damping
  {
    cdr_serialize_std_msgs__msg__Float64MultiArray(
      &ros_message->damping, cdr);
  }

  // Field name: stiffness
  {
    cdr_serialize_std_msgs__msg__Float64MultiArray(
      &ros_message->stiffness, cdr);
  }

  // Field name: rot_base_control
  {
    cdr_serialize_geometry_msgs__msg__Quaternion(
      &ros_message->rot_base_control, cdr);
  }

  // Field name: ref_trans_base_ft
  {
    cdr_serialize_geometry_msgs__msg__TransformStamped(
      &ros_message->ref_trans_base_ft, cdr);
  }

  // Field name: selected_axes
  {
    cdr_serialize_std_msgs__msg__Int8MultiArray(
      &ros_message->selected_axes, cdr);
  }

  // Field name: ft_sensor_frame
  {
    cdr_serialize_std_msgs__msg__String(
      &ros_message->ft_sensor_frame, cdr);
  }

  // Field name: admittance_position
  {
    cdr_serialize_geometry_msgs__msg__TransformStamped(
      &ros_message->admittance_position, cdr);
  }

  // Field name: admittance_acceleration
  {
    cdr_serialize_geometry_msgs__msg__TwistStamped(
      &ros_message->admittance_acceleration, cdr);
  }

  // Field name: admittance_velocity
  {
    cdr_serialize_geometry_msgs__msg__TwistStamped(
      &ros_message->admittance_velocity, cdr);
  }

  // Field name: wrench_base
  {
    cdr_serialize_geometry_msgs__msg__WrenchStamped(
      &ros_message->wrench_base, cdr);
  }

  // Field name: joint_state
  {
    cdr_serialize_sensor_msgs__msg__JointState(
      &ros_message->joint_state, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
bool cdr_deserialize_control_msgs__msg__AdmittanceControllerState(
  eprosima::fastcdr::Cdr & cdr,
  control_msgs__msg__AdmittanceControllerState * ros_message)
{
  // Field name: mass
  {
    cdr_deserialize_std_msgs__msg__Float64MultiArray(cdr, &ros_message->mass);
  }

  // Field name: damping
  {
    cdr_deserialize_std_msgs__msg__Float64MultiArray(cdr, &ros_message->damping);
  }

  // Field name: stiffness
  {
    cdr_deserialize_std_msgs__msg__Float64MultiArray(cdr, &ros_message->stiffness);
  }

  // Field name: rot_base_control
  {
    cdr_deserialize_geometry_msgs__msg__Quaternion(cdr, &ros_message->rot_base_control);
  }

  // Field name: ref_trans_base_ft
  {
    cdr_deserialize_geometry_msgs__msg__TransformStamped(cdr, &ros_message->ref_trans_base_ft);
  }

  // Field name: selected_axes
  {
    cdr_deserialize_std_msgs__msg__Int8MultiArray(cdr, &ros_message->selected_axes);
  }

  // Field name: ft_sensor_frame
  {
    cdr_deserialize_std_msgs__msg__String(cdr, &ros_message->ft_sensor_frame);
  }

  // Field name: admittance_position
  {
    cdr_deserialize_geometry_msgs__msg__TransformStamped(cdr, &ros_message->admittance_position);
  }

  // Field name: admittance_acceleration
  {
    cdr_deserialize_geometry_msgs__msg__TwistStamped(cdr, &ros_message->admittance_acceleration);
  }

  // Field name: admittance_velocity
  {
    cdr_deserialize_geometry_msgs__msg__TwistStamped(cdr, &ros_message->admittance_velocity);
  }

  // Field name: wrench_base
  {
    cdr_deserialize_geometry_msgs__msg__WrenchStamped(cdr, &ros_message->wrench_base);
  }

  // Field name: joint_state
  {
    cdr_deserialize_sensor_msgs__msg__JointState(cdr, &ros_message->joint_state);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
size_t get_serialized_size_control_msgs__msg__AdmittanceControllerState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AdmittanceControllerState__ros_msg_type * ros_message = static_cast<const _AdmittanceControllerState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: mass
  current_alignment += get_serialized_size_std_msgs__msg__Float64MultiArray(
    &(ros_message->mass), current_alignment);

  // Field name: damping
  current_alignment += get_serialized_size_std_msgs__msg__Float64MultiArray(
    &(ros_message->damping), current_alignment);

  // Field name: stiffness
  current_alignment += get_serialized_size_std_msgs__msg__Float64MultiArray(
    &(ros_message->stiffness), current_alignment);

  // Field name: rot_base_control
  current_alignment += get_serialized_size_geometry_msgs__msg__Quaternion(
    &(ros_message->rot_base_control), current_alignment);

  // Field name: ref_trans_base_ft
  current_alignment += get_serialized_size_geometry_msgs__msg__TransformStamped(
    &(ros_message->ref_trans_base_ft), current_alignment);

  // Field name: selected_axes
  current_alignment += get_serialized_size_std_msgs__msg__Int8MultiArray(
    &(ros_message->selected_axes), current_alignment);

  // Field name: ft_sensor_frame
  current_alignment += get_serialized_size_std_msgs__msg__String(
    &(ros_message->ft_sensor_frame), current_alignment);

  // Field name: admittance_position
  current_alignment += get_serialized_size_geometry_msgs__msg__TransformStamped(
    &(ros_message->admittance_position), current_alignment);

  // Field name: admittance_acceleration
  current_alignment += get_serialized_size_geometry_msgs__msg__TwistStamped(
    &(ros_message->admittance_acceleration), current_alignment);

  // Field name: admittance_velocity
  current_alignment += get_serialized_size_geometry_msgs__msg__TwistStamped(
    &(ros_message->admittance_velocity), current_alignment);

  // Field name: wrench_base
  current_alignment += get_serialized_size_geometry_msgs__msg__WrenchStamped(
    &(ros_message->wrench_base), current_alignment);

  // Field name: joint_state
  current_alignment += get_serialized_size_sensor_msgs__msg__JointState(
    &(ros_message->joint_state), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
size_t max_serialized_size_control_msgs__msg__AdmittanceControllerState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: mass
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Float64MultiArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: damping
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Float64MultiArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: stiffness
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Float64MultiArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: rot_base_control
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Quaternion(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: ref_trans_base_ft
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__TransformStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: selected_axes
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Int8MultiArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: ft_sensor_frame
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__String(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: admittance_position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__TransformStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: admittance_acceleration
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__TwistStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: admittance_velocity
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__TwistStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: wrench_base
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__WrenchStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: joint_state
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sensor_msgs__msg__JointState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = control_msgs__msg__AdmittanceControllerState;
    is_plain =
      (
      offsetof(DataType, joint_state) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
bool cdr_serialize_key_control_msgs__msg__AdmittanceControllerState(
  const control_msgs__msg__AdmittanceControllerState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: mass
  {
    cdr_serialize_key_std_msgs__msg__Float64MultiArray(
      &ros_message->mass, cdr);
  }

  // Field name: damping
  {
    cdr_serialize_key_std_msgs__msg__Float64MultiArray(
      &ros_message->damping, cdr);
  }

  // Field name: stiffness
  {
    cdr_serialize_key_std_msgs__msg__Float64MultiArray(
      &ros_message->stiffness, cdr);
  }

  // Field name: rot_base_control
  {
    cdr_serialize_key_geometry_msgs__msg__Quaternion(
      &ros_message->rot_base_control, cdr);
  }

  // Field name: ref_trans_base_ft
  {
    cdr_serialize_key_geometry_msgs__msg__TransformStamped(
      &ros_message->ref_trans_base_ft, cdr);
  }

  // Field name: selected_axes
  {
    cdr_serialize_key_std_msgs__msg__Int8MultiArray(
      &ros_message->selected_axes, cdr);
  }

  // Field name: ft_sensor_frame
  {
    cdr_serialize_key_std_msgs__msg__String(
      &ros_message->ft_sensor_frame, cdr);
  }

  // Field name: admittance_position
  {
    cdr_serialize_key_geometry_msgs__msg__TransformStamped(
      &ros_message->admittance_position, cdr);
  }

  // Field name: admittance_acceleration
  {
    cdr_serialize_key_geometry_msgs__msg__TwistStamped(
      &ros_message->admittance_acceleration, cdr);
  }

  // Field name: admittance_velocity
  {
    cdr_serialize_key_geometry_msgs__msg__TwistStamped(
      &ros_message->admittance_velocity, cdr);
  }

  // Field name: wrench_base
  {
    cdr_serialize_key_geometry_msgs__msg__WrenchStamped(
      &ros_message->wrench_base, cdr);
  }

  // Field name: joint_state
  {
    cdr_serialize_key_sensor_msgs__msg__JointState(
      &ros_message->joint_state, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
size_t get_serialized_size_key_control_msgs__msg__AdmittanceControllerState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AdmittanceControllerState__ros_msg_type * ros_message = static_cast<const _AdmittanceControllerState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: mass
  current_alignment += get_serialized_size_key_std_msgs__msg__Float64MultiArray(
    &(ros_message->mass), current_alignment);

  // Field name: damping
  current_alignment += get_serialized_size_key_std_msgs__msg__Float64MultiArray(
    &(ros_message->damping), current_alignment);

  // Field name: stiffness
  current_alignment += get_serialized_size_key_std_msgs__msg__Float64MultiArray(
    &(ros_message->stiffness), current_alignment);

  // Field name: rot_base_control
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Quaternion(
    &(ros_message->rot_base_control), current_alignment);

  // Field name: ref_trans_base_ft
  current_alignment += get_serialized_size_key_geometry_msgs__msg__TransformStamped(
    &(ros_message->ref_trans_base_ft), current_alignment);

  // Field name: selected_axes
  current_alignment += get_serialized_size_key_std_msgs__msg__Int8MultiArray(
    &(ros_message->selected_axes), current_alignment);

  // Field name: ft_sensor_frame
  current_alignment += get_serialized_size_key_std_msgs__msg__String(
    &(ros_message->ft_sensor_frame), current_alignment);

  // Field name: admittance_position
  current_alignment += get_serialized_size_key_geometry_msgs__msg__TransformStamped(
    &(ros_message->admittance_position), current_alignment);

  // Field name: admittance_acceleration
  current_alignment += get_serialized_size_key_geometry_msgs__msg__TwistStamped(
    &(ros_message->admittance_acceleration), current_alignment);

  // Field name: admittance_velocity
  current_alignment += get_serialized_size_key_geometry_msgs__msg__TwistStamped(
    &(ros_message->admittance_velocity), current_alignment);

  // Field name: wrench_base
  current_alignment += get_serialized_size_key_geometry_msgs__msg__WrenchStamped(
    &(ros_message->wrench_base), current_alignment);

  // Field name: joint_state
  current_alignment += get_serialized_size_key_sensor_msgs__msg__JointState(
    &(ros_message->joint_state), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_msgs
size_t max_serialized_size_key_control_msgs__msg__AdmittanceControllerState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: mass
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Float64MultiArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: damping
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Float64MultiArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: stiffness
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Float64MultiArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: rot_base_control
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Quaternion(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: ref_trans_base_ft
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__TransformStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: selected_axes
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Int8MultiArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: ft_sensor_frame
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__String(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: admittance_position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__TransformStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: admittance_acceleration
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__TwistStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: admittance_velocity
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__TwistStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: wrench_base
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__WrenchStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: joint_state
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_sensor_msgs__msg__JointState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = control_msgs__msg__AdmittanceControllerState;
    is_plain =
      (
      offsetof(DataType, joint_state) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _AdmittanceControllerState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const control_msgs__msg__AdmittanceControllerState * ros_message = static_cast<const control_msgs__msg__AdmittanceControllerState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_control_msgs__msg__AdmittanceControllerState(ros_message, cdr);
}

static bool _AdmittanceControllerState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  control_msgs__msg__AdmittanceControllerState * ros_message = static_cast<control_msgs__msg__AdmittanceControllerState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_control_msgs__msg__AdmittanceControllerState(cdr, ros_message);
}

static uint32_t _AdmittanceControllerState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_control_msgs__msg__AdmittanceControllerState(
      untyped_ros_message, 0));
}

static size_t _AdmittanceControllerState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_control_msgs__msg__AdmittanceControllerState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AdmittanceControllerState = {
  "control_msgs::msg",
  "AdmittanceControllerState",
  _AdmittanceControllerState__cdr_serialize,
  _AdmittanceControllerState__cdr_deserialize,
  _AdmittanceControllerState__get_serialized_size,
  _AdmittanceControllerState__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _AdmittanceControllerState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AdmittanceControllerState,
  get_message_typesupport_handle_function,
  &control_msgs__msg__AdmittanceControllerState__get_type_hash,
  &control_msgs__msg__AdmittanceControllerState__get_type_description,
  &control_msgs__msg__AdmittanceControllerState__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_msgs, msg, AdmittanceControllerState)() {
  return &_AdmittanceControllerState__type_support;
}

#if defined(__cplusplus)
}
#endif
