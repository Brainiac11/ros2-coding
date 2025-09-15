// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from controller_manager_msgs:msg/NamedLifecycleState.idl
// generated code does not contain a copyright notice
#include "controller_manager_msgs/msg/detail/named_lifecycle_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "controller_manager_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "controller_manager_msgs/msg/detail/named_lifecycle_state__struct.h"
#include "controller_manager_msgs/msg/detail/named_lifecycle_state__functions.h"
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

#include "lifecycle_msgs/msg/detail/state__functions.h"  // state
#include "rosidl_runtime_c/string.h"  // name
#include "rosidl_runtime_c/string_functions.h"  // name

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_controller_manager_msgs
bool cdr_serialize_lifecycle_msgs__msg__State(
  const lifecycle_msgs__msg__State * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_controller_manager_msgs
bool cdr_deserialize_lifecycle_msgs__msg__State(
  eprosima::fastcdr::Cdr & cdr,
  lifecycle_msgs__msg__State * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_controller_manager_msgs
size_t get_serialized_size_lifecycle_msgs__msg__State(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_controller_manager_msgs
size_t max_serialized_size_lifecycle_msgs__msg__State(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_controller_manager_msgs
bool cdr_serialize_key_lifecycle_msgs__msg__State(
  const lifecycle_msgs__msg__State * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_controller_manager_msgs
size_t get_serialized_size_key_lifecycle_msgs__msg__State(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_controller_manager_msgs
size_t max_serialized_size_key_lifecycle_msgs__msg__State(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_controller_manager_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lifecycle_msgs, msg, State)();


using _NamedLifecycleState__ros_msg_type = controller_manager_msgs__msg__NamedLifecycleState;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_controller_manager_msgs
bool cdr_serialize_controller_manager_msgs__msg__NamedLifecycleState(
  const controller_manager_msgs__msg__NamedLifecycleState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
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

  // Field name: state
  {
    cdr_serialize_lifecycle_msgs__msg__State(
      &ros_message->state, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_controller_manager_msgs
bool cdr_deserialize_controller_manager_msgs__msg__NamedLifecycleState(
  eprosima::fastcdr::Cdr & cdr,
  controller_manager_msgs__msg__NamedLifecycleState * ros_message)
{
  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }

  // Field name: state
  {
    cdr_deserialize_lifecycle_msgs__msg__State(cdr, &ros_message->state);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_controller_manager_msgs
size_t get_serialized_size_controller_manager_msgs__msg__NamedLifecycleState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NamedLifecycleState__ros_msg_type * ros_message = static_cast<const _NamedLifecycleState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);

  // Field name: state
  current_alignment += get_serialized_size_lifecycle_msgs__msg__State(
    &(ros_message->state), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_controller_manager_msgs
size_t max_serialized_size_controller_manager_msgs__msg__NamedLifecycleState(
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

  // Field name: name
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

  // Field name: state
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_lifecycle_msgs__msg__State(
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
    using DataType = controller_manager_msgs__msg__NamedLifecycleState;
    is_plain =
      (
      offsetof(DataType, state) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_controller_manager_msgs
bool cdr_serialize_key_controller_manager_msgs__msg__NamedLifecycleState(
  const controller_manager_msgs__msg__NamedLifecycleState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
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

  // Field name: state
  {
    cdr_serialize_key_lifecycle_msgs__msg__State(
      &ros_message->state, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_controller_manager_msgs
size_t get_serialized_size_key_controller_manager_msgs__msg__NamedLifecycleState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NamedLifecycleState__ros_msg_type * ros_message = static_cast<const _NamedLifecycleState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);

  // Field name: state
  current_alignment += get_serialized_size_key_lifecycle_msgs__msg__State(
    &(ros_message->state), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_controller_manager_msgs
size_t max_serialized_size_key_controller_manager_msgs__msg__NamedLifecycleState(
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
  // Field name: name
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

  // Field name: state
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_lifecycle_msgs__msg__State(
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
    using DataType = controller_manager_msgs__msg__NamedLifecycleState;
    is_plain =
      (
      offsetof(DataType, state) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _NamedLifecycleState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const controller_manager_msgs__msg__NamedLifecycleState * ros_message = static_cast<const controller_manager_msgs__msg__NamedLifecycleState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_controller_manager_msgs__msg__NamedLifecycleState(ros_message, cdr);
}

static bool _NamedLifecycleState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  controller_manager_msgs__msg__NamedLifecycleState * ros_message = static_cast<controller_manager_msgs__msg__NamedLifecycleState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_controller_manager_msgs__msg__NamedLifecycleState(cdr, ros_message);
}

static uint32_t _NamedLifecycleState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_controller_manager_msgs__msg__NamedLifecycleState(
      untyped_ros_message, 0));
}

static size_t _NamedLifecycleState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_controller_manager_msgs__msg__NamedLifecycleState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_NamedLifecycleState = {
  "controller_manager_msgs::msg",
  "NamedLifecycleState",
  _NamedLifecycleState__cdr_serialize,
  _NamedLifecycleState__cdr_deserialize,
  _NamedLifecycleState__get_serialized_size,
  _NamedLifecycleState__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _NamedLifecycleState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NamedLifecycleState,
  get_message_typesupport_handle_function,
  &controller_manager_msgs__msg__NamedLifecycleState__get_type_hash,
  &controller_manager_msgs__msg__NamedLifecycleState__get_type_description,
  &controller_manager_msgs__msg__NamedLifecycleState__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, controller_manager_msgs, msg, NamedLifecycleState)() {
  return &_NamedLifecycleState__type_support;
}

#if defined(__cplusplus)
}
#endif
