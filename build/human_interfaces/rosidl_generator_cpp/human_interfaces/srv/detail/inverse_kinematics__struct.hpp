// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from human_interfaces:srv/InverseKinematics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "human_interfaces/srv/inverse_kinematics.hpp"


#ifndef HUMAN_INTERFACES__SRV__DETAIL__INVERSE_KINEMATICS__STRUCT_HPP_
#define HUMAN_INTERFACES__SRV__DETAIL__INVERSE_KINEMATICS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__human_interfaces__srv__InverseKinematics_Request __attribute__((deprecated))
#else
# define DEPRECATED__human_interfaces__srv__InverseKinematics_Request __declspec(deprecated)
#endif

namespace human_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InverseKinematics_Request_
{
  using Type = InverseKinematics_Request_<ContainerAllocator>;

  explicit InverseKinematics_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_x = 0.0;
      this->target_y = 0.0;
      this->target_z = 0.0;
      this->link1_length = 0.0;
      this->link2_length = 0.0;
      this->link3_length = 0.0;
      this->fix_joint1 = false;
      this->fix_joint2 = false;
      this->fix_joint3 = false;
      this->fixed_joint1_angle = 0.0;
      this->fixed_joint2_angle = 0.0;
      this->fixed_joint3_angle = 0.0;
    }
  }

  explicit InverseKinematics_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_x = 0.0;
      this->target_y = 0.0;
      this->target_z = 0.0;
      this->link1_length = 0.0;
      this->link2_length = 0.0;
      this->link3_length = 0.0;
      this->fix_joint1 = false;
      this->fix_joint2 = false;
      this->fix_joint3 = false;
      this->fixed_joint1_angle = 0.0;
      this->fixed_joint2_angle = 0.0;
      this->fixed_joint3_angle = 0.0;
    }
  }

  // field types and members
  using _target_x_type =
    double;
  _target_x_type target_x;
  using _target_y_type =
    double;
  _target_y_type target_y;
  using _target_z_type =
    double;
  _target_z_type target_z;
  using _link1_length_type =
    double;
  _link1_length_type link1_length;
  using _link2_length_type =
    double;
  _link2_length_type link2_length;
  using _link3_length_type =
    double;
  _link3_length_type link3_length;
  using _fix_joint1_type =
    bool;
  _fix_joint1_type fix_joint1;
  using _fix_joint2_type =
    bool;
  _fix_joint2_type fix_joint2;
  using _fix_joint3_type =
    bool;
  _fix_joint3_type fix_joint3;
  using _fixed_joint1_angle_type =
    double;
  _fixed_joint1_angle_type fixed_joint1_angle;
  using _fixed_joint2_angle_type =
    double;
  _fixed_joint2_angle_type fixed_joint2_angle;
  using _fixed_joint3_angle_type =
    double;
  _fixed_joint3_angle_type fixed_joint3_angle;

  // setters for named parameter idiom
  Type & set__target_x(
    const double & _arg)
  {
    this->target_x = _arg;
    return *this;
  }
  Type & set__target_y(
    const double & _arg)
  {
    this->target_y = _arg;
    return *this;
  }
  Type & set__target_z(
    const double & _arg)
  {
    this->target_z = _arg;
    return *this;
  }
  Type & set__link1_length(
    const double & _arg)
  {
    this->link1_length = _arg;
    return *this;
  }
  Type & set__link2_length(
    const double & _arg)
  {
    this->link2_length = _arg;
    return *this;
  }
  Type & set__link3_length(
    const double & _arg)
  {
    this->link3_length = _arg;
    return *this;
  }
  Type & set__fix_joint1(
    const bool & _arg)
  {
    this->fix_joint1 = _arg;
    return *this;
  }
  Type & set__fix_joint2(
    const bool & _arg)
  {
    this->fix_joint2 = _arg;
    return *this;
  }
  Type & set__fix_joint3(
    const bool & _arg)
  {
    this->fix_joint3 = _arg;
    return *this;
  }
  Type & set__fixed_joint1_angle(
    const double & _arg)
  {
    this->fixed_joint1_angle = _arg;
    return *this;
  }
  Type & set__fixed_joint2_angle(
    const double & _arg)
  {
    this->fixed_joint2_angle = _arg;
    return *this;
  }
  Type & set__fixed_joint3_angle(
    const double & _arg)
  {
    this->fixed_joint3_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    human_interfaces::srv::InverseKinematics_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const human_interfaces::srv::InverseKinematics_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<human_interfaces::srv::InverseKinematics_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<human_interfaces::srv::InverseKinematics_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      human_interfaces::srv::InverseKinematics_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<human_interfaces::srv::InverseKinematics_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      human_interfaces::srv::InverseKinematics_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<human_interfaces::srv::InverseKinematics_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<human_interfaces::srv::InverseKinematics_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<human_interfaces::srv::InverseKinematics_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__human_interfaces__srv__InverseKinematics_Request
    std::shared_ptr<human_interfaces::srv::InverseKinematics_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__human_interfaces__srv__InverseKinematics_Request
    std::shared_ptr<human_interfaces::srv::InverseKinematics_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InverseKinematics_Request_ & other) const
  {
    if (this->target_x != other.target_x) {
      return false;
    }
    if (this->target_y != other.target_y) {
      return false;
    }
    if (this->target_z != other.target_z) {
      return false;
    }
    if (this->link1_length != other.link1_length) {
      return false;
    }
    if (this->link2_length != other.link2_length) {
      return false;
    }
    if (this->link3_length != other.link3_length) {
      return false;
    }
    if (this->fix_joint1 != other.fix_joint1) {
      return false;
    }
    if (this->fix_joint2 != other.fix_joint2) {
      return false;
    }
    if (this->fix_joint3 != other.fix_joint3) {
      return false;
    }
    if (this->fixed_joint1_angle != other.fixed_joint1_angle) {
      return false;
    }
    if (this->fixed_joint2_angle != other.fixed_joint2_angle) {
      return false;
    }
    if (this->fixed_joint3_angle != other.fixed_joint3_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const InverseKinematics_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InverseKinematics_Request_

// alias to use template instance with default allocator
using InverseKinematics_Request =
  human_interfaces::srv::InverseKinematics_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace human_interfaces


#ifndef _WIN32
# define DEPRECATED__human_interfaces__srv__InverseKinematics_Response __attribute__((deprecated))
#else
# define DEPRECATED__human_interfaces__srv__InverseKinematics_Response __declspec(deprecated)
#endif

namespace human_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InverseKinematics_Response_
{
  using Type = InverseKinematics_Response_<ContainerAllocator>;

  explicit InverseKinematics_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint1_angle = 0.0;
      this->joint2_angle = 0.0;
      this->joint3_angle = 0.0;
      this->success = false;
      this->message = "";
    }
  }

  explicit InverseKinematics_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint1_angle = 0.0;
      this->joint2_angle = 0.0;
      this->joint3_angle = 0.0;
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _joint1_angle_type =
    double;
  _joint1_angle_type joint1_angle;
  using _joint2_angle_type =
    double;
  _joint2_angle_type joint2_angle;
  using _joint3_angle_type =
    double;
  _joint3_angle_type joint3_angle;
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__joint1_angle(
    const double & _arg)
  {
    this->joint1_angle = _arg;
    return *this;
  }
  Type & set__joint2_angle(
    const double & _arg)
  {
    this->joint2_angle = _arg;
    return *this;
  }
  Type & set__joint3_angle(
    const double & _arg)
  {
    this->joint3_angle = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    human_interfaces::srv::InverseKinematics_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const human_interfaces::srv::InverseKinematics_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<human_interfaces::srv::InverseKinematics_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<human_interfaces::srv::InverseKinematics_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      human_interfaces::srv::InverseKinematics_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<human_interfaces::srv::InverseKinematics_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      human_interfaces::srv::InverseKinematics_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<human_interfaces::srv::InverseKinematics_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<human_interfaces::srv::InverseKinematics_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<human_interfaces::srv::InverseKinematics_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__human_interfaces__srv__InverseKinematics_Response
    std::shared_ptr<human_interfaces::srv::InverseKinematics_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__human_interfaces__srv__InverseKinematics_Response
    std::shared_ptr<human_interfaces::srv::InverseKinematics_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InverseKinematics_Response_ & other) const
  {
    if (this->joint1_angle != other.joint1_angle) {
      return false;
    }
    if (this->joint2_angle != other.joint2_angle) {
      return false;
    }
    if (this->joint3_angle != other.joint3_angle) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const InverseKinematics_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InverseKinematics_Response_

// alias to use template instance with default allocator
using InverseKinematics_Response =
  human_interfaces::srv::InverseKinematics_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace human_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__human_interfaces__srv__InverseKinematics_Event __attribute__((deprecated))
#else
# define DEPRECATED__human_interfaces__srv__InverseKinematics_Event __declspec(deprecated)
#endif

namespace human_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InverseKinematics_Event_
{
  using Type = InverseKinematics_Event_<ContainerAllocator>;

  explicit InverseKinematics_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit InverseKinematics_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<human_interfaces::srv::InverseKinematics_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<human_interfaces::srv::InverseKinematics_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<human_interfaces::srv::InverseKinematics_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<human_interfaces::srv::InverseKinematics_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<human_interfaces::srv::InverseKinematics_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<human_interfaces::srv::InverseKinematics_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<human_interfaces::srv::InverseKinematics_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<human_interfaces::srv::InverseKinematics_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    human_interfaces::srv::InverseKinematics_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const human_interfaces::srv::InverseKinematics_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<human_interfaces::srv::InverseKinematics_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<human_interfaces::srv::InverseKinematics_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      human_interfaces::srv::InverseKinematics_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<human_interfaces::srv::InverseKinematics_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      human_interfaces::srv::InverseKinematics_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<human_interfaces::srv::InverseKinematics_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<human_interfaces::srv::InverseKinematics_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<human_interfaces::srv::InverseKinematics_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__human_interfaces__srv__InverseKinematics_Event
    std::shared_ptr<human_interfaces::srv::InverseKinematics_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__human_interfaces__srv__InverseKinematics_Event
    std::shared_ptr<human_interfaces::srv::InverseKinematics_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InverseKinematics_Event_ & other) const
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
  bool operator!=(const InverseKinematics_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InverseKinematics_Event_

// alias to use template instance with default allocator
using InverseKinematics_Event =
  human_interfaces::srv::InverseKinematics_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace human_interfaces

namespace human_interfaces
{

namespace srv
{

struct InverseKinematics
{
  using Request = human_interfaces::srv::InverseKinematics_Request;
  using Response = human_interfaces::srv::InverseKinematics_Response;
  using Event = human_interfaces::srv::InverseKinematics_Event;
};

}  // namespace srv

}  // namespace human_interfaces

#endif  // HUMAN_INTERFACES__SRV__DETAIL__INVERSE_KINEMATICS__STRUCT_HPP_
