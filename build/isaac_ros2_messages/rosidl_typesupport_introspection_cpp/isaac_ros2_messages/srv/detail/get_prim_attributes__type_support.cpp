// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from isaac_ros2_messages:srv/GetPrimAttributes.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "isaac_ros2_messages/srv/detail/get_prim_attributes__functions.h"
#include "isaac_ros2_messages/srv/detail/get_prim_attributes__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace isaac_ros2_messages
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetPrimAttributes_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) isaac_ros2_messages::srv::GetPrimAttributes_Request(_init);
}

void GetPrimAttributes_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<isaac_ros2_messages::srv::GetPrimAttributes_Request *>(message_memory);
  typed_message->~GetPrimAttributes_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetPrimAttributes_Request_message_member_array[1] = {
  {
    "path",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isaac_ros2_messages::srv::GetPrimAttributes_Request, path),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetPrimAttributes_Request_message_members = {
  "isaac_ros2_messages::srv",  // message namespace
  "GetPrimAttributes_Request",  // message name
  1,  // number of fields
  sizeof(isaac_ros2_messages::srv::GetPrimAttributes_Request),
  false,  // has_any_key_member_
  GetPrimAttributes_Request_message_member_array,  // message members
  GetPrimAttributes_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetPrimAttributes_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetPrimAttributes_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetPrimAttributes_Request_message_members,
  get_message_typesupport_handle_function,
  &isaac_ros2_messages__srv__GetPrimAttributes_Request__get_type_hash,
  &isaac_ros2_messages__srv__GetPrimAttributes_Request__get_type_description,
  &isaac_ros2_messages__srv__GetPrimAttributes_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace isaac_ros2_messages


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<isaac_ros2_messages::srv::GetPrimAttributes_Request>()
{
  return &::isaac_ros2_messages::srv::rosidl_typesupport_introspection_cpp::GetPrimAttributes_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, isaac_ros2_messages, srv, GetPrimAttributes_Request)() {
  return &::isaac_ros2_messages::srv::rosidl_typesupport_introspection_cpp::GetPrimAttributes_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "isaac_ros2_messages/srv/detail/get_prim_attributes__functions.h"
// already included above
// #include "isaac_ros2_messages/srv/detail/get_prim_attributes__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace isaac_ros2_messages
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetPrimAttributes_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) isaac_ros2_messages::srv::GetPrimAttributes_Response(_init);
}

void GetPrimAttributes_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<isaac_ros2_messages::srv::GetPrimAttributes_Response *>(message_memory);
  typed_message->~GetPrimAttributes_Response();
}

