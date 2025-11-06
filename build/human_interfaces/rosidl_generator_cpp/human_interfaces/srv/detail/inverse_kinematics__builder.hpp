// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from human_interfaces:srv/InverseKinematics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "human_interfaces/srv/inverse_kinematics.hpp"


#ifndef HUMAN_INTERFACES__SRV__DETAIL__INVERSE_KINEMATICS__BUILDER_HPP_
#define HUMAN_INTERFACES__SRV__DETAIL__INVERSE_KINEMATICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "human_interfaces/srv/detail/inverse_kinematics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace human_interfaces
{

namespace srv
{

namespace builder
{

class Init_InverseKinematics_Request_fixed_joint3_angle
{
public:
  explicit Init_InverseKinematics_Request_fixed_joint3_angle(::human_interfaces::srv::InverseKinematics_Request & msg)
  : msg_(msg)
  {}
  ::human_interfaces::srv::InverseKinematics_Request fixed_joint3_angle(::human_interfaces::srv::InverseKinematics_Request::_fixed_joint3_angle_type arg)
  {
    msg_.fixed_joint3_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::human_interfaces::srv::InverseKinematics_Request msg_;
};

class Init_InverseKinematics_Request_fixed_joint2_angle
{
public:
  explicit Init_InverseKinematics_Request_fixed_joint2_angle(::human_interfaces::srv::InverseKinematics_Request & msg)
  : msg_(msg)
  {}
  Init_InverseKinematics_Request_fixed_joint3_angle fixed_joint2_angle(::human_interfaces::srv::InverseKinematics_Request::_fixed_joint2_angle_type arg)
  {
    msg_.fixed_joint2_angle = std::move(arg);
    return Init_InverseKinematics_Request_fixed_joint3_angle(msg_);
  }

private:
  ::human_interfaces::srv::InverseKinematics_Request msg_;
};

class Init_InverseKinematics_Request_fixed_joint1_angle
{
public:
  explicit Init_InverseKinematics_Request_fixed_joint1_angle(::human_interfaces::srv::InverseKinematics_Request & msg)
  : msg_(msg)
  {}
  Init_InverseKinematics_Request_fixed_joint2_angle fixed_joint1_angle(::human_interfaces::srv::InverseKinematics_Request::_fixed_joint1_angle_type arg)
  {
    msg_.fixed_joint1_angle = std::move(arg);
    return Init_InverseKinematics_Request_fixed_joint2_angle(msg_);
  }

private:
  ::human_interfaces::srv::InverseKinematics_Request msg_;
};

class Init_InverseKinematics_Request_fix_joint3
{
public:
  explicit Init_InverseKinematics_Request_fix_joint3(::human_interfaces::srv::InverseKinematics_Request & msg)
  : msg_(msg)
  {}
  Init_InverseKinematics_Request_fixed_joint1_angle fix_joint3(::human_interfaces::srv::InverseKinematics_Request::_fix_joint3_type arg)
  {
    msg_.fix_joint3 = std::move(arg);
    return Init_InverseKinematics_Request_fixed_joint1_angle(msg_);
  }

private:
  ::human_interfaces::srv::InverseKinematics_Request msg_;
};

class Init_InverseKinematics_Request_fix_joint2
{
public:
  explicit Init_InverseKinematics_Request_fix_joint2(::human_interfaces::srv::InverseKinematics_Request & msg)
  : msg_(msg)
  {}
  Init_InverseKinematics_Request_fix_joint3 fix_joint2(::human_interfaces::srv::InverseKinematics_Request::_fix_joint2_type arg)
  {
    msg_.fix_joint2 = std::move(arg);
    return Init_InverseKinematics_Request_fix_joint3(msg_);
  }

private:
  ::human_interfaces::srv::InverseKinematics_Request msg_;
};

class Init_InverseKinematics_Request_fix_joint1
{
public:
  explicit Init_InverseKinematics_Request_fix_joint1(::human_interfaces::srv::InverseKinematics_Request & msg)
  : msg_(msg)
  {}
  Init_InverseKinematics_Request_fix_joint2 fix_joint1(::human_interfaces::srv::InverseKinematics_Request::_fix_joint1_type arg)
  {
    msg_.fix_joint1 = std::move(arg);
    return Init_InverseKinematics_Request_fix_joint2(msg_);
  }

private:
  ::human_interfaces::srv::InverseKinematics_Request msg_;
};

class Init_InverseKinematics_Request_link3_length
{
public:
  explicit Init_InverseKinematics_Request_link3_length(::human_interfaces::srv::InverseKinematics_Request & msg)
  : msg_(msg)
  {}
  Init_InverseKinematics_Request_fix_joint1 link3_length(::human_interfaces::srv::InverseKinematics_Request::_link3_length_type arg)
  {
    msg_.link3_length = std::move(arg);
    return Init_InverseKinematics_Request_fix_joint1(msg_);
  }

private:
  ::human_interfaces::srv::InverseKinematics_Request msg_;
};

class Init_InverseKinematics_Request_link2_length
{
public:
  explicit Init_InverseKinematics_Request_link2_length(::human_interfaces::srv::InverseKinematics_Request & msg)
  : msg_(msg)
  {}
  Init_InverseKinematics_Request_link3_length link2_length(::human_interfaces::srv::InverseKinematics_Request::_link2_length_type arg)
  {
    msg_.link2_length = std::move(arg);
    return Init_InverseKinematics_Request_link3_length(msg_);
  }

private:
  ::human_interfaces::srv::InverseKinematics_Request msg_;
};

class Init_InverseKinematics_Request_link1_length
{
public:
  explicit Init_InverseKinematics_Request_link1_length(::human_interfaces::srv::InverseKinematics_Request & msg)
  : msg_(msg)
  {}
  Init_InverseKinematics_Request_link2_length link1_length(::human_interfaces::srv::InverseKinematics_Request::_link1_length_type arg)
  {
    msg_.link1_length = std::move(arg);
    return Init_InverseKinematics_Request_link2_length(msg_);
  }

private:
  ::human_interfaces::srv::InverseKinematics_Request msg_;
};

class Init_InverseKinematics_Request_target_z
{
public:
  explicit Init_InverseKinematics_Request_target_z(::human_interfaces::srv::InverseKinematics_Request & msg)
  : msg_(msg)
  {}
  Init_InverseKinematics_Request_link1_length target_z(::human_interfaces::srv::InverseKinematics_Request::_target_z_type arg)
  {
    msg_.target_z = std::move(arg);
    return Init_InverseKinematics_Request_link1_length(msg_);
  }

private:
  ::human_interfaces::srv::InverseKinematics_Request msg_;
};

class Init_InverseKinematics_Request_target_y
{
public:
  explicit Init_InverseKinematics_Request_target_y(::human_interfaces::srv::InverseKinematics_Request & msg)
  : msg_(msg)
  {}
  Init_InverseKinematics_Request_target_z target_y(::human_interfaces::srv::InverseKinematics_Request::_target_y_type arg)
  {
    msg_.target_y = std::move(arg);
    return Init_InverseKinematics_Request_target_z(msg_);
  }

private:
  ::human_interfaces::srv::InverseKinematics_Request msg_;
};

class Init_InverseKinematics_Request_target_x
{
public:
  Init_InverseKinematics_Request_target_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InverseKinematics_Request_target_y target_x(::human_interfaces::srv::InverseKinematics_Request::_target_x_type arg)
  {
    msg_.target_x = std::move(arg);
    return Init_InverseKinematics_Request_target_y(msg_);
  }

private:
  ::human_interfaces::srv::InverseKinematics_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::human_interfaces::srv::InverseKinematics_Request>()
{
  return human_interfaces::srv::builder::Init_InverseKinematics_Request_target_x();
}

}  // namespace human_interfaces


namespace human_interfaces
{

namespace srv
{

namespace builder
{

class Init_InverseKinematics_Response_message
{
public:
  explicit Init_InverseKinematics_Response_message(::human_interfaces::srv::InverseKinematics_Response & msg)
  : msg_(msg)
  {}
  ::human_interfaces::srv::InverseKinematics_Response message(::human_interfaces::srv::InverseKinematics_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::human_interfaces::srv::InverseKinematics_Response msg_;
};

class Init_InverseKinematics_Response_success
{
public:
  explicit Init_InverseKinematics_Response_success(::human_interfaces::srv::InverseKinematics_Response & msg)
  : msg_(msg)
  {}
  Init_InverseKinematics_Response_message success(::human_interfaces::srv::InverseKinematics_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_InverseKinematics_Response_message(msg_);
  }

private:
  ::human_interfaces::srv::InverseKinematics_Response msg_;
};

class Init_InverseKinematics_Response_joint3_angle
{
public:
  explicit Init_InverseKinematics_Response_joint3_angle(::human_interfaces::srv::InverseKinematics_Response & msg)
  : msg_(msg)
  {}
  Init_InverseKinematics_Response_success joint3_angle(::human_interfaces::srv::InverseKinematics_Response::_joint3_angle_type arg)
  {
    msg_.joint3_angle = std::move(arg);
    return Init_InverseKinematics_Response_success(msg_);
  }

private:
  ::human_interfaces::srv::InverseKinematics_Response msg_;
};

class Init_InverseKinematics_Response_joint2_angle
{
public:
  explicit Init_InverseKinematics_Response_joint2_angle(::human_interfaces::srv::InverseKinematics_Response & msg)
  : msg_(msg)
  {}
  Init_InverseKinematics_Response_joint3_angle joint2_angle(::human_interfaces::srv::InverseKinematics_Response::_joint2_angle_type arg)
  {
    msg_.joint2_angle = std::move(arg);
    return Init_InverseKinematics_Response_joint3_angle(msg_);
  }

private:
  ::human_interfaces::srv::InverseKinematics_Response msg_;
};

class Init_InverseKinematics_Response_joint1_angle
{
public:
  Init_InverseKinematics_Response_joint1_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InverseKinematics_Response_joint2_angle joint1_angle(::human_interfaces::srv::InverseKinematics_Response::_joint1_angle_type arg)
  {
    msg_.joint1_angle = std::move(arg);
    return Init_InverseKinematics_Response_joint2_angle(msg_);
  }

private:
  ::human_interfaces::srv::InverseKinematics_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::human_interfaces::srv::InverseKinematics_Response>()
{
  return human_interfaces::srv::builder::Init_InverseKinematics_Response_joint1_angle();
}

}  // namespace human_interfaces


namespace human_interfaces
{

namespace srv
{

namespace builder
{

class Init_InverseKinematics_Event_response
{
public:
  explicit Init_InverseKinematics_Event_response(::human_interfaces::srv::InverseKinematics_Event & msg)
  : msg_(msg)
  {}
  ::human_interfaces::srv::InverseKinematics_Event response(::human_interfaces::srv::InverseKinematics_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::human_interfaces::srv::InverseKinematics_Event msg_;
};

class Init_InverseKinematics_Event_request
{
public:
  explicit Init_InverseKinematics_Event_request(::human_interfaces::srv::InverseKinematics_Event & msg)
  : msg_(msg)
  {}
  Init_InverseKinematics_Event_response request(::human_interfaces::srv::InverseKinematics_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_InverseKinematics_Event_response(msg_);
  }

private:
  ::human_interfaces::srv::InverseKinematics_Event msg_;
};

class Init_InverseKinematics_Event_info
{
public:
  Init_InverseKinematics_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InverseKinematics_Event_request info(::human_interfaces::srv::InverseKinematics_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_InverseKinematics_Event_request(msg_);
  }

private:
  ::human_interfaces::srv::InverseKinematics_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::human_interfaces::srv::InverseKinematics_Event>()
{
  return human_interfaces::srv::builder::Init_InverseKinematics_Event_info();
}

}  // namespace human_interfaces

#endif  // HUMAN_INTERFACES__SRV__DETAIL__INVERSE_KINEMATICS__BUILDER_HPP_
