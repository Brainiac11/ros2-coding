// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from human_interfaces:srv/InverseKinematics.idl
// generated code does not contain a copyright notice
#include "human_interfaces/srv/detail/inverse_kinematics__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "human_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "human_interfaces/srv/detail/inverse_kinematics__struct.h"
#include "human_interfaces/srv/detail/inverse_kinematics__functions.h"
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


// forward declare type support functions


using _InverseKinematics_Request__ros_msg_type = human_interfaces__srv__InverseKinematics_Request;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_human_interfaces
bool cdr_serialize_human_interfaces__srv__InverseKinematics_Request(
  const human_interfaces__srv__InverseKinematics_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: target_x
  {
    cdr << ros_message->target_x;
  }

  // Field name: target_y
  {
    cdr << ros_message->target_y;
  }

  // Field name: target_z
  {
    cdr << ros_message->target_z;
  }

  // Field name: link1_length
  {
    cdr << ros_message->link1_length;
  }

  // Field name: link2_length
  {
    cdr << ros_message->link2_length;
  }

  // Field name: link3_length
  {
    cdr << ros_message->link3_length;
  }

  // Field name: fix_joint1
  {
    cdr << (ros_message->fix_joint1 ? true : false);
  }

  // Field name: fix_joint2
  {
    cdr << (ros_message->fix_joint2 ? true : false);
  }

  // Field name: fix_joint3
  {
    cdr << (ros_message->fix_joint3 ? true : false);
  }

  // Field name: fixed_joint1_angle
  {
    cdr << ros_message->fixed_joint1_angle;
  }

  // Field name: fixed_joint2_angle
  {
    cdr << ros_message->fixed_joint2_angle;
  }

  // Field name: fixed_joint3_angle
  {
    cdr << ros_message->fixed_joint3_angle;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_human_interfaces
bool cdr_deserialize_human_interfaces__srv__InverseKinematics_Request(
  eprosima::fastcdr::Cdr & cdr,
  human_interfaces__srv__InverseKinematics_Request * ros_message)
{
  // Field name: target_x
  {
    cdr >> ros_message->target_x;
  }

  // Field name: target_y
  {
    cdr >> ros_message->target_y;
  }

  // Field name: target_z
  {
    cdr >> ros_message->target_z;
  }

  // Field name: link1_length
  {
    cdr >> ros_message->link1_length;
  }

  // Field name: link2_length
  {
    cdr >> ros_message->link2_length;
  }

  // Field name: link3_length
  {
    cdr >> ros_message->link3_length;
  }

  // Field name: fix_joint1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fix_joint1 = tmp ? true : false;
  }

  // Field name: fix_joint2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fix_joint2 = tmp ? true : false;
  }

  // Field name: fix_joint3
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fix_joint3 = tmp ? true : false;
  }

  // Field name: fixed_joint1_angle
  {
    cdr >> ros_message->fixed_joint1_angle;
  }

  // Field name: fixed_joint2_angle
  {
    cdr >> ros_message->fixed_joint2_angle;
  }

  // Field name: fixed_joint3_angle
  {
    cdr >> ros_message->fixed_joint3_angle;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_human_interfaces
size_t get_serialized_size_human_interfaces__srv__InverseKinematics_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _InverseKinematics_Request__ros_msg_type * ros_message = static_cast<const _InverseKinematics_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: target_x
  {
    size_t item_size = sizeof(ros_message->target_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: target_y
  {
    size_t item_size = sizeof(ros_message->target_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: target_z
  {
    size_t item_size = sizeof(ros_message->target_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: link1_length
  {
    size_t item_size = sizeof(ros_message->link1_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: link2_length
  {
    size_t item_size = sizeof(ros_message->link2_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: link3_length
  {
    size_t item_size = sizeof(ros_message->link3_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fix_joint1
  {
    size_t item_size = sizeof(ros_message->fix_joint1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fix_joint2
  {
    size_t item_size = sizeof(ros_message->fix_joint2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fix_joint3
  {
    size_t item_size = sizeof(ros_message->fix_joint3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fixed_joint1_angle
  {
    size_t item_size = sizeof(ros_message->fixed_joint1_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fixed_joint2_angle
  {
    size_t item_size = sizeof(ros_message->fixed_joint2_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fixed_joint3_angle
  {
    size_t item_size = sizeof(ros_message->fixed_joint3_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_human_interfaces
size_t max_serialized_size_human_interfaces__srv__InverseKinematics_Request(
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

  // Field name: target_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: target_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: target_z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: link1_length
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: link2_length
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: link3_length
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: fix_joint1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: fix_joint2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: fix_joint3
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: fixed_joint1_angle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: fixed_joint2_angle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: fixed_joint3_angle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = human_interfaces__srv__InverseKinematics_Request;
    is_plain =
      (
      offsetof(DataType, fixed_joint3_angle) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_human_interfaces
bool cdr_serialize_key_human_interfaces__srv__InverseKinematics_Request(
  const human_interfaces__srv__InverseKinematics_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: target_x
  {
    cdr << ros_message->target_x;
  }

  // Field name: target_y
  {
    cdr << ros_message->target_y;
  }

  // Field name: target_z
  {
    cdr << ros_message->target_z;
  }

  // Field name: link1_length
  {
    cdr << ros_message->link1_length;
  }

  // Field name: link2_length
  {
    cdr << ros_message->link2_length;
  }

  // Field name: link3_length
  {
    cdr << ros_message->link3_length;
  }

  // Field name: fix_joint1
  {
    cdr << (ros_message->fix_joint1 ? true : false);
  }

  // Field name: fix_joint2
  {
    cdr << (ros_message->fix_joint2 ? true : false);
  }

  // Field name: fix_joint3
  {
    cdr << (ros_message->fix_joint3 ? true : false);
  }

  // Field name: fixed_joint1_angle
  {
    cdr << ros_message->fixed_joint1_angle;
  }

  // Field name: fixed_joint2_angle
  {
    cdr << ros_message->fixed_joint2_angle;
  }

  // Field name: fixed_joint3_angle
  {
    cdr << ros_message->fixed_joint3_angle;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_human_interfaces
size_t get_serialized_size_key_human_interfaces__srv__InverseKinematics_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _InverseKinematics_Request__ros_msg_type * ros_message = static_cast<const _InverseKinematics_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: target_x
  {
    size_t item_size = sizeof(ros_message->target_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: target_y
  {
    size_t item_size = sizeof(ros_message->target_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: target_z
  {
    size_t item_size = sizeof(ros_message->target_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: link1_length
  {
    size_t item_size = sizeof(ros_message->link1_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: link2_length
  {
    size_t item_size = sizeof(ros_message->link2_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: link3_length
  {
    size_t item_size = sizeof(ros_message->link3_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fix_joint1
  {
    size_t item_size = sizeof(ros_message->fix_joint1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fix_joint2
  {
    size_t item_size = sizeof(ros_message->fix_joint2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fix_joint3
  {
    size_t item_size = sizeof(ros_message->fix_joint3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fixed_joint1_angle
  {
    size_t item_size = sizeof(ros_message->fixed_joint1_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fixed_joint2_angle
  {
    size_t item_size = sizeof(ros_message->fixed_joint2_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fixed_joint3_angle
  {
    size_t item_size = sizeof(ros_message->fixed_joint3_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_human_interfaces
size_t max_serialized_size_key_human_interfaces__srv__InverseKinematics_Request(
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
  // Field name: target_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: target_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: target_z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: link1_length
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: link2_length
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: link3_length
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: fix_joint1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: fix_joint2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: fix_joint3
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: fixed_joint1_angle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: fixed_joint2_angle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: fixed_joint3_angle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = human_interfaces__srv__InverseKinematics_Request;
    is_plain =
      (
      offsetof(DataType, fixed_joint3_angle) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _InverseKinematics_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const human_interfaces__srv__InverseKinematics_Request * ros_message = static_cast<const human_interfaces__srv__InverseKinematics_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_human_interfaces__srv__InverseKinematics_Request(ros_message, cdr);
}

static bool _InverseKinematics_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  human_interfaces__srv__InverseKinematics_Request * ros_message = static_cast<human_interfaces__srv__InverseKinematics_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_human_interfaces__srv__InverseKinematics_Request(cdr, ros_message);
}

static uint32_t _InverseKinematics_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_human_interfaces__srv__InverseKinematics_Request(
      untyped_ros_message, 0));
}

static size_t _InverseKinematics_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_human_interfaces__srv__InverseKinematics_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_InverseKinematics_Request = {
  "human_interfaces::srv",
  "InverseKinematics_Request",
  _InverseKinematics_Request__cdr_serialize,
  _InverseKinematics_Request__cdr_deserialize,
  _InverseKinematics_Request__get_serialized_size,
  _InverseKinematics_Request__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _InverseKinematics_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_InverseKinematics_Request,
  get_message_typesupport_handle_function,
  &human_interfaces__srv__InverseKinematics_Request__get_type_hash,
  &human_interfaces__srv__InverseKinematics_Request__get_type_description,
  &human_interfaces__srv__InverseKinematics_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, human_interfaces, srv, InverseKinematics_Request)() {
  return &_InverseKinematics_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "human_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "human_interfaces/srv/detail/inverse_kinematics__struct.h"
// already included above
// #include "human_interfaces/srv/detail/inverse_kinematics__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "rosidl_runtime_c/string.h"  // message
#include "rosidl_runtime_c/string_functions.h"  // message

// forward declare type support functions


using _InverseKinematics_Response__ros_msg_type = human_interfaces__srv__InverseKinematics_Response;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_human_interfaces
bool cdr_serialize_human_interfaces__srv__InverseKinematics_Response(
  const human_interfaces__srv__InverseKinematics_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: joint1_angle
  {
    cdr << ros_message->joint1_angle;
  }

  // Field name: joint2_angle
  {
    cdr << ros_message->joint2_angle;
  }

  // Field name: joint3_angle
  {
    cdr << ros_message->joint3_angle;
  }

  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_human_interfaces
bool cdr_deserialize_human_interfaces__srv__InverseKinematics_Response(
  eprosima::fastcdr::Cdr & cdr,
  human_interfaces__srv__InverseKinematics_Response * ros_message)
{
  // Field name: joint1_angle
  {
    cdr >> ros_message->joint1_angle;
  }

  // Field name: joint2_angle
  {
    cdr >> ros_message->joint2_angle;
  }

  // Field name: joint3_angle
  {
    cdr >> ros_message->joint3_angle;
  }

  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_runtime_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_human_interfaces
size_t get_serialized_size_human_interfaces__srv__InverseKinematics_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _InverseKinematics_Response__ros_msg_type * ros_message = static_cast<const _InverseKinematics_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: joint1_angle
  {
    size_t item_size = sizeof(ros_message->joint1_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: joint2_angle
  {
    size_t item_size = sizeof(ros_message->joint2_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: joint3_angle
  {
    size_t item_size = sizeof(ros_message->joint3_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_human_interfaces
size_t max_serialized_size_human_interfaces__srv__InverseKinematics_Response(
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

  // Field name: joint1_angle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: joint2_angle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: joint3_angle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: success
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: message
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = human_interfaces__srv__InverseKinematics_Response;
    is_plain =
      (
      offsetof(DataType, message) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_human_interfaces
bool cdr_serialize_key_human_interfaces__srv__InverseKinematics_Response(
  const human_interfaces__srv__InverseKinematics_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: joint1_angle
  {
    cdr << ros_message->joint1_angle;
  }

  // Field name: joint2_angle
  {
    cdr << ros_message->joint2_angle;
  }

  // Field name: joint3_angle
  {
    cdr << ros_message->joint3_angle;
  }

  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_human_interfaces
size_t get_serialized_size_key_human_interfaces__srv__InverseKinematics_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _InverseKinematics_Response__ros_msg_type * ros_message = static_cast<const _InverseKinematics_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: joint1_angle
  {
    size_t item_size = sizeof(ros_message->joint1_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: joint2_angle
  {
    size_t item_size = sizeof(ros_message->joint2_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: joint3_angle
  {
    size_t item_size = sizeof(ros_message->joint3_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_human_interfaces
size_t max_serialized_size_key_human_interfaces__srv__InverseKinematics_Response(
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
  // Field name: joint1_angle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: joint2_angle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: joint3_angle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: success
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: message
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = human_interfaces__srv__InverseKinematics_Response;
    is_plain =
      (
      offsetof(DataType, message) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _InverseKinematics_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const human_interfaces__srv__InverseKinematics_Response * ros_message = static_cast<const human_interfaces__srv__InverseKinematics_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_human_interfaces__srv__InverseKinematics_Response(ros_message, cdr);
}

static bool _InverseKinematics_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  human_interfaces__srv__InverseKinematics_Response * ros_message = static_cast<human_interfaces__srv__InverseKinematics_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_human_interfaces__srv__InverseKinematics_Response(cdr, ros_message);
}

static uint32_t _InverseKinematics_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_human_interfaces__srv__InverseKinematics_Response(
      untyped_ros_message, 0));
}

static size_t _InverseKinematics_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_human_interfaces__srv__InverseKinematics_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_InverseKinematics_Response = {
  "human_interfaces::srv",
  "InverseKinematics_Response",
  _InverseKinematics_Response__cdr_serialize,
  _InverseKinematics_Response__cdr_deserialize,
  _InverseKinematics_Response__get_serialized_size,
  _InverseKinematics_Response__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _InverseKinematics_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_InverseKinematics_Response,
  get_message_typesupport_handle_function,
  &human_interfaces__srv__InverseKinematics_Response__get_type_hash,
  &human_interfaces__srv__InverseKinematics_Response__get_type_description,
  &human_interfaces__srv__InverseKinematics_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, human_interfaces, srv, InverseKinematics_Response)() {
  return &_InverseKinematics_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "human_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "human_interfaces/srv/detail/inverse_kinematics__struct.h"
// already included above
// #include "human_interfaces/srv/detail/inverse_kinematics__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions

bool cdr_serialize_human_interfaces__srv__InverseKinematics_Request(
  const human_interfaces__srv__InverseKinematics_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_human_interfaces__srv__InverseKinematics_Request(
  eprosima::fastcdr::Cdr & cdr,
  human_interfaces__srv__InverseKinematics_Request * ros_message);

size_t get_serialized_size_human_interfaces__srv__InverseKinematics_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_human_interfaces__srv__InverseKinematics_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_human_interfaces__srv__InverseKinematics_Request(
  const human_interfaces__srv__InverseKinematics_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_human_interfaces__srv__InverseKinematics_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_human_interfaces__srv__InverseKinematics_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, human_interfaces, srv, InverseKinematics_Request)();

bool cdr_serialize_human_interfaces__srv__InverseKinematics_Response(
  const human_interfaces__srv__InverseKinematics_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_human_interfaces__srv__InverseKinematics_Response(
  eprosima::fastcdr::Cdr & cdr,
  human_interfaces__srv__InverseKinematics_Response * ros_message);

size_t get_serialized_size_human_interfaces__srv__InverseKinematics_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_human_interfaces__srv__InverseKinematics_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_human_interfaces__srv__InverseKinematics_Response(
  const human_interfaces__srv__InverseKinematics_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_human_interfaces__srv__InverseKinematics_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_human_interfaces__srv__InverseKinematics_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, human_interfaces, srv, InverseKinematics_Response)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_human_interfaces
bool cdr_serialize_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_human_interfaces
bool cdr_deserialize_service_msgs__msg__ServiceEventInfo(
  eprosima::fastcdr::Cdr & cdr,
  service_msgs__msg__ServiceEventInfo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_human_interfaces
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_human_interfaces
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_human_interfaces
bool cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_human_interfaces
size_t get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_human_interfaces
size_t max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_human_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();


using _InverseKinematics_Event__ros_msg_type = human_interfaces__srv__InverseKinematics_Event;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_human_interfaces
bool cdr_serialize_human_interfaces__srv__InverseKinematics_Event(
  const human_interfaces__srv__InverseKinematics_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_human_interfaces__srv__InverseKinematics_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_human_interfaces__srv__InverseKinematics_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_human_interfaces
bool cdr_deserialize_human_interfaces__srv__InverseKinematics_Event(
  eprosima::fastcdr::Cdr & cdr,
  human_interfaces__srv__InverseKinematics_Event * ros_message)
{
  // Field name: info
  {
    cdr_deserialize_service_msgs__msg__ServiceEventInfo(cdr, &ros_message->info);
  }

  // Field name: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->request.data) {
      human_interfaces__srv__InverseKinematics_Request__Sequence__fini(&ros_message->request);
    }
    if (!human_interfaces__srv__InverseKinematics_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_human_interfaces__srv__InverseKinematics_Request(cdr, &array_ptr[i]);
    }
  }

  // Field name: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->response.data) {
      human_interfaces__srv__InverseKinematics_Response__Sequence__fini(&ros_message->response);
    }
    if (!human_interfaces__srv__InverseKinematics_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_human_interfaces__srv__InverseKinematics_Response(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_human_interfaces
size_t get_serialized_size_human_interfaces__srv__InverseKinematics_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _InverseKinematics_Event__ros_msg_type * ros_message = static_cast<const _InverseKinematics_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_human_interfaces__srv__InverseKinematics_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_human_interfaces__srv__InverseKinematics_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_human_interfaces
size_t max_serialized_size_human_interfaces__srv__InverseKinematics_Event(
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

  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_human_interfaces__srv__InverseKinematics_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_human_interfaces__srv__InverseKinematics_Response(
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
    using DataType = human_interfaces__srv__InverseKinematics_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_human_interfaces
bool cdr_serialize_key_human_interfaces__srv__InverseKinematics_Event(
  const human_interfaces__srv__InverseKinematics_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_human_interfaces__srv__InverseKinematics_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_human_interfaces__srv__InverseKinematics_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_human_interfaces
size_t get_serialized_size_key_human_interfaces__srv__InverseKinematics_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _InverseKinematics_Event__ros_msg_type * ros_message = static_cast<const _InverseKinematics_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_human_interfaces__srv__InverseKinematics_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_human_interfaces__srv__InverseKinematics_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_human_interfaces
size_t max_serialized_size_key_human_interfaces__srv__InverseKinematics_Event(
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
  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_human_interfaces__srv__InverseKinematics_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_human_interfaces__srv__InverseKinematics_Response(
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
    using DataType = human_interfaces__srv__InverseKinematics_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _InverseKinematics_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const human_interfaces__srv__InverseKinematics_Event * ros_message = static_cast<const human_interfaces__srv__InverseKinematics_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_human_interfaces__srv__InverseKinematics_Event(ros_message, cdr);
}

static bool _InverseKinematics_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  human_interfaces__srv__InverseKinematics_Event * ros_message = static_cast<human_interfaces__srv__InverseKinematics_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_human_interfaces__srv__InverseKinematics_Event(cdr, ros_message);
}

static uint32_t _InverseKinematics_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_human_interfaces__srv__InverseKinematics_Event(
      untyped_ros_message, 0));
}

static size_t _InverseKinematics_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_human_interfaces__srv__InverseKinematics_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_InverseKinematics_Event = {
  "human_interfaces::srv",
  "InverseKinematics_Event",
  _InverseKinematics_Event__cdr_serialize,
  _InverseKinematics_Event__cdr_deserialize,
  _InverseKinematics_Event__get_serialized_size,
  _InverseKinematics_Event__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _InverseKinematics_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_InverseKinematics_Event,
  get_message_typesupport_handle_function,
  &human_interfaces__srv__InverseKinematics_Event__get_type_hash,
  &human_interfaces__srv__InverseKinematics_Event__get_type_description,
  &human_interfaces__srv__InverseKinematics_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, human_interfaces, srv, InverseKinematics_Event)() {
  return &_InverseKinematics_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "human_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "human_interfaces/srv/inverse_kinematics.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t InverseKinematics__callbacks = {
  "human_interfaces::srv",
  "InverseKinematics",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, human_interfaces, srv, InverseKinematics_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, human_interfaces, srv, InverseKinematics_Response)(),
};

static rosidl_service_type_support_t InverseKinematics__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &InverseKinematics__callbacks,
  get_service_typesupport_handle_function,
  &_InverseKinematics_Request__type_support,
  &_InverseKinematics_Response__type_support,
  &_InverseKinematics_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    human_interfaces,
    srv,
    InverseKinematics
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    human_interfaces,
    srv,
    InverseKinematics
  ),
  &human_interfaces__srv__InverseKinematics__get_type_hash,
  &human_interfaces__srv__InverseKinematics__get_type_description,
  &human_interfaces__srv__InverseKinematics__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, human_interfaces, srv, InverseKinematics)() {
  return &InverseKinematics__handle;
}

#if defined(__cplusplus)
}
#endif
