// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:srv/QueryTrajectoryState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/srv/query_trajectory_state.hpp"


#ifndef CONTROL_MSGS__SRV__DETAIL__QUERY_TRAJECTORY_STATE__BUILDER_HPP_
#define CONTROL_MSGS__SRV__DETAIL__QUERY_TRAJECTORY_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_msgs/srv/detail/query_trajectory_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_msgs
{

namespace srv
{

namespace builder
{

class Init_QueryTrajectoryState_Request_time
{
public:
  Init_QueryTrajectoryState_Request_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::control_msgs::srv::QueryTrajectoryState_Request time(::control_msgs::srv::QueryTrajectoryState_Request::_time_type arg)
  {
    msg_.time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::srv::QueryTrajectoryState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::srv::QueryTrajectoryState_Request>()
{
  return control_msgs::srv::builder::Init_QueryTrajectoryState_Request_time();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace srv
{

namespace builder
{

class Init_QueryTrajectoryState_Response_acceleration
{
public:
  explicit Init_QueryTrajectoryState_Response_acceleration(::control_msgs::srv::QueryTrajectoryState_Response & msg)
  : msg_(msg)
  {}
  ::control_msgs::srv::QueryTrajectoryState_Response acceleration(::control_msgs::srv::QueryTrajectoryState_Response::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::srv::QueryTrajectoryState_Response msg_;
};

class Init_QueryTrajectoryState_Response_velocity
{
public:
  explicit Init_QueryTrajectoryState_Response_velocity(::control_msgs::srv::QueryTrajectoryState_Response & msg)
  : msg_(msg)
  {}
  Init_QueryTrajectoryState_Response_acceleration velocity(::control_msgs::srv::QueryTrajectoryState_Response::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_QueryTrajectoryState_Response_acceleration(msg_);
  }

private:
  ::control_msgs::srv::QueryTrajectoryState_Response msg_;
};

class Init_QueryTrajectoryState_Response_position
{
public:
  explicit Init_QueryTrajectoryState_Response_position(::control_msgs::srv::QueryTrajectoryState_Response & msg)
  : msg_(msg)
  {}
  Init_QueryTrajectoryState_Response_velocity position(::control_msgs::srv::QueryTrajectoryState_Response::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_QueryTrajectoryState_Response_velocity(msg_);
  }

private:
  ::control_msgs::srv::QueryTrajectoryState_Response msg_;
};

class Init_QueryTrajectoryState_Response_name
{
public:
  explicit Init_QueryTrajectoryState_Response_name(::control_msgs::srv::QueryTrajectoryState_Response & msg)
  : msg_(msg)
  {}
  Init_QueryTrajectoryState_Response_position name(::control_msgs::srv::QueryTrajectoryState_Response::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_QueryTrajectoryState_Response_position(msg_);
  }

private:
  ::control_msgs::srv::QueryTrajectoryState_Response msg_;
};

class Init_QueryTrajectoryState_Response_message
{
public:
  explicit Init_QueryTrajectoryState_Response_message(::control_msgs::srv::QueryTrajectoryState_Response & msg)
  : msg_(msg)
  {}
  Init_QueryTrajectoryState_Response_name message(::control_msgs::srv::QueryTrajectoryState_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_QueryTrajectoryState_Response_name(msg_);
  }

private:
  ::control_msgs::srv::QueryTrajectoryState_Response msg_;
};

class Init_QueryTrajectoryState_Response_success
{
public:
  Init_QueryTrajectoryState_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QueryTrajectoryState_Response_message success(::control_msgs::srv::QueryTrajectoryState_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_QueryTrajectoryState_Response_message(msg_);
  }

private:
  ::control_msgs::srv::QueryTrajectoryState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::srv::QueryTrajectoryState_Response>()
{
  return control_msgs::srv::builder::Init_QueryTrajectoryState_Response_success();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace srv
{

namespace builder
{

class Init_QueryTrajectoryState_Event_response
{
public:
  explicit Init_QueryTrajectoryState_Event_response(::control_msgs::srv::QueryTrajectoryState_Event & msg)
  : msg_(msg)
  {}
  ::control_msgs::srv::QueryTrajectoryState_Event response(::control_msgs::srv::QueryTrajectoryState_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::srv::QueryTrajectoryState_Event msg_;
};

class Init_QueryTrajectoryState_Event_request
{
public:
  explicit Init_QueryTrajectoryState_Event_request(::control_msgs::srv::QueryTrajectoryState_Event & msg)
  : msg_(msg)
  {}
  Init_QueryTrajectoryState_Event_response request(::control_msgs::srv::QueryTrajectoryState_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_QueryTrajectoryState_Event_response(msg_);
  }

private:
  ::control_msgs::srv::QueryTrajectoryState_Event msg_;
};

class Init_QueryTrajectoryState_Event_info
{
public:
  Init_QueryTrajectoryState_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QueryTrajectoryState_Event_request info(::control_msgs::srv::QueryTrajectoryState_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_QueryTrajectoryState_Event_request(msg_);
  }

private:
  ::control_msgs::srv::QueryTrajectoryState_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::srv::QueryTrajectoryState_Event>()
{
  return control_msgs::srv::builder::Init_QueryTrajectoryState_Event_info();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__SRV__DETAIL__QUERY_TRAJECTORY_STATE__BUILDER_HPP_
