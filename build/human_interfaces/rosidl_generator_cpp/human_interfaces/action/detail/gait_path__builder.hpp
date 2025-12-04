// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from human_interfaces:action/GaitPath.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "human_interfaces/action/gait_path.hpp"


#ifndef HUMAN_INTERFACES__ACTION__DETAIL__GAIT_PATH__BUILDER_HPP_
#define HUMAN_INTERFACES__ACTION__DETAIL__GAIT_PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "human_interfaces/action/detail/gait_path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace human_interfaces
{

namespace action
{

namespace builder
{

class Init_GaitPath_Goal_point
{
public:
  Init_GaitPath_Goal_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::human_interfaces::action::GaitPath_Goal point(::human_interfaces::action::GaitPath_Goal::_point_type arg)
  {
    msg_.point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::human_interfaces::action::GaitPath_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::human_interfaces::action::GaitPath_Goal>()
{
  return human_interfaces::action::builder::Init_GaitPath_Goal_point();
}

}  // namespace human_interfaces


namespace human_interfaces
{

namespace action
{

namespace builder
{

class Init_GaitPath_Result_joint_angles
{
public:
  Init_GaitPath_Result_joint_angles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::human_interfaces::action::GaitPath_Result joint_angles(::human_interfaces::action::GaitPath_Result::_joint_angles_type arg)
  {
    msg_.joint_angles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::human_interfaces::action::GaitPath_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::human_interfaces::action::GaitPath_Result>()
{
  return human_interfaces::action::builder::Init_GaitPath_Result_joint_angles();
}

}  // namespace human_interfaces


namespace human_interfaces
{

namespace action
{

namespace builder
{

class Init_GaitPath_Feedback_partial_joint_angles
{
public:
  Init_GaitPath_Feedback_partial_joint_angles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::human_interfaces::action::GaitPath_Feedback partial_joint_angles(::human_interfaces::action::GaitPath_Feedback::_partial_joint_angles_type arg)
  {
    msg_.partial_joint_angles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::human_interfaces::action::GaitPath_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::human_interfaces::action::GaitPath_Feedback>()
{
  return human_interfaces::action::builder::Init_GaitPath_Feedback_partial_joint_angles();
}

}  // namespace human_interfaces


namespace human_interfaces
{

namespace action
{

namespace builder
{

class Init_GaitPath_SendGoal_Request_goal
{
public:
  explicit Init_GaitPath_SendGoal_Request_goal(::human_interfaces::action::GaitPath_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::human_interfaces::action::GaitPath_SendGoal_Request goal(::human_interfaces::action::GaitPath_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::human_interfaces::action::GaitPath_SendGoal_Request msg_;
};

class Init_GaitPath_SendGoal_Request_goal_id
{
public:
  Init_GaitPath_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GaitPath_SendGoal_Request_goal goal_id(::human_interfaces::action::GaitPath_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GaitPath_SendGoal_Request_goal(msg_);
  }

private:
  ::human_interfaces::action::GaitPath_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::human_interfaces::action::GaitPath_SendGoal_Request>()
{
  return human_interfaces::action::builder::Init_GaitPath_SendGoal_Request_goal_id();
}

}  // namespace human_interfaces


namespace human_interfaces
{

namespace action
{

namespace builder
{

class Init_GaitPath_SendGoal_Response_stamp
{
public:
  explicit Init_GaitPath_SendGoal_Response_stamp(::human_interfaces::action::GaitPath_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::human_interfaces::action::GaitPath_SendGoal_Response stamp(::human_interfaces::action::GaitPath_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::human_interfaces::action::GaitPath_SendGoal_Response msg_;
};

class Init_GaitPath_SendGoal_Response_accepted
{
public:
  Init_GaitPath_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GaitPath_SendGoal_Response_stamp accepted(::human_interfaces::action::GaitPath_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_GaitPath_SendGoal_Response_stamp(msg_);
  }

private:
  ::human_interfaces::action::GaitPath_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::human_interfaces::action::GaitPath_SendGoal_Response>()
{
  return human_interfaces::action::builder::Init_GaitPath_SendGoal_Response_accepted();
}

}  // namespace human_interfaces


namespace human_interfaces
{

namespace action
{

namespace builder
{

class Init_GaitPath_SendGoal_Event_response
{
public:
  explicit Init_GaitPath_SendGoal_Event_response(::human_interfaces::action::GaitPath_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::human_interfaces::action::GaitPath_SendGoal_Event response(::human_interfaces::action::GaitPath_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::human_interfaces::action::GaitPath_SendGoal_Event msg_;
};

class Init_GaitPath_SendGoal_Event_request
{
public:
  explicit Init_GaitPath_SendGoal_Event_request(::human_interfaces::action::GaitPath_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_GaitPath_SendGoal_Event_response request(::human_interfaces::action::GaitPath_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GaitPath_SendGoal_Event_response(msg_);
  }

private:
  ::human_interfaces::action::GaitPath_SendGoal_Event msg_;
};

class Init_GaitPath_SendGoal_Event_info
{
public:
  Init_GaitPath_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GaitPath_SendGoal_Event_request info(::human_interfaces::action::GaitPath_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GaitPath_SendGoal_Event_request(msg_);
  }

private:
  ::human_interfaces::action::GaitPath_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::human_interfaces::action::GaitPath_SendGoal_Event>()
{
  return human_interfaces::action::builder::Init_GaitPath_SendGoal_Event_info();
}

}  // namespace human_interfaces


namespace human_interfaces
{

namespace action
{

namespace builder
{

class Init_GaitPath_GetResult_Request_goal_id
{
public:
  Init_GaitPath_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::human_interfaces::action::GaitPath_GetResult_Request goal_id(::human_interfaces::action::GaitPath_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::human_interfaces::action::GaitPath_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::human_interfaces::action::GaitPath_GetResult_Request>()
{
  return human_interfaces::action::builder::Init_GaitPath_GetResult_Request_goal_id();
}

}  // namespace human_interfaces


namespace human_interfaces
{

namespace action
{

namespace builder
{

class Init_GaitPath_GetResult_Response_result
{
public:
  explicit Init_GaitPath_GetResult_Response_result(::human_interfaces::action::GaitPath_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::human_interfaces::action::GaitPath_GetResult_Response result(::human_interfaces::action::GaitPath_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::human_interfaces::action::GaitPath_GetResult_Response msg_;
};

class Init_GaitPath_GetResult_Response_status
{
public:
  Init_GaitPath_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GaitPath_GetResult_Response_result status(::human_interfaces::action::GaitPath_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GaitPath_GetResult_Response_result(msg_);
  }

private:
  ::human_interfaces::action::GaitPath_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::human_interfaces::action::GaitPath_GetResult_Response>()
{
  return human_interfaces::action::builder::Init_GaitPath_GetResult_Response_status();
}

}  // namespace human_interfaces


namespace human_interfaces
{

namespace action
{

namespace builder
{

class Init_GaitPath_GetResult_Event_response
{
public:
  explicit Init_GaitPath_GetResult_Event_response(::human_interfaces::action::GaitPath_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::human_interfaces::action::GaitPath_GetResult_Event response(::human_interfaces::action::GaitPath_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::human_interfaces::action::GaitPath_GetResult_Event msg_;
};

class Init_GaitPath_GetResult_Event_request
{
public:
  explicit Init_GaitPath_GetResult_Event_request(::human_interfaces::action::GaitPath_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_GaitPath_GetResult_Event_response request(::human_interfaces::action::GaitPath_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GaitPath_GetResult_Event_response(msg_);
  }

private:
  ::human_interfaces::action::GaitPath_GetResult_Event msg_;
};

class Init_GaitPath_GetResult_Event_info
{
public:
  Init_GaitPath_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GaitPath_GetResult_Event_request info(::human_interfaces::action::GaitPath_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GaitPath_GetResult_Event_request(msg_);
  }

private:
  ::human_interfaces::action::GaitPath_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::human_interfaces::action::GaitPath_GetResult_Event>()
{
  return human_interfaces::action::builder::Init_GaitPath_GetResult_Event_info();
}

}  // namespace human_interfaces


namespace human_interfaces
{

namespace action
{

namespace builder
{

class Init_GaitPath_FeedbackMessage_feedback
{
public:
  explicit Init_GaitPath_FeedbackMessage_feedback(::human_interfaces::action::GaitPath_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::human_interfaces::action::GaitPath_FeedbackMessage feedback(::human_interfaces::action::GaitPath_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::human_interfaces::action::GaitPath_FeedbackMessage msg_;
};

class Init_GaitPath_FeedbackMessage_goal_id
{
public:
  Init_GaitPath_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GaitPath_FeedbackMessage_feedback goal_id(::human_interfaces::action::GaitPath_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GaitPath_FeedbackMessage_feedback(msg_);
  }

private:
  ::human_interfaces::action::GaitPath_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::human_interfaces::action::GaitPath_FeedbackMessage>()
{
  return human_interfaces::action::builder::Init_GaitPath_FeedbackMessage_goal_id();
}

}  // namespace human_interfaces

#endif  // HUMAN_INTERFACES__ACTION__DETAIL__GAIT_PATH__BUILDER_HPP_
