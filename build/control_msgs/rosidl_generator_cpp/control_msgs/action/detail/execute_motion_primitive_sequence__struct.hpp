// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from control_msgs:action/ExecuteMotionPrimitiveSequence.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/action/execute_motion_primitive_sequence.hpp"


#ifndef CONTROL_MSGS__ACTION__DETAIL__EXECUTE_MOTION_PRIMITIVE_SEQUENCE__STRUCT_HPP_
#define CONTROL_MSGS__ACTION__DETAIL__EXECUTE_MOTION_PRIMITIVE_SEQUENCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'trajectory'
#include "control_msgs/msg/detail/motion_primitive_sequence__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_Goal __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_Goal __declspec(deprecated)
#endif

namespace control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteMotionPrimitiveSequence_Goal_
{
  using Type = ExecuteMotionPrimitiveSequence_Goal_<ContainerAllocator>;

  explicit ExecuteMotionPrimitiveSequence_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectory(_init)
  {
    (void)_init;
  }

  explicit ExecuteMotionPrimitiveSequence_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectory(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _trajectory_type =
    control_msgs::msg::MotionPrimitiveSequence_<ContainerAllocator>;
  _trajectory_type trajectory;

  // setters for named parameter idiom
  Type & set__trajectory(
    const control_msgs::msg::MotionPrimitiveSequence_<ContainerAllocator> & _arg)
  {
    this->trajectory = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_msgs::action::ExecuteMotionPrimitiveSequence_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::action::ExecuteMotionPrimitiveSequence_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::ExecuteMotionPrimitiveSequence_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::ExecuteMotionPrimitiveSequence_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_Goal
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_Goal
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteMotionPrimitiveSequence_Goal_ & other) const
  {
    if (this->trajectory != other.trajectory) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteMotionPrimitiveSequence_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteMotionPrimitiveSequence_Goal_

// alias to use template instance with default allocator
using ExecuteMotionPrimitiveSequence_Goal =
  control_msgs::action::ExecuteMotionPrimitiveSequence_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace control_msgs


#ifndef _WIN32
# define DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_Result __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_Result __declspec(deprecated)
#endif

namespace control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteMotionPrimitiveSequence_Result_
{
  using Type = ExecuteMotionPrimitiveSequence_Result_<ContainerAllocator>;

  explicit ExecuteMotionPrimitiveSequence_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0l;
      this->error_string = "";
    }
  }

  explicit ExecuteMotionPrimitiveSequence_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_string(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0l;
      this->error_string = "";
    }
  }

  // field types and members
  using _error_code_type =
    int32_t;
  _error_code_type error_code;
  using _error_string_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_string_type error_string;

  // setters for named parameter idiom
  Type & set__error_code(
    const int32_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__error_string(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_string = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t SUCCESSFUL =
    0;
  static constexpr int32_t INVALID_GOAL =
    -1;
  static constexpr int32_t OLD_HEADER_TIMESTAMP =
    -3;

  // pointer types
  using RawPtr =
    control_msgs::action::ExecuteMotionPrimitiveSequence_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::action::ExecuteMotionPrimitiveSequence_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::ExecuteMotionPrimitiveSequence_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::ExecuteMotionPrimitiveSequence_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_Result
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_Result
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteMotionPrimitiveSequence_Result_ & other) const
  {
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->error_string != other.error_string) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteMotionPrimitiveSequence_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteMotionPrimitiveSequence_Result_

// alias to use template instance with default allocator
using ExecuteMotionPrimitiveSequence_Result =
  control_msgs::action::ExecuteMotionPrimitiveSequence_Result_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ExecuteMotionPrimitiveSequence_Result_<ContainerAllocator>::SUCCESSFUL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ExecuteMotionPrimitiveSequence_Result_<ContainerAllocator>::INVALID_GOAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ExecuteMotionPrimitiveSequence_Result_<ContainerAllocator>::OLD_HEADER_TIMESTAMP;
#endif  // __cplusplus < 201703L

}  // namespace action

}  // namespace control_msgs


#ifndef _WIN32
# define DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_Feedback __declspec(deprecated)
#endif

namespace control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteMotionPrimitiveSequence_Feedback_
{
  using Type = ExecuteMotionPrimitiveSequence_Feedback_<ContainerAllocator>;