size_t size_function__GetPrimAttributes_Response__names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetPrimAttributes_Response__names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__GetPrimAttributes_Response__names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetPrimAttributes_Response__names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__GetPrimAttributes_Response__names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__GetPrimAttributes_Response__names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__GetPrimAttributes_Response__names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__GetPrimAttributes_Response__names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetPrimAttributes_Response__displays(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetPrimAttributes_Response__displays(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__GetPrimAttributes_Response__displays(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetPrimAttributes_Response__displays(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__GetPrimAttributes_Response__displays(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__GetPrimAttributes_Response__displays(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__GetPrimAttributes_Response__displays(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__GetPrimAttributes_Response__displays(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetPrimAttributes_Response__types(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetPrimAttributes_Response__types(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__GetPrimAttributes_Response__types(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetPrimAttributes_Response__types(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__GetPrimAttributes_Response__types(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__GetPrimAttributes_Response__types(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__GetPrimAttributes_Response__types(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__GetPrimAttributes_Response__types(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetPrimAttributes_Response_message_member_array[5] = {
  {
    "names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isaac_ros2_messages::srv::GetPrimAttributes_Response, names),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetPrimAttributes_Response__names,  // size() function pointer
    get_const_function__GetPrimAttributes_Response__names,  // get_const(index) function pointer
    get_function__GetPrimAttributes_Response__names,  // get(index) function pointer
    fetch_function__GetPrimAttributes_Response__names,  // fetch(index, &value) function pointer
    assign_function__GetPrimAttributes_Response__names,  // assign(index, value) function pointer
    resize_function__GetPrimAttributes_Response__names  // resize(index) function pointer
  },
  {
    "displays",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isaac_ros2_messages::srv::GetPrimAttributes_Response, displays),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetPrimAttributes_Response__displays,  // size() function pointer
    get_const_function__GetPrimAttributes_Response__displays,  // get_const(index) function pointer
    get_function__GetPrimAttributes_Response__displays,  // get(index) function pointer
    fetch_function__GetPrimAttributes_Response__displays,  // fetch(index, &value) function pointer
    assign_function__GetPrimAttributes_Response__displays,  // assign(index, value) function pointer
    resize_function__GetPrimAttributes_Response__displays  // resize(index) function pointer
  },
  {
    "types",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isaac_ros2_messages::srv::GetPrimAttributes_Response, types),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetPrimAttributes_Response__types,  // size() function pointer
    get_const_function__GetPrimAttributes_Response__types,  // get_const(index) function pointer
    get_function__GetPrimAttributes_Response__types,  // get(index) function pointer
    fetch_function__GetPrimAttributes_Response__types,  // fetch(index, &value) function pointer
    assign_function__GetPrimAttributes_Response__types,  // assign(index, value) function pointer
    resize_function__GetPrimAttributes_Response__types  // resize(index) function pointer
  },
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isaac_ros2_messages::srv::GetPrimAttributes_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isaac_ros2_messages::srv::GetPrimAttributes_Response, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetPrimAttributes_Response_message_members = {
  "isaac_ros2_messages::srv",  // message namespace
  "GetPrimAttributes_Response",  // message name
  5,  // number of fields
  sizeof(isaac_ros2_messages::srv::GetPrimAttributes_Response),
  false,  // has_any_key_member_
  GetPrimAttributes_Response_message_member_array,  // message members
  GetPrimAttributes_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetPrimAttributes_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetPrimAttributes_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetPrimAttributes_Response_message_members,
  get_message_typesupport_handle_function,
  &isaac_ros2_messages__srv__GetPrimAttributes_Response__get_type_hash,
  &isaac_ros2_messages__srv__GetPrimAttributes_Response__get_type_description,
  &isaac_ros2_messages__srv__GetPrimAttributes_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace isaac_ros2_messages


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<isaac_ros2_messages::srv::GetPrimAttributes_Response>()
{
  return &::isaac_ros2_messages::srv::rosidl_typesupport_introspection_cpp::GetPrimAttributes_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, isaac_ros2_messages, srv, GetPrimAttributes_Response)() {
  return &::isaac_ros2_messages::srv::rosidl_typesupport_introspection_cpp::GetPrimAttributes_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "isaac_ros2_messages/srv/detail/get_prim_attributes__functions.h"
// already included above
// #include "isaac_ros2_messages/srv/detail/get_prim_attributes__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace isaac_ros2_messages
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetPrimAttributes_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) isaac_ros2_messages::srv::GetPrimAttributes_Event(_init);
}

void GetPrimAttributes_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<isaac_ros2_messages::srv::GetPrimAttributes_Event *>(message_memory);
  typed_message->~GetPrimAttributes_Event();
}

size_t size_function__GetPrimAttributes_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<isaac_ros2_messages::srv::GetPrimAttributes_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetPrimAttributes_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<isaac_ros2_messages::srv::GetPrimAttributes_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__GetPrimAttributes_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<isaac_ros2_messages::srv::GetPrimAttributes_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetPrimAttributes_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const isaac_ros2_messages::srv::GetPrimAttributes_Request *>(
    get_const_function__GetPrimAttributes_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<isaac_ros2_messages::srv::GetPrimAttributes_Request *>(untyped_value);
  value = item;
}

void assign_function__GetPrimAttributes_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<isaac_ros2_messages::srv::GetPrimAttributes_Request *>(
    get_function__GetPrimAttributes_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const isaac_ros2_messages::srv::GetPrimAttributes_Request *>(untyped_value);
  item = value;
}

void resize_function__GetPrimAttributes_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<isaac_ros2_messages::srv::GetPrimAttributes_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetPrimAttributes_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<isaac_ros2_messages::srv::GetPrimAttributes_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetPrimAttributes_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<isaac_ros2_messages::srv::GetPrimAttributes_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__GetPrimAttributes_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<isaac_ros2_messages::srv::GetPrimAttributes_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetPrimAttributes_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const isaac_ros2_messages::srv::GetPrimAttributes_Response *>(
    get_const_function__GetPrimAttributes_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<isaac_ros2_messages::srv::GetPrimAttributes_Response *>(untyped_value);
  value = item;
}

void assign_function__GetPrimAttributes_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<isaac_ros2_messages::srv::GetPrimAttributes_Response *>(
    get_function__GetPrimAttributes_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const isaac_ros2_messages::srv::GetPrimAttributes_Response *>(untyped_value);
  item = value;
}

void resize_function__GetPrimAttributes_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<isaac_ros2_messages::srv::GetPrimAttributes_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetPrimAttributes_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isaac_ros2_messages::srv::GetPrimAttributes_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<isaac_ros2_messages::srv::GetPrimAttributes_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(isaac_ros2_messages::srv::GetPrimAttributes_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetPrimAttributes_Event__request,  // size() function pointer
    get_const_function__GetPrimAttributes_Event__request,  // get_const(index) function pointer
    get_function__GetPrimAttributes_Event__request,  // get(index) function pointer
    fetch_function__GetPrimAttributes_Event__request,  // fetch(index, &value) function pointer
    assign_function__GetPrimAttributes_Event__request,  // assign(index, value) function pointer
    resize_function__GetPrimAttributes_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<isaac_ros2_messages::srv::GetPrimAttributes_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(isaac_ros2_messages::srv::GetPrimAttributes_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetPrimAttributes_Event__response,  // size() function pointer
    get_const_function__GetPrimAttributes_Event__response,  // get_const(index) function pointer
    get_function__GetPrimAttributes_Event__response,  // get(index) function pointer
    fetch_function__GetPrimAttributes_Event__response,  // fetch(index, &value) function pointer
    assign_function__GetPrimAttributes_Event__response,  // assign(index, value) function pointer
    resize_function__GetPrimAttributes_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetPrimAttributes_Event_message_members = {
  "isaac_ros2_messages::srv",  // message namespace
  "GetPrimAttributes_Event",  // message name
  3,  // number of fields
  sizeof(isaac_ros2_messages::srv::GetPrimAttributes_Event),
  false,  // has_any_key_member_
  GetPrimAttributes_Event_message_member_array,  // message members
  GetPrimAttributes_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  GetPrimAttributes_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetPrimAttributes_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetPrimAttributes_Event_message_members,
  get_message_typesupport_handle_function,
  &isaac_ros2_messages__srv__GetPrimAttributes_Event__get_type_hash,
  &isaac_ros2_messages__srv__GetPrimAttributes_Event__get_type_description,
  &isaac_ros2_messages__srv__GetPrimAttributes_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace isaac_ros2_messages


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<isaac_ros2_messages::srv::GetPrimAttributes_Event>()
{
  return &::isaac_ros2_messages::srv::rosidl_typesupport_introspection_cpp::GetPrimAttributes_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, isaac_ros2_messages, srv, GetPrimAttributes_Event)() {
  return &::isaac_ros2_messages::srv::rosidl_typesupport_introspection_cpp::GetPrimAttributes_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "isaac_ros2_messages/srv/detail/get_prim_attributes__functions.h"
// already included above
// #include "isaac_ros2_messages/srv/detail/get_prim_attributes__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace isaac_ros2_messages
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetPrimAttributes_service_members = {
  "isaac_ros2_messages::srv",  // service namespace
  "GetPrimAttributes",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<isaac_ros2_messages::srv::GetPrimAttributes>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t GetPrimAttributes_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetPrimAttributes_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<isaac_ros2_messages::srv::GetPrimAttributes_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<isaac_ros2_messages::srv::GetPrimAttributes_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<isaac_ros2_messages::srv::GetPrimAttributes_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<isaac_ros2_messages::srv::GetPrimAttributes>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<isaac_ros2_messages::srv::GetPrimAttributes>,
  &isaac_ros2_messages__srv__GetPrimAttributes__get_type_hash,
  &isaac_ros2_messages__srv__GetPrimAttributes__get_type_description,
  &isaac_ros2_messages__srv__GetPrimAttributes__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace isaac_ros2_messages


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<isaac_ros2_messages::srv::GetPrimAttributes>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::isaac_ros2_messages::srv::rosidl_typesupport_introspection_cpp::GetPrimAttributes_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::isaac_ros2_messages::srv::GetPrimAttributes_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::isaac_ros2_messages::srv::GetPrimAttributes_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::isaac_ros2_messages::srv::GetPrimAttributes_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, isaac_ros2_messages, srv, GetPrimAttributes)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<isaac_ros2_messages::srv::GetPrimAttributes>();
}

#ifdef __cplusplus
}
#endif
