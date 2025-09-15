// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:action/ExecuteMotionPrimitiveSequence.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/action/execute_motion_primitive_sequence.hpp"


#ifndef CONTROL_MSGS__ACTION__DETAIL__EXECUTE_MOTION_PRIMITIVE_SEQUENCE__BUILDER_HPP_
#define CONTROL_MSGS__ACTION__DETAIL__EXECUTE_MOTION_PRIMITIVE_SEQUENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_msgs/action/detail/execute_motion_primitive_sequence__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteMotionPrimitiveSequence_Goal_trajectory
{
public:
  Init_ExecuteMotionPrimitiveSequence_Goal_trajectory()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::control_msgs::action::ExecuteMotionPrimitiveSequence_Goal trajectory(::control_msgs::action::ExecuteMotionPrimitiveSequence_Goal::_trajectory_type arg)
  {
    msg_.trajectory = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::ExecuteMotionPrimitiveSequence_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::ExecuteMotionPrimitiveSequence_Goal>()
{
  return control_msgs::action::builder::Init_ExecuteMotionPrimitiveSequence_Goal_trajectory();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteMotionPrimitiveSequence_Result_error_string
{
public:
  explicit Init_ExecuteMotionPrimitiveSequence_Result_error_string(::control_msgs::action::ExecuteMotionPrimitiveSequence_Result & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::ExecuteMotionPrimitiveSequence_Result error_string(::control_msgs::action::ExecuteMotionPrimitiveSequence_Result::_error_string_type arg)
  {
    msg_.error_string = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::ExecuteMotionPrimitiveSequence_Result msg_;
};

class Init_ExecuteMotionPrimitiveSequence_Result_error_code
{
public:
  Init_ExecuteMotionPrimitiveSequence_Result_error_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMotionPrimitiveSequence_Result_error_string error_code(::control_msgs::action::ExecuteMotionPrimitiveSequence_Result::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_ExecuteMotionPrimitiveSequence_Result_error_string(msg_);
  }

private:
  ::control_msgs::action::ExecuteMotionPrimitiveSequence_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::ExecuteMotionPrimitiveSequence_Result>()
{
  return control_msgs::action::builder::Init_ExecuteMotionPrimitiveSequence_Result_error_code();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteMotionPrimitiveSequence_Feedback_current_primitive_index
{
public:
  Init_ExecuteMotionPrimitiveSequence_Feedback_current_primitive_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::control_msgs::action::ExecuteMotionPrimitiveSequence_Feedback current_primitive_index(::control_msgs::action::ExecuteMotionPrimitiveSequence_Feedback::_current_primitive_index_type arg)
  {
    msg_.current_primitive_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::ExecuteMotionPrimitiveSequence_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::ExecuteMotionPrimitiveSequence_Feedback>()
{
  return control_msgs::action::builder::Init_ExecuteMotionPrimitiveSequence_Feedback_current_primitive_index();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteMotionPrimitiveSequence_SendGoal_Request_goal
{
public:
  explicit Init_ExecuteMotionPrimitiveSequence_SendGoal_Request_goal(::control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Request goal(::control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Request msg_;
};

class Init_ExecuteMotionPrimitiveSequence_SendGoal_Request_goal_id
{
public:
  Init_ExecuteMotionPrimitiveSequence_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMotionPrimitiveSequence_SendGoal_Request_goal goal_id(::control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecuteMotionPrimitiveSequence_SendGoal_Request_goal(msg_);
  }

private:
  ::control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Request>()
{
  return control_msgs::action::builder::Init_ExecuteMotionPrimitiveSequence_SendGoal_Request_goal_id();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteMotionPrimitiveSequence_SendGoal_Response_stamp
{
public:
  explicit Init_ExecuteMotionPrimitiveSequence_SendGoal_Response_stamp(::control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Response stamp(::control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Response msg_;
};

class Init_ExecuteMotionPrimitiveSequence_SendGoal_Response_accepted
{
public:
  Init_ExecuteMotionPrimitiveSequence_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMotionPrimitiveSequence_SendGoal_Response_stamp accepted(::control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ExecuteMotionPrimitiveSequence_SendGoal_Response_stamp(msg_);
  }

private:
  ::control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Response>()
{
  return control_msgs::action::builder::Init_ExecuteMotionPrimitiveSequence_SendGoal_Response_accepted();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteMotionPrimitiveSequence_SendGoal_Event_response
{
public:
  explicit Init_ExecuteMotionPrimitiveSequence_SendGoal_Event_response(::control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Event response(::control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Event msg_;
};

class Init_ExecuteMotionPrimitiveSequence_SendGoal_Event_request
{
public:
  explicit Init_ExecuteMotionPrimitiveSequence_SendGoal_Event_request(::control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_ExecuteMotionPrimitiveSequence_SendGoal_Event_response request(::control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ExecuteMotionPrimitiveSequence_SendGoal_Event_response(msg_);
  }

private:
  ::control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Event msg_;
};

class Init_ExecuteMotionPrimitiveSequence_SendGoal_Event_info
{
public:
  Init_ExecuteMotionPrimitiveSequence_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMotionPrimitiveSequence_SendGoal_Event_request info(::control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ExecuteMotionPrimitiveSequence_SendGoal_Event_request(msg_);
  }

private:
  ::control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Event>()
{
  return control_msgs::action::builder::Init_ExecuteMotionPrimitiveSequence_SendGoal_Event_info();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteMotionPrimitiveSequence_GetResult_Request_goal_id
{
public:
  Init_ExecuteMotionPrimitiveSequence_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Request goal_id(::control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Request>()
{
  return control_msgs::action::builder::Init_ExecuteMotionPrimitiveSequence_GetResult_Request_goal_id();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteMotionPrimitiveSequence_GetResult_Response_result
{
public:
  explicit Init_ExecuteMotionPrimitiveSequence_GetResult_Response_result(::control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Response result(::control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Response msg_;
};

class Init_ExecuteMotionPrimitiveSequence_GetResult_Response_status
{
public:
  Init_ExecuteMotionPrimitiveSequence_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMotionPrimitiveSequence_GetResult_Response_result status(::control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ExecuteMotionPrimitiveSequence_GetResult_Response_result(msg_);
  }

private:
  ::control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Response>()
{
  return control_msgs::action::builder::Init_ExecuteMotionPrimitiveSequence_GetResult_Response_status();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteMotionPrimitiveSequence_GetResult_Event_response
{
public:
  explicit Init_ExecuteMotionPrimitiveSequence_GetResult_Event_response(::control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Event response(::control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Event msg_;
};

class Init_ExecuteMotionPrimitiveSequence_GetResult_Event_request
{
public:
  explicit Init_ExecuteMotionPrimitiveSequence_GetResult_Event_request(::control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_ExecuteMotionPrimitiveSequence_GetResult_Event_response request(::control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ExecuteMotionPrimitiveSequence_GetResult_Event_response(msg_);
  }

private:
  ::control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Event msg_;
};

class Init_ExecuteMotionPrimitiveSequence_GetResult_Event_info
{
public:
  Init_ExecuteMotionPrimitiveSequence_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMotionPrimitiveSequence_GetResult_Event_request info(::control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ExecuteMotionPrimitiveSequence_GetResult_Event_request(msg_);
  }

private:
  ::control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Event>()
{
  return control_msgs::action::builder::Init_ExecuteMotionPrimitiveSequence_GetResult_Event_info();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteMotionPrimitiveSequence_FeedbackMessage_feedback
{
public:
  explicit Init_ExecuteMotionPrimitiveSequence_FeedbackMessage_feedback(::control_msgs::action::ExecuteMotionPrimitiveSequence_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::ExecuteMotionPrimitiveSequence_FeedbackMessage feedback(::control_msgs::action::ExecuteMotionPrimitiveSequence_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::ExecuteMotionPrimitiveSequence_FeedbackMessage msg_;
};

class Init_ExecuteMotionPrimitiveSequence_FeedbackMessage_goal_id
{
public:
  Init_ExecuteMotionPrimitiveSequence_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMotionPrimitiveSequence_FeedbackMessage_feedback goal_id(::control_msgs::action::ExecuteMotionPrimitiveSequence_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecuteMotionPrimitiveSequence_FeedbackMessage_feedback(msg_);
  }

private:
  ::control_msgs::action::ExecuteMotionPrimitiveSequence_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::ExecuteMotionPrimitiveSequence_FeedbackMessage>()
{
  return control_msgs::action::builder::Init_ExecuteMotionPrimitiveSequence_FeedbackMessage_goal_id();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__ACTION__DETAIL__EXECUTE_MOTION_PRIMITIVE_SEQUENCE__BUILDER_HPP_
