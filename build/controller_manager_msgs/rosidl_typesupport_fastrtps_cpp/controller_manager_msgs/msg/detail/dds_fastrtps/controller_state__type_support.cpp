// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from controller_manager_msgs:msg/ControllerState.idl
// generated code does not contain a copyright notice
#include "controller_manager_msgs/msg/detail/controller_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "controller_manager_msgs/msg/detail/controller_state__functions.h"
#include "controller_manager_msgs/msg/detail/controller_state__struct.hpp"

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
namespace controller_manager_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const controller_manager_msgs::msg::ChainConnection &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  controller_manager_msgs::msg::ChainConnection &);
size_t get_serialized_size(
  const controller_manager_msgs::msg::ChainConnection &,
  size_t current_alignment);
size_t
max_serialized_size_ChainConnection(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const controller_manager_msgs::msg::ChainConnection &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const controller_manager_msgs::msg::ChainConnection &,
  size_t current_alignment);
size_t
max_serialized_size_key_ChainConnection(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace controller_manager_msgs


namespace controller_manager_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_controller_manager_msgs
cdr_serialize(
  const controller_manager_msgs::msg::ControllerState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: name
  cdr << ros_message.name;

  // Member: state
  cdr << ros_message.state;

  // Member: type
  cdr << ros_message.type;

  // Member: is_async
  cdr << (ros_message.is_async ? true : false);

  // Member: update_rate
  cdr << ros_message.update_rate;

  // Member: claimed_interfaces
  {
    cdr << ros_message.claimed_interfaces;
  }

  // Member: required_command_interfaces
  {
    cdr << ros_message.required_command_interfaces;
  }

  // Member: required_state_interfaces
  {
    cdr << ros_message.required_state_interfaces;
  }

  // Member: is_chainable
  cdr << (ros_message.is_chainable ? true : false);

  // Member: is_chained
  cdr << (ros_message.is_chained ? true : false);

  // Member: exported_state_interfaces
  {
    cdr << ros_message.exported_state_interfaces;
  }

  // Member: reference_interfaces
  {
    cdr << ros_message.reference_interfaces;
  }

  // Member: chain_connections
  {
    size_t size = ros_message.chain_connections.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      controller_manager_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.chain_connections[i],
        cdr);
    }
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_controller_manager_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  controller_manager_msgs::msg::ControllerState & ros_message)
{
  // Member: name
  cdr >> ros_message.name;

  // Member: state
  cdr >> ros_message.state;

  // Member: type
  cdr >> ros_message.type;

  // Member: is_async
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_async = tmp ? true : false;
  }

  // Member: update_rate
  cdr >> ros_message.update_rate;

  // Member: claimed_interfaces
  {
    cdr >> ros_message.claimed_interfaces;
  }

  // Member: required_command_interfaces
  {
    cdr >> ros_message.required_command_interfaces;
  }

  // Member: required_state_interfaces
  {
    cdr >> ros_message.required_state_interfaces;
  }

  // Member: is_chainable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_chainable = tmp ? true : false;
  }

  // Member: is_chained
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_chained = tmp ? true : false;
  }

  // Member: exported_state_interfaces
  {
    cdr >> ros_message.exported_state_interfaces;
  }

  // Member: reference_interfaces
  {
    cdr >> ros_message.reference_interfaces;
  }

  // Member: chain_connections
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

    ros_message.chain_connections.resize(size);
    for (size_t i = 0; i < size; i++) {
      controller_manager_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.chain_connections[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_controller_manager_msgs
get_serialized_size(
  const controller_manager_msgs::msg::ControllerState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.name.size() + 1);

  // Member: state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.state.size() + 1);

  // Member: type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.type.size() + 1);

  // Member: is_async
  {
    size_t item_size = sizeof(ros_message.is_async);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: update_rate
  {
    size_t item_size = sizeof(ros_message.update_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: claimed_interfaces
  {
    size_t array_size = ros_message.claimed_interfaces.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.claimed_interfaces[index].size() + 1);
    }
  }

  // Member: required_command_interfaces
  {
    size_t array_size = ros_message.required_command_interfaces.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.required_command_interfaces[index].size() + 1);
    }
  }

  // Member: required_state_interfaces
  {
    size_t array_size = ros_message.required_state_interfaces.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.required_state_interfaces[index].size() + 1);
    }
  }

  // Member: is_chainable
  {
    size_t item_size = sizeof(ros_message.is_chainable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_chained
  {
    size_t item_size = sizeof(ros_message.is_chained);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: exported_state_interfaces
  {
    size_t array_size = ros_message.exported_state_interfaces.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.exported_state_interfaces[index].size() + 1);
    }
  }

  // Member: reference_interfaces
  {
    size_t array_size = ros_message.reference_interfaces.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.reference_interfaces[index].size() + 1);
    }
  }

  // Member: chain_connections
  {
    size_t array_size = ros_message.chain_connections.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        controller_manager_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.chain_connections[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_controller_manager_msgs
max_serialized_size_ControllerState(
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

  // Member: name
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
  // Member: state
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
  // Member: type
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
  // Member: is_async
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: update_rate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: claimed_interfaces
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: required_command_interfaces
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: required_state_interfaces
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: is_chainable
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: is_chained
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: exported_state_interfaces
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: reference_interfaces
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: chain_connections
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        controller_manager_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ChainConnection(
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
    using DataType = controller_manager_msgs::msg::ControllerState;
    is_plain =
      (
      offsetof(DataType, chain_connections) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_controller_manager_msgs
cdr_serialize_key(
  const controller_manager_msgs::msg::ControllerState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: name
  cdr << ros_message.name;

  // Member: state
  cdr << ros_message.state;

  // Member: type
  cdr << ros_message.type;

  // Member: is_async
  cdr << (ros_message.is_async ? true : false);

  // Member: update_rate
  cdr << ros_message.update_rate;

  // Member: claimed_interfaces
  {
    cdr << ros_message.claimed_interfaces;
  }

  // Member: required_command_interfaces
  {
    cdr << ros_message.required_command_interfaces;
  }

  // Member: required_state_interfaces
  {
    cdr << ros_message.required_state_interfaces;
  }

  // Member: is_chainable
  cdr << (ros_message.is_chainable ? true : false);

  // Member: is_chained
  cdr << (ros_message.is_chained ? true : false);

  // Member: exported_state_interfaces
  {
    cdr << ros_message.exported_state_interfaces;
  }

  // Member: reference_interfaces
  {
    cdr << ros_message.reference_interfaces;
  }

  // Member: chain_connections
  {
    size_t size = ros_message.chain_connections.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      controller_manager_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.chain_connections[i],
        cdr);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_controller_manager_msgs
get_serialized_size_key(
  const controller_manager_msgs::msg::ControllerState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.name.size() + 1);

  // Member: state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.state.size() + 1);

  // Member: type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.type.size() + 1);

  // Member: is_async
  {
    size_t item_size = sizeof(ros_message.is_async);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: update_rate
  {
    size_t item_size = sizeof(ros_message.update_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: claimed_interfaces
  {
    size_t array_size = ros_message.claimed_interfaces.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.claimed_interfaces[index].size() + 1);
    }
  }

  // Member: required_command_interfaces
  {
    size_t array_size = ros_message.required_command_interfaces.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.required_command_interfaces[index].size() + 1);
    }
  }

  // Member: required_state_interfaces
  {
    size_t array_size = ros_message.required_state_interfaces.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.required_state_interfaces[index].size() + 1);
    }
  }

  // Member: is_chainable
  {
    size_t item_size = sizeof(ros_message.is_chainable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_chained
  {
    size_t item_size = sizeof(ros_message.is_chained);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: exported_state_interfaces
  {
    size_t array_size = ros_message.exported_state_interfaces.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.exported_state_interfaces[index].size() + 1);
    }
  }

  // Member: reference_interfaces
  {
    size_t array_size = ros_message.reference_interfaces.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.reference_interfaces[index].size() + 1);
    }
  }

  // Member: chain_connections
  {
    size_t array_size = ros_message.chain_connections.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        controller_manager_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.chain_connections[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_controller_manager_msgs
max_serialized_size_key_ControllerState(
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

  // Member: name
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

  // Member: state
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

  // Member: type
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

  // Member: is_async
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: update_rate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: claimed_interfaces
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: required_command_interfaces
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: required_state_interfaces
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: is_chainable
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_chained
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: exported_state_interfaces
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: reference_interfaces
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: chain_connections
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        controller_manager_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_ChainConnection(
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
    using DataType = controller_manager_msgs::msg::ControllerState;
    is_plain =
      (
      offsetof(DataType, chain_connections) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _ControllerState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const controller_manager_msgs::msg::ControllerState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ControllerState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<controller_manager_msgs::msg::ControllerState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ControllerState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const controller_manager_msgs::msg::ControllerState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ControllerState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ControllerState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ControllerState__callbacks = {
  "controller_manager_msgs::msg",
  "ControllerState",
  _ControllerState__cdr_serialize,
  _ControllerState__cdr_deserialize,
  _ControllerState__get_serialized_size,
  _ControllerState__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ControllerState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ControllerState__callbacks,
  get_message_typesupport_handle_function,
  &controller_manager_msgs__msg__ControllerState__get_type_hash,
  &controller_manager_msgs__msg__ControllerState__get_type_description,
  &controller_manager_msgs__msg__ControllerState__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace controller_manager_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_controller_manager_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<controller_manager_msgs::msg::ControllerState>()
{
  return &controller_manager_msgs::msg::typesupport_fastrtps_cpp::_ControllerState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, controller_manager_msgs, msg, ControllerState)() {
  return &controller_manager_msgs::msg::typesupport_fastrtps_cpp::_ControllerState__handle;
}

#ifdef __cplusplus
}
#endif
