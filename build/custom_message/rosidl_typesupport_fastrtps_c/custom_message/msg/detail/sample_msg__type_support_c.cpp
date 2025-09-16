// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_message:msg/SampleMsg.idl
// generated code does not contain a copyright notice
#include "custom_message/msg/detail/sample_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_message/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_message/msg/detail/sample_msg__struct.h"
#include "custom_message/msg/detail/sample_msg__functions.h"
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

#include "std_msgs/msg/detail/string__functions.h"  // my_string

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_custom_message
bool cdr_serialize_std_msgs__msg__String(
  const std_msgs__msg__String * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_custom_message
bool cdr_deserialize_std_msgs__msg__String(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__String * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_custom_message
size_t get_serialized_size_std_msgs__msg__String(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_custom_message
size_t max_serialized_size_std_msgs__msg__String(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_custom_message
bool cdr_serialize_key_std_msgs__msg__String(
  const std_msgs__msg__String * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_custom_message
size_t get_serialized_size_key_std_msgs__msg__String(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_custom_message
size_t max_serialized_size_key_std_msgs__msg__String(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_custom_message
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, String)();


using _SampleMsg__ros_msg_type = custom_message__msg__SampleMsg;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_message
bool cdr_serialize_custom_message__msg__SampleMsg(
  const custom_message__msg__SampleMsg * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: my_string
  {
    cdr_serialize_std_msgs__msg__String(
      &ros_message->my_string, cdr);
  }

  // Field name: my_num
  {
    cdr << ros_message->my_num;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_message
bool cdr_deserialize_custom_message__msg__SampleMsg(
  eprosima::fastcdr::Cdr & cdr,
  custom_message__msg__SampleMsg * ros_message)
{
  // Field name: my_string
  {
    cdr_deserialize_std_msgs__msg__String(cdr, &ros_message->my_string);
  }

  // Field name: my_num
  {
    cdr >> ros_message->my_num;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_message
size_t get_serialized_size_custom_message__msg__SampleMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SampleMsg__ros_msg_type * ros_message = static_cast<const _SampleMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: my_string
  current_alignment += get_serialized_size_std_msgs__msg__String(
    &(ros_message->my_string), current_alignment);

  // Field name: my_num
  {
    size_t item_size = sizeof(ros_message->my_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_message
size_t max_serialized_size_custom_message__msg__SampleMsg(
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

  // Field name: my_string
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

  // Field name: my_num
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
    using DataType = custom_message__msg__SampleMsg;
    is_plain =
      (
      offsetof(DataType, my_num) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_message
bool cdr_serialize_key_custom_message__msg__SampleMsg(
  const custom_message__msg__SampleMsg * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: my_string
  {
    cdr_serialize_key_std_msgs__msg__String(
      &ros_message->my_string, cdr);
  }

  // Field name: my_num
  {
    cdr << ros_message->my_num;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_message
size_t get_serialized_size_key_custom_message__msg__SampleMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SampleMsg__ros_msg_type * ros_message = static_cast<const _SampleMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: my_string
  current_alignment += get_serialized_size_key_std_msgs__msg__String(
    &(ros_message->my_string), current_alignment);

  // Field name: my_num
  {
    size_t item_size = sizeof(ros_message->my_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_message
size_t max_serialized_size_key_custom_message__msg__SampleMsg(
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
  // Field name: my_string
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

  // Field name: my_num
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
    using DataType = custom_message__msg__SampleMsg;
    is_plain =
      (
      offsetof(DataType, my_num) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SampleMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const custom_message__msg__SampleMsg * ros_message = static_cast<const custom_message__msg__SampleMsg *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_custom_message__msg__SampleMsg(ros_message, cdr);
}

static bool _SampleMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  custom_message__msg__SampleMsg * ros_message = static_cast<custom_message__msg__SampleMsg *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_custom_message__msg__SampleMsg(cdr, ros_message);
}

static uint32_t _SampleMsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_message__msg__SampleMsg(
      untyped_ros_message, 0));
}

static size_t _SampleMsg__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_custom_message__msg__SampleMsg(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SampleMsg = {
  "custom_message::msg",
  "SampleMsg",
  _SampleMsg__cdr_serialize,
  _SampleMsg__cdr_deserialize,
  _SampleMsg__get_serialized_size,
  _SampleMsg__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SampleMsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SampleMsg,
  get_message_typesupport_handle_function,
  &custom_message__msg__SampleMsg__get_type_hash,
  &custom_message__msg__SampleMsg__get_type_description,
  &custom_message__msg__SampleMsg__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_message, msg, SampleMsg)() {
  return &_SampleMsg__type_support;
}

#if defined(__cplusplus)
}
#endif
