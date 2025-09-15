// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from control_msgs:msg/MotionArgument.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/motion_argument.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__MOTION_ARGUMENT__STRUCT_HPP_
#define CONTROL_MSGS__MSG__DETAIL__MOTION_ARGUMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__control_msgs__msg__MotionArgument __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__msg__MotionArgument __declspec(deprecated)
#endif

namespace control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotionArgument_
{
  using Type = MotionArgument_<ContainerAllocator>;

  explicit MotionArgument_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->value = 0.0;
    }
  }

  explicit MotionArgument_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->value = 0.0;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _value_type =
    double;
  _value_type value;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__value(
    const double & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_msgs::msg::MotionArgument_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::msg::MotionArgument_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::msg::MotionArgument_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::msg::MotionArgument_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::MotionArgument_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::MotionArgument_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::MotionArgument_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::MotionArgument_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::msg::MotionArgument_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::msg::MotionArgument_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__msg__MotionArgument
    std::shared_ptr<control_msgs::msg::MotionArgument_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__msg__MotionArgument
    std::shared_ptr<control_msgs::msg::MotionArgument_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionArgument_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionArgument_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionArgument_

// alias to use template instance with default allocator
using MotionArgument =
  control_msgs::msg::MotionArgument_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__MOTION_ARGUMENT__STRUCT_HPP_