  explicit ExecuteMotionPrimitiveSequence_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_primitive_index = 0;
    }
  }

  explicit ExecuteMotionPrimitiveSequence_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_primitive_index = 0;
    }
  }

  // field types and members
  using _current_primitive_index_type =
    uint8_t;
  _current_primitive_index_type current_primitive_index;

  // setters for named parameter idiom
  Type & set__current_primitive_index(
    const uint8_t & _arg)
  {
    this->current_primitive_index = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_msgs::action::ExecuteMotionPrimitiveSequence_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::action::ExecuteMotionPrimitiveSequence_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::ExecuteMotionPrimitiveSequence_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::ExecuteMotionPrimitiveSequence_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_Feedback
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_Feedback
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteMotionPrimitiveSequence_Feedback_ & other) const
  {
    if (this->current_primitive_index != other.current_primitive_index) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteMotionPrimitiveSequence_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteMotionPrimitiveSequence_Feedback_

// alias to use template instance with default allocator
using ExecuteMotionPrimitiveSequence_Feedback =
  control_msgs::action::ExecuteMotionPrimitiveSequence_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace control_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "control_msgs/action/detail/execute_motion_primitive_sequence__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_SendGoal_Request __declspec(deprecated)
#endif

namespace control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteMotionPrimitiveSequence_SendGoal_Request_
{
  using Type = ExecuteMotionPrimitiveSequence_SendGoal_Request_<ContainerAllocator>;

  explicit ExecuteMotionPrimitiveSequence_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit ExecuteMotionPrimitiveSequence_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    control_msgs::action::ExecuteMotionPrimitiveSequence_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const control_msgs::action::ExecuteMotionPrimitiveSequence_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_SendGoal_Request
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_SendGoal_Request
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteMotionPrimitiveSequence_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteMotionPrimitiveSequence_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteMotionPrimitiveSequence_SendGoal_Request_

// alias to use template instance with default allocator
using ExecuteMotionPrimitiveSequence_SendGoal_Request =
  control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace control_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_SendGoal_Response __declspec(deprecated)
#endif

namespace control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteMotionPrimitiveSequence_SendGoal_Response_
{
  using Type = ExecuteMotionPrimitiveSequence_SendGoal_Response_<ContainerAllocator>;

  explicit ExecuteMotionPrimitiveSequence_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit ExecuteMotionPrimitiveSequence_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_SendGoal_Response
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_SendGoal_Response
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteMotionPrimitiveSequence_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteMotionPrimitiveSequence_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteMotionPrimitiveSequence_SendGoal_Response_

// alias to use template instance with default allocator
using ExecuteMotionPrimitiveSequence_SendGoal_Response =
  control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace control_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_SendGoal_Event __declspec(deprecated)
#endif

namespace control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteMotionPrimitiveSequence_SendGoal_Event_
{
  using Type = ExecuteMotionPrimitiveSequence_SendGoal_Event_<ContainerAllocator>;

  explicit ExecuteMotionPrimitiveSequence_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ExecuteMotionPrimitiveSequence_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_SendGoal_Event
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_SendGoal_Event
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteMotionPrimitiveSequence_SendGoal_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteMotionPrimitiveSequence_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteMotionPrimitiveSequence_SendGoal_Event_

// alias to use template instance with default allocator
using ExecuteMotionPrimitiveSequence_SendGoal_Event =
  control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace control_msgs

namespace control_msgs
{

namespace action
{

struct ExecuteMotionPrimitiveSequence_SendGoal
{
  using Request = control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Request;
  using Response = control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Response;
  using Event = control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal_Event;
};

}  // namespace action

}  // namespace control_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_GetResult_Request __declspec(deprecated)
#endif

namespace control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteMotionPrimitiveSequence_GetResult_Request_
{
  using Type = ExecuteMotionPrimitiveSequence_GetResult_Request_<ContainerAllocator>;

  explicit ExecuteMotionPrimitiveSequence_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit ExecuteMotionPrimitiveSequence_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_GetResult_Request
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_GetResult_Request
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteMotionPrimitiveSequence_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteMotionPrimitiveSequence_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteMotionPrimitiveSequence_GetResult_Request_

// alias to use template instance with default allocator
using ExecuteMotionPrimitiveSequence_GetResult_Request =
  control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace control_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "control_msgs/action/detail/execute_motion_primitive_sequence__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_GetResult_Response __declspec(deprecated)
#endif

namespace control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteMotionPrimitiveSequence_GetResult_Response_
{
  using Type = ExecuteMotionPrimitiveSequence_GetResult_Response_<ContainerAllocator>;

  explicit ExecuteMotionPrimitiveSequence_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit ExecuteMotionPrimitiveSequence_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    control_msgs::action::ExecuteMotionPrimitiveSequence_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const control_msgs::action::ExecuteMotionPrimitiveSequence_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_GetResult_Response
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_GetResult_Response
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteMotionPrimitiveSequence_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteMotionPrimitiveSequence_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteMotionPrimitiveSequence_GetResult_Response_

// alias to use template instance with default allocator
using ExecuteMotionPrimitiveSequence_GetResult_Response =
  control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace control_msgs


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_GetResult_Event __declspec(deprecated)
#endif

namespace control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteMotionPrimitiveSequence_GetResult_Event_
{
  using Type = ExecuteMotionPrimitiveSequence_GetResult_Event_<ContainerAllocator>;

  explicit ExecuteMotionPrimitiveSequence_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ExecuteMotionPrimitiveSequence_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_GetResult_Event
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_GetResult_Event
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteMotionPrimitiveSequence_GetResult_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteMotionPrimitiveSequence_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteMotionPrimitiveSequence_GetResult_Event_

// alias to use template instance with default allocator
using ExecuteMotionPrimitiveSequence_GetResult_Event =
  control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace control_msgs

namespace control_msgs
{

namespace action
{

struct ExecuteMotionPrimitiveSequence_GetResult
{
  using Request = control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Request;
  using Response = control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Response;
  using Event = control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult_Event;
};

}  // namespace action

}  // namespace control_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "control_msgs/action/detail/execute_motion_primitive_sequence__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_FeedbackMessage __declspec(deprecated)
#endif

namespace control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteMotionPrimitiveSequence_FeedbackMessage_
{
  using Type = ExecuteMotionPrimitiveSequence_FeedbackMessage_<ContainerAllocator>;

  explicit ExecuteMotionPrimitiveSequence_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit ExecuteMotionPrimitiveSequence_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    control_msgs::action::ExecuteMotionPrimitiveSequence_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const control_msgs::action::ExecuteMotionPrimitiveSequence_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_msgs::action::ExecuteMotionPrimitiveSequence_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::action::ExecuteMotionPrimitiveSequence_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::ExecuteMotionPrimitiveSequence_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::ExecuteMotionPrimitiveSequence_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_FeedbackMessage
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__action__ExecuteMotionPrimitiveSequence_FeedbackMessage
    std::shared_ptr<control_msgs::action::ExecuteMotionPrimitiveSequence_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteMotionPrimitiveSequence_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteMotionPrimitiveSequence_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteMotionPrimitiveSequence_FeedbackMessage_

// alias to use template instance with default allocator
using ExecuteMotionPrimitiveSequence_FeedbackMessage =
  control_msgs::action::ExecuteMotionPrimitiveSequence_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace control_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace control_msgs
{

namespace action
{

struct ExecuteMotionPrimitiveSequence
{
  /// The goal message defined in the action definition.
  using Goal = control_msgs::action::ExecuteMotionPrimitiveSequence_Goal;
  /// The result message defined in the action definition.
  using Result = control_msgs::action::ExecuteMotionPrimitiveSequence_Result;
  /// The feedback message defined in the action definition.
  using Feedback = control_msgs::action::ExecuteMotionPrimitiveSequence_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = control_msgs::action::ExecuteMotionPrimitiveSequence_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = control_msgs::action::ExecuteMotionPrimitiveSequence_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = control_msgs::action::ExecuteMotionPrimitiveSequence_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct ExecuteMotionPrimitiveSequence ExecuteMotionPrimitiveSequence;

}  // namespace action

}  // namespace control_msgs

#endif  // CONTROL_MSGS__ACTION__DETAIL__EXECUTE_MOTION_PRIMITIVE_SEQUENCE__STRUCT_HPP_
