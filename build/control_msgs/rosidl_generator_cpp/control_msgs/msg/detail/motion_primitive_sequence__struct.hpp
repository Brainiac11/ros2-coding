// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from control_msgs:msg/MotionPrimitiveSequence.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/motion_primitive_sequence.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__MOTION_PRIMITIVE_SEQUENCE__STRUCT_HPP_
#define CONTROL_MSGS__MSG__DETAIL__MOTION_PRIMITIVE_SEQUENCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'motions'
#include "control_msgs/msg/detail/motion_primitive__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__control_msgs__msg__MotionPrimitiveSequence __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__msg__MotionPrimitiveSequence __declspec(deprecated)
#endif

namespace control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotionPrimitiveSequence_
{
  using Type = MotionPrimitiveSequence_<ContainerAllocator>;

  explicit MotionPrimitiveSequence_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit MotionPrimitiveSequence_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _motions_type =
    std::vector<control_msgs::msg::MotionPrimitive_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<control_msgs::msg::MotionPrimitive_<ContainerAllocator>>>;
  _motions_type motions;

  // setters for named parameter idiom
  Type & set__motions(
    const std::vector<control_msgs::msg::MotionPrimitive_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<control_msgs::msg::MotionPrimitive_<ContainerAllocator>>> & _arg)
  {
    this->motions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_msgs::msg::MotionPrimitiveSequence_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::msg::MotionPrimitiveSequence_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::msg::MotionPrimitiveSequence_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::msg::MotionPrimitiveSequence_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::MotionPrimitiveSequence_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::MotionPrimitiveSequence_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::MotionPrimitiveSequence_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::MotionPrimitiveSequence_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::msg::MotionPrimitiveSequence_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::msg::MotionPrimitiveSequence_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__msg__MotionPrimitiveSequence
    std::shared_ptr<control_msgs::msg::MotionPrimitiveSequence_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__msg__MotionPrimitiveSequence
    std::shared_ptr<control_msgs::msg::MotionPrimitiveSequence_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionPrimitiveSequence_ & other) const
  {
    if (this->motions != other.motions) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionPrimitiveSequence_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionPrimitiveSequence_

// alias to use template instance with default allocator
using MotionPrimitiveSequence =
  control_msgs::msg::MotionPrimitiveSequence_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__MOTION_PRIMITIVE_SEQUENCE__STRUCT_HPP_
