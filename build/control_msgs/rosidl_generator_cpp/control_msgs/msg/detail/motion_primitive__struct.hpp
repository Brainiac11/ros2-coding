// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from control_msgs:msg/MotionPrimitive.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/motion_primitive.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__MOTION_PRIMITIVE__STRUCT_HPP_
#define CONTROL_MSGS__MSG__DETAIL__MOTION_PRIMITIVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'additional_arguments'
#include "control_msgs/msg/detail/motion_argument__struct.hpp"
// Member 'poses'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__control_msgs__msg__MotionPrimitive __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__msg__MotionPrimitive __declspec(deprecated)
#endif

namespace control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotionPrimitive_
{
  using Type = MotionPrimitive_<ContainerAllocator>;

  explicit MotionPrimitive_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->type = -1;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->type = 0;
      this->blend_radius = 0.0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->blend_radius = 0.0;
    }
  }

  explicit MotionPrimitive_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->type = -1;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->type = 0;
      this->blend_radius = 0.0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->blend_radius = 0.0;
    }
  }

  // field types and members
  using _type_type =
    int8_t;
  _type_type type;
  using _blend_radius_type =
    double;
  _blend_radius_type blend_radius;
  using _additional_arguments_type =
    std::vector<control_msgs::msg::MotionArgument_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<control_msgs::msg::MotionArgument_<ContainerAllocator>>>;
  _additional_arguments_type additional_arguments;
  using _poses_type =
    std::vector<geometry_msgs::msg::PoseStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PoseStamped_<ContainerAllocator>>>;
  _poses_type poses;
  using _joint_positions_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _joint_positions_type joint_positions;

  // setters for named parameter idiom
  Type & set__type(
    const int8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__blend_radius(
    const double & _arg)
  {
    this->blend_radius = _arg;
    return *this;
  }
  Type & set__additional_arguments(
    const std::vector<control_msgs::msg::MotionArgument_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<control_msgs::msg::MotionArgument_<ContainerAllocator>>> & _arg)
  {
    this->additional_arguments = _arg;
    return *this;
  }
  Type & set__poses(
    const std::vector<geometry_msgs::msg::PoseStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PoseStamped_<ContainerAllocator>>> & _arg)
  {
    this->poses = _arg;
    return *this;
  }
  Type & set__joint_positions(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->joint_positions = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t UNKNOWN =
    -1;
  static constexpr int8_t LINEAR_JOINT =
    0;
  static constexpr int8_t LINEAR_CARTESIAN =
    50;
  static constexpr int8_t CIRCULAR_CARTESIAN =
    51;

  // pointer types
  using RawPtr =
    control_msgs::msg::MotionPrimitive_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::msg::MotionPrimitive_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::msg::MotionPrimitive_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::msg::MotionPrimitive_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::MotionPrimitive_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::MotionPrimitive_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::MotionPrimitive_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::MotionPrimitive_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::msg::MotionPrimitive_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::msg::MotionPrimitive_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__msg__MotionPrimitive
    std::shared_ptr<control_msgs::msg::MotionPrimitive_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__msg__MotionPrimitive
    std::shared_ptr<control_msgs::msg::MotionPrimitive_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionPrimitive_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->blend_radius != other.blend_radius) {
      return false;
    }
    if (this->additional_arguments != other.additional_arguments) {
      return false;
    }
    if (this->poses != other.poses) {
      return false;
    }
    if (this->joint_positions != other.joint_positions) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionPrimitive_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionPrimitive_

// alias to use template instance with default allocator
using MotionPrimitive =
  control_msgs::msg::MotionPrimitive_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t MotionPrimitive_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t MotionPrimitive_<ContainerAllocator>::LINEAR_JOINT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t MotionPrimitive_<ContainerAllocator>::LINEAR_CARTESIAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t MotionPrimitive_<ContainerAllocator>::CIRCULAR_CARTESIAN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__MOTION_PRIMITIVE__STRUCT_HPP_
