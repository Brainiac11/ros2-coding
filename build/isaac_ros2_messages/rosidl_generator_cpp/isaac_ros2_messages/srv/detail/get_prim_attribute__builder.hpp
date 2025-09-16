// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from isaac_ros2_messages:srv/GetPrimAttribute.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "isaac_ros2_messages/srv/get_prim_attribute.hpp"


#ifndef ISAAC_ROS2_MESSAGES__SRV__DETAIL__GET_PRIM_ATTRIBUTE__BUILDER_HPP_
#define ISAAC_ROS2_MESSAGES__SRV__DETAIL__GET_PRIM_ATTRIBUTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "isaac_ros2_messages/srv/detail/get_prim_attribute__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace isaac_ros2_messages
{

namespace srv
{

namespace builder
{

class Init_GetPrimAttribute_Request_attribute
{
public:
  explicit Init_GetPrimAttribute_Request_attribute(::isaac_ros2_messages::srv::GetPrimAttribute_Request & msg)
  : msg_(msg)
  {}
  ::isaac_ros2_messages::srv::GetPrimAttribute_Request attribute(::isaac_ros2_messages::srv::GetPrimAttribute_Request::_attribute_type arg)
  {
    msg_.attribute = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isaac_ros2_messages::srv::GetPrimAttribute_Request msg_;
};

class Init_GetPrimAttribute_Request_path
{
public:
  Init_GetPrimAttribute_Request_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPrimAttribute_Request_attribute path(::isaac_ros2_messages::srv::GetPrimAttribute_Request::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_GetPrimAttribute_Request_attribute(msg_);
  }

private:
  ::isaac_ros2_messages::srv::GetPrimAttribute_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::isaac_ros2_messages::srv::GetPrimAttribute_Request>()
{
  return isaac_ros2_messages::srv::builder::Init_GetPrimAttribute_Request_path();
}

}  // namespace isaac_ros2_messages


namespace isaac_ros2_messages
{

namespace srv
{

namespace builder
{

class Init_GetPrimAttribute_Response_message
{
public:
  explicit Init_GetPrimAttribute_Response_message(::isaac_ros2_messages::srv::GetPrimAttribute_Response & msg)
  : msg_(msg)
  {}
  ::isaac_ros2_messages::srv::GetPrimAttribute_Response message(::isaac_ros2_messages::srv::GetPrimAttribute_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isaac_ros2_messages::srv::GetPrimAttribute_Response msg_;
};

class Init_GetPrimAttribute_Response_success
{
public:
  explicit Init_GetPrimAttribute_Response_success(::isaac_ros2_messages::srv::GetPrimAttribute_Response & msg)
  : msg_(msg)
  {}
  Init_GetPrimAttribute_Response_message success(::isaac_ros2_messages::srv::GetPrimAttribute_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetPrimAttribute_Response_message(msg_);
  }

private:
  ::isaac_ros2_messages::srv::GetPrimAttribute_Response msg_;
};

class Init_GetPrimAttribute_Response_type
{
public:
  explicit Init_GetPrimAttribute_Response_type(::isaac_ros2_messages::srv::GetPrimAttribute_Response & msg)
  : msg_(msg)
  {}
  Init_GetPrimAttribute_Response_success type(::isaac_ros2_messages::srv::GetPrimAttribute_Response::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_GetPrimAttribute_Response_success(msg_);
  }

private:
  ::isaac_ros2_messages::srv::GetPrimAttribute_Response msg_;
};

class Init_GetPrimAttribute_Response_value
{
public:
  Init_GetPrimAttribute_Response_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPrimAttribute_Response_type value(::isaac_ros2_messages::srv::GetPrimAttribute_Response::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_GetPrimAttribute_Response_type(msg_);
  }

private:
  ::isaac_ros2_messages::srv::GetPrimAttribute_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::isaac_ros2_messages::srv::GetPrimAttribute_Response>()
{
  return isaac_ros2_messages::srv::builder::Init_GetPrimAttribute_Response_value();
}

}  // namespace isaac_ros2_messages


namespace isaac_ros2_messages
{

namespace srv
{

namespace builder
{

class Init_GetPrimAttribute_Event_response
{
public:
  explicit Init_GetPrimAttribute_Event_response(::isaac_ros2_messages::srv::GetPrimAttribute_Event & msg)
  : msg_(msg)
  {}
  ::isaac_ros2_messages::srv::GetPrimAttribute_Event response(::isaac_ros2_messages::srv::GetPrimAttribute_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isaac_ros2_messages::srv::GetPrimAttribute_Event msg_;
};

class Init_GetPrimAttribute_Event_request
{
public:
  explicit Init_GetPrimAttribute_Event_request(::isaac_ros2_messages::srv::GetPrimAttribute_Event & msg)
  : msg_(msg)
  {}
  Init_GetPrimAttribute_Event_response request(::isaac_ros2_messages::srv::GetPrimAttribute_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetPrimAttribute_Event_response(msg_);
  }

private:
  ::isaac_ros2_messages::srv::GetPrimAttribute_Event msg_;
};

class Init_GetPrimAttribute_Event_info
{
public:
  Init_GetPrimAttribute_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPrimAttribute_Event_request info(::isaac_ros2_messages::srv::GetPrimAttribute_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetPrimAttribute_Event_request(msg_);
  }

private:
  ::isaac_ros2_messages::srv::GetPrimAttribute_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::isaac_ros2_messages::srv::GetPrimAttribute_Event>()
{
  return isaac_ros2_messages::srv::builder::Init_GetPrimAttribute_Event_info();
}

}  // namespace isaac_ros2_messages

#endif  // ISAAC_ROS2_MESSAGES__SRV__DETAIL__GET_PRIM_ATTRIBUTE__BUILDER_HPP_
