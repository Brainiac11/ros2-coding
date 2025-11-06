// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from human_interfaces:msg/ArmSwingCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "human_interfaces/msg/arm_swing_command.hpp"


#ifndef HUMAN_INTERFACES__MSG__DETAIL__ARM_SWING_COMMAND__STRUCT_HPP_
#define HUMAN_INTERFACES__MSG__DETAIL__ARM_SWING_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__human_interfaces__msg__ArmSwingCommand __attribute__((deprecated))
#else
# define DEPRECATED__human_interfaces__msg__ArmSwingCommand __declspec(deprecated)
#endif

namespace human_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmSwingCommand_
{
  using Type = ArmSwingCommand_<ContainerAllocator>;

  explicit ArmSwingCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ArmSwingCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    human_interfaces::msg::ArmSwingCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const human_interfaces::msg::ArmSwingCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<human_interfaces::msg::ArmSwingCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<human_interfaces::msg::ArmSwingCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      human_interfaces::msg::ArmSwingCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<human_interfaces::msg::ArmSwingCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      human_interfaces::msg::ArmSwingCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<human_interfaces::msg::ArmSwingCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<human_interfaces::msg::ArmSwingCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<human_interfaces::msg::ArmSwingCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__human_interfaces__msg__ArmSwingCommand
    std::shared_ptr<human_interfaces::msg::ArmSwingCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__human_interfaces__msg__ArmSwingCommand
    std::shared_ptr<human_interfaces::msg::ArmSwingCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmSwingCommand_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmSwingCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmSwingCommand_

// alias to use template instance with default allocator
using ArmSwingCommand =
  human_interfaces::msg::ArmSwingCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace human_interfaces

#endif  // HUMAN_INTERFACES__MSG__DETAIL__ARM_SWING_COMMAND__STRUCT_HPP_
