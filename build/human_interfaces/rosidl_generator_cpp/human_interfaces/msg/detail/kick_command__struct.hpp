// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from human_interfaces:msg/KickCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "human_interfaces/msg/kick_command.hpp"


#ifndef HUMAN_INTERFACES__MSG__DETAIL__KICK_COMMAND__STRUCT_HPP_
#define HUMAN_INTERFACES__MSG__DETAIL__KICK_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__human_interfaces__msg__KickCommand __attribute__((deprecated))
#else
# define DEPRECATED__human_interfaces__msg__KickCommand __declspec(deprecated)
#endif

namespace human_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KickCommand_
{
  using Type = KickCommand_<ContainerAllocator>;

  explicit KickCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->should_kick = false;
    }
  }

  explicit KickCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->should_kick = false;
    }
  }

  // field types and members
  using _should_kick_type =
    bool;
  _should_kick_type should_kick;

  // setters for named parameter idiom
  Type & set__should_kick(
    const bool & _arg)
  {
    this->should_kick = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    human_interfaces::msg::KickCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const human_interfaces::msg::KickCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<human_interfaces::msg::KickCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<human_interfaces::msg::KickCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      human_interfaces::msg::KickCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<human_interfaces::msg::KickCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      human_interfaces::msg::KickCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<human_interfaces::msg::KickCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<human_interfaces::msg::KickCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<human_interfaces::msg::KickCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__human_interfaces__msg__KickCommand
    std::shared_ptr<human_interfaces::msg::KickCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__human_interfaces__msg__KickCommand
    std::shared_ptr<human_interfaces::msg::KickCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KickCommand_ & other) const
  {
    if (this->should_kick != other.should_kick) {
      return false;
    }
    return true;
  }
  bool operator!=(const KickCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KickCommand_

// alias to use template instance with default allocator
using KickCommand =
  human_interfaces::msg::KickCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace human_interfaces

#endif  // HUMAN_INTERFACES__MSG__DETAIL__KICK_COMMAND__STRUCT_HPP_
