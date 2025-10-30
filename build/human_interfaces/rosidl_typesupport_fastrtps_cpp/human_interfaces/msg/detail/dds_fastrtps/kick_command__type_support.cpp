// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from human_interfaces:msg/KickCommand.idl
// generated code does not contain a copyright notice
#include "human_interfaces/msg/detail/kick_command__rosidl_typesupport_fastrtps_cpp.hpp"
#include "human_interfaces/msg/detail/kick_command__functions.h"
#include "human_interfaces/msg/detail/kick_command__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace human_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_human_interfaces
cdr_serialize(
  const human_interfaces::msg::KickCommand & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: should_kick
  cdr << (ros_message.should_kick ? true : false);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_human_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  human_interfaces::msg::KickCommand & ros_message)
{
  // Member: should_kick
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.should_kick = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_human_interfaces
get_serialized_size(
  const human_interfaces::msg::KickCommand & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: should_kick
  {
    size_t item_size = sizeof(ros_message.should_kick);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_human_interfaces
max_serialized_size_KickCommand(
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

  // Member: should_kick
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = human_interfaces::msg::KickCommand;
    is_plain =
      (
      offsetof(DataType, should_kick) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_human_interfaces
cdr_serialize_key(
  const human_interfaces::msg::KickCommand & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: should_kick
  cdr << (ros_message.should_kick ? true : false);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_human_interfaces
get_serialized_size_key(
  const human_interfaces::msg::KickCommand & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: should_kick
  {
    size_t item_size = sizeof(ros_message.should_kick);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_human_interfaces
max_serialized_size_key_KickCommand(
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

  // Member: should_kick
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = human_interfaces::msg::KickCommand;
    is_plain =
      (
      offsetof(DataType, should_kick) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _KickCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const human_interfaces::msg::KickCommand *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _KickCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<human_interfaces::msg::KickCommand *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _KickCommand__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const human_interfaces::msg::KickCommand *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _KickCommand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_KickCommand(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _KickCommand__callbacks = {
  "human_interfaces::msg",
  "KickCommand",
  _KickCommand__cdr_serialize,
  _KickCommand__cdr_deserialize,
  _KickCommand__get_serialized_size,
  _KickCommand__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _KickCommand__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_KickCommand__callbacks,
  get_message_typesupport_handle_function,
  &human_interfaces__msg__KickCommand__get_type_hash,
  &human_interfaces__msg__KickCommand__get_type_description,
  &human_interfaces__msg__KickCommand__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace human_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_human_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<human_interfaces::msg::KickCommand>()
{
  return &human_interfaces::msg::typesupport_fastrtps_cpp::_KickCommand__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, human_interfaces, msg, KickCommand)() {
  return &human_interfaces::msg::typesupport_fastrtps_cpp::_KickCommand__handle;
}

#ifdef __cplusplus
}
#endif
