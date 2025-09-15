// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from controller_manager_msgs:srv/ListHardwareComponents.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "controller_manager_msgs/srv/list_hardware_components.hpp"


#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_COMPONENTS__BUILDER_HPP_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_COMPONENTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "controller_manager_msgs/srv/detail/list_hardware_components__struct.hpp"
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
auto build<::controller_manager_msgs::srv::ListHardwareComponents_Request>()
{
  return ::controller_manager_msgs::srv::ListHardwareComponents_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace controller_manager_msgs


namespace controller_manager_msgs
{

namespace srv
{

namespace builder
{

class Init_ListHardwareComponents_Response_component
{
public:
  Init_ListHardwareComponents_Response_component()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::controller_manager_msgs::srv::ListHardwareComponents_Response component(::controller_manager_msgs::srv::ListHardwareComponents_Response::_component_type arg)
  {
    msg_.component = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_manager_msgs::srv::ListHardwareComponents_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_manager_msgs::srv::ListHardwareComponents_Response>()
{
  return controller_manager_msgs::srv::builder::Init_ListHardwareComponents_Response_component();
}

}  // namespace controller_manager_msgs


namespace controller_manager_msgs
{

namespace srv
{

namespace builder
{

class Init_ListHardwareComponents_Event_response
{
public:
  explicit Init_ListHardwareComponents_Event_response(::controller_manager_msgs::srv::ListHardwareComponents_Event & msg)
  : msg_(msg)
  {}
  ::controller_manager_msgs::srv::ListHardwareComponents_Event response(::controller_manager_msgs::srv::ListHardwareComponents_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_manager_msgs::srv::ListHardwareComponents_Event msg_;
};

class Init_ListHardwareComponents_Event_request
{
public:
  explicit Init_ListHardwareComponents_Event_request(::controller_manager_msgs::srv::ListHardwareComponents_Event & msg)
  : msg_(msg)
  {}
  Init_ListHardwareComponents_Event_response request(::controller_manager_msgs::srv::ListHardwareComponents_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ListHardwareComponents_Event_response(msg_);
  }

private:
  ::controller_manager_msgs::srv::ListHardwareComponents_Event msg_;
};

class Init_ListHardwareComponents_Event_info
{
public:
  Init_ListHardwareComponents_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListHardwareComponents_Event_request info(::controller_manager_msgs::srv::ListHardwareComponents_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ListHardwareComponents_Event_request(msg_);
  }

private:
  ::controller_manager_msgs::srv::ListHardwareComponents_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_manager_msgs::srv::ListHardwareComponents_Event>()
{
  return controller_manager_msgs::srv::builder::Init_ListHardwareComponents_Event_info();
}

}  // namespace controller_manager_msgs

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_COMPONENTS__BUILDER_HPP_
