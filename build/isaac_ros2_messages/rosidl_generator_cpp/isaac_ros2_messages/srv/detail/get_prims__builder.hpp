// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from isaac_ros2_messages:srv/GetPrims.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "isaac_ros2_messages/srv/get_prims.hpp"


#ifndef ISAAC_ROS2_MESSAGES__SRV__DETAIL__GET_PRIMS__BUILDER_HPP_
#define ISAAC_ROS2_MESSAGES__SRV__DETAIL__GET_PRIMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "isaac_ros2_messages/srv/detail/get_prims__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace isaac_ros2_messages
{

namespace srv
{

namespace builder
{

class Init_GetPrims_Request_path
{
public:
  Init_GetPrims_Request_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::isaac_ros2_messages::srv::GetPrims_Request path(::isaac_ros2_messages::srv::GetPrims_Request::_path_type arg)
  {
    msg_.path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isaac_ros2_messages::srv::GetPrims_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::isaac_ros2_messages::srv::GetPrims_Request>()
{
  return isaac_ros2_messages::srv::builder::Init_GetPrims_Request_path();
}

}  // namespace isaac_ros2_messages


namespace isaac_ros2_messages
{

namespace srv
{

namespace builder
{

class Init_GetPrims_Response_message
{
public:
  explicit Init_GetPrims_Response_message(::isaac_ros2_messages::srv::GetPrims_Response & msg)
  : msg_(msg)
  {}
  ::isaac_ros2_messages::srv::GetPrims_Response message(::isaac_ros2_messages::srv::GetPrims_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isaac_ros2_messages::srv::GetPrims_Response msg_;
};

class Init_GetPrims_Response_success
{
public:
  explicit Init_GetPrims_Response_success(::isaac_ros2_messages::srv::GetPrims_Response & msg)
  : msg_(msg)
  {}
  Init_GetPrims_Response_message success(::isaac_ros2_messages::srv::GetPrims_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetPrims_Response_message(msg_);
  }

private:
  ::isaac_ros2_messages::srv::GetPrims_Response msg_;
};

class Init_GetPrims_Response_types
{
public:
  explicit Init_GetPrims_Response_types(::isaac_ros2_messages::srv::GetPrims_Response & msg)
  : msg_(msg)
  {}
  Init_GetPrims_Response_success types(::isaac_ros2_messages::srv::GetPrims_Response::_types_type arg)
  {
    msg_.types = std::move(arg);
    return Init_GetPrims_Response_success(msg_);
  }

private:
  ::isaac_ros2_messages::srv::GetPrims_Response msg_;
};

class Init_GetPrims_Response_paths
{
public:
  Init_GetPrims_Response_paths()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPrims_Response_types paths(::isaac_ros2_messages::srv::GetPrims_Response::_paths_type arg)
  {
    msg_.paths = std::move(arg);
    return Init_GetPrims_Response_types(msg_);
  }

private:
  ::isaac_ros2_messages::srv::GetPrims_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::isaac_ros2_messages::srv::GetPrims_Response>()
{
  return isaac_ros2_messages::srv::builder::Init_GetPrims_Response_paths();
}

}  // namespace isaac_ros2_messages


namespace isaac_ros2_messages
{

namespace srv
{

namespace builder
{

class Init_GetPrims_Event_response
{
public:
  explicit Init_GetPrims_Event_response(::isaac_ros2_messages::srv::GetPrims_Event & msg)
  : msg_(msg)
  {}
  ::isaac_ros2_messages::srv::GetPrims_Event response(::isaac_ros2_messages::srv::GetPrims_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isaac_ros2_messages::srv::GetPrims_Event msg_;
};

class Init_GetPrims_Event_request
{
public:
  explicit Init_GetPrims_Event_request(::isaac_ros2_messages::srv::GetPrims_Event & msg)
  : msg_(msg)
  {}
  Init_GetPrims_Event_response request(::isaac_ros2_messages::srv::GetPrims_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetPrims_Event_response(msg_);
  }

private:
  ::isaac_ros2_messages::srv::GetPrims_Event msg_;
};

class Init_GetPrims_Event_info
{
public:
  Init_GetPrims_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPrims_Event_request info(::isaac_ros2_messages::srv::GetPrims_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetPrims_Event_request(msg_);
  }

private:
  ::isaac_ros2_messages::srv::GetPrims_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::isaac_ros2_messages::srv::GetPrims_Event>()
{
  return isaac_ros2_messages::srv::builder::Init_GetPrims_Event_info();
}

}  // namespace isaac_ros2_messages

#endif  // ISAAC_ROS2_MESSAGES__SRV__DETAIL__GET_PRIMS__BUILDER_HPP_
