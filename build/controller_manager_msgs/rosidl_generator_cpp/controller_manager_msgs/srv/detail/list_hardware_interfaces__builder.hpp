// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from controller_manager_msgs:srv/ListHardwareInterfaces.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "controller_manager_msgs/srv/list_hardware_interfaces.hpp"


#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_INTERFACES__BUILDER_HPP_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_INTERFACES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "controller_manager_msgs/srv/detail/list_hardware_interfaces__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace controller_manager_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_manager_msgs::srv::ListHardwareInterfaces_Request>()
{
  return ::controller_manager_msgs::srv::ListHardwareInterfaces_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace controller_manager_msgs


namespace controller_manager_msgs
{

namespace srv
{

namespace builder
{

class Init_ListHardwareInterfaces_Response_state_interfaces
{
public:
  explicit Init_ListHardwareInterfaces_Response_state_interfaces(::controller_manager_msgs::srv::ListHardwareInterfaces_Response & msg)
  : msg_(msg)
  {}
  ::controller_manager_msgs::srv::ListHardwareInterfaces_Response state_interfaces(::controller_manager_msgs::srv::ListHardwareInterfaces_Response::_state_interfaces_type arg)
  {
    msg_.state_interfaces = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_manager_msgs::srv::ListHardwareInterfaces_Response msg_;
};

class Init_ListHardwareInterfaces_Response_command_interfaces
{
public:
  Init_ListHardwareInterfaces_Response_command_interfaces()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListHardwareInterfaces_Response_state_interfaces command_interfaces(::controller_manager_msgs::srv::ListHardwareInterfaces_Response::_command_interfaces_type arg)
  {
    msg_.command_interfaces = std::move(arg);
    return Init_ListHardwareInterfaces_Response_state_interfaces(msg_);
  }

private:
  ::controller_manager_msgs::srv::ListHardwareInterfaces_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_manager_msgs::srv::ListHardwareInterfaces_Response>()
{
  return controller_manager_msgs::srv::builder::Init_ListHardwareInterfaces_Response_command_interfaces();
}

}  // namespace controller_manager_msgs


namespace controller_manager_msgs
{

namespace srv
{

namespace builder
{

class Init_ListHardwareInterfaces_Event_response
{
public:
  explicit Init_ListHardwareInterfaces_Event_response(::controller_manager_msgs::srv::ListHardwareInterfaces_Event & msg)
  : msg_(msg)
  {}
  ::controller_manager_msgs::srv::ListHardwareInterfaces_Event response(::controller_manager_msgs::srv::ListHardwareInterfaces_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_manager_msgs::srv::ListHardwareInterfaces_Event msg_;
};

class Init_ListHardwareInterfaces_Event_request
{
public:
  explicit Init_ListHardwareInterfaces_Event_request(::controller_manager_msgs::srv::ListHardwareInterfaces_Event & msg)
  : msg_(msg)
  {}
  Init_ListHardwareInterfaces_Event_response request(::controller_manager_msgs::srv::ListHardwareInterfaces_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ListHardwareInterfaces_Event_response(msg_);
  }

private:
  ::controller_manager_msgs::srv::ListHardwareInterfaces_Event msg_;
};

class Init_ListHardwareInterfaces_Event_info
{
public:
  Init_ListHardwareInterfaces_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListHardwareInterfaces_Event_request info(::controller_manager_msgs::srv::ListHardwareInterfaces_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ListHardwareInterfaces_Event_request(msg_);
  }

private:
  ::controller_manager_msgs::srv::ListHardwareInterfaces_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_manager_msgs::srv::ListHardwareInterfaces_Event>()
{
  return controller_manager_msgs::srv::builder::Init_ListHardwareInterfaces_Event_info();
}

}  // namespace controller_manager_msgs

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_INTERFACES__BUILDER_HPP_
