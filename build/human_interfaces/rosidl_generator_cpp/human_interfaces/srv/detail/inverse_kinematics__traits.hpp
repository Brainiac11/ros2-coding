// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from human_interfaces:srv/InverseKinematics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "human_interfaces/srv/inverse_kinematics.hpp"


#ifndef HUMAN_INTERFACES__SRV__DETAIL__INVERSE_KINEMATICS__TRAITS_HPP_
#define HUMAN_INTERFACES__SRV__DETAIL__INVERSE_KINEMATICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "human_interfaces/srv/detail/inverse_kinematics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace human_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const InverseKinematics_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_x
  {
    out << "target_x: ";
    rosidl_generator_traits::value_to_yaml(msg.target_x, out);
    out << ", ";
  }

  // member: target_y
  {
    out << "target_y: ";
    rosidl_generator_traits::value_to_yaml(msg.target_y, out);
    out << ", ";
  }

  // member: target_z
  {
    out << "target_z: ";
    rosidl_generator_traits::value_to_yaml(msg.target_z, out);
    out << ", ";
  }

  // member: link1_length
  {
    out << "link1_length: ";
    rosidl_generator_traits::value_to_yaml(msg.link1_length, out);
    out << ", ";
  }

  // member: link2_length
  {
    out << "link2_length: ";
    rosidl_generator_traits::value_to_yaml(msg.link2_length, out);
    out << ", ";
  }

  // member: link3_length
  {
    out << "link3_length: ";
    rosidl_generator_traits::value_to_yaml(msg.link3_length, out);
    out << ", ";
  }

  // member: fix_joint1
  {
    out << "fix_joint1: ";
    rosidl_generator_traits::value_to_yaml(msg.fix_joint1, out);
    out << ", ";
  }

  // member: fix_joint2
  {
    out << "fix_joint2: ";
    rosidl_generator_traits::value_to_yaml(msg.fix_joint2, out);
    out << ", ";
  }

  // member: fix_joint3
  {
    out << "fix_joint3: ";
    rosidl_generator_traits::value_to_yaml(msg.fix_joint3, out);
    out << ", ";
  }

  // member: fixed_joint1_angle
  {
    out << "fixed_joint1_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.fixed_joint1_angle, out);
    out << ", ";
  }

  // member: fixed_joint2_angle
  {
    out << "fixed_joint2_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.fixed_joint2_angle, out);
    out << ", ";
  }

  // member: fixed_joint3_angle
  {
    out << "fixed_joint3_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.fixed_joint3_angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InverseKinematics_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_x: ";
    rosidl_generator_traits::value_to_yaml(msg.target_x, out);
    out << "\n";
  }

  // member: target_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_y: ";
    rosidl_generator_traits::value_to_yaml(msg.target_y, out);
    out << "\n";
  }

  // member: target_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_z: ";
    rosidl_generator_traits::value_to_yaml(msg.target_z, out);
    out << "\n";
  }

  // member: link1_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link1_length: ";
    rosidl_generator_traits::value_to_yaml(msg.link1_length, out);
    out << "\n";
  }

  // member: link2_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link2_length: ";
    rosidl_generator_traits::value_to_yaml(msg.link2_length, out);
    out << "\n";
  }

  // member: link3_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link3_length: ";
    rosidl_generator_traits::value_to_yaml(msg.link3_length, out);
    out << "\n";
  }

  // member: fix_joint1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fix_joint1: ";
    rosidl_generator_traits::value_to_yaml(msg.fix_joint1, out);
    out << "\n";
  }

  // member: fix_joint2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fix_joint2: ";
    rosidl_generator_traits::value_to_yaml(msg.fix_joint2, out);
    out << "\n";
  }

  // member: fix_joint3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fix_joint3: ";
    rosidl_generator_traits::value_to_yaml(msg.fix_joint3, out);
    out << "\n";
  }

  // member: fixed_joint1_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fixed_joint1_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.fixed_joint1_angle, out);
    out << "\n";
  }

  // member: fixed_joint2_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fixed_joint2_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.fixed_joint2_angle, out);
    out << "\n";
  }

  // member: fixed_joint3_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fixed_joint3_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.fixed_joint3_angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InverseKinematics_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace human_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use human_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const human_interfaces::srv::InverseKinematics_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  human_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use human_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const human_interfaces::srv::InverseKinematics_Request & msg)
{
  return human_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<human_interfaces::srv::InverseKinematics_Request>()
{
  return "human_interfaces::srv::InverseKinematics_Request";
}

template<>
inline const char * name<human_interfaces::srv::InverseKinematics_Request>()
{
  return "human_interfaces/srv/InverseKinematics_Request";
}

template<>
struct has_fixed_size<human_interfaces::srv::InverseKinematics_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<human_interfaces::srv::InverseKinematics_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<human_interfaces::srv::InverseKinematics_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace human_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const InverseKinematics_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint1_angle
  {
    out << "joint1_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.joint1_angle, out);
    out << ", ";
  }

  // member: joint2_angle
  {
    out << "joint2_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.joint2_angle, out);
    out << ", ";
  }

  // member: joint3_angle
  {
    out << "joint3_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.joint3_angle, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InverseKinematics_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint1_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint1_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.joint1_angle, out);
    out << "\n";
  }

  // member: joint2_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint2_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.joint2_angle, out);
    out << "\n";
  }

  // member: joint3_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint3_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.joint3_angle, out);
    out << "\n";
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InverseKinematics_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace human_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use human_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const human_interfaces::srv::InverseKinematics_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  human_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use human_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const human_interfaces::srv::InverseKinematics_Response & msg)
{
  return human_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<human_interfaces::srv::InverseKinematics_Response>()
{
  return "human_interfaces::srv::InverseKinematics_Response";
}

template<>
inline const char * name<human_interfaces::srv::InverseKinematics_Response>()
{
  return "human_interfaces/srv/InverseKinematics_Response";
}

template<>
struct has_fixed_size<human_interfaces::srv::InverseKinematics_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<human_interfaces::srv::InverseKinematics_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<human_interfaces::srv::InverseKinematics_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace human_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const InverseKinematics_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InverseKinematics_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InverseKinematics_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace human_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use human_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const human_interfaces::srv::InverseKinematics_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  human_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use human_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const human_interfaces::srv::InverseKinematics_Event & msg)
{
  return human_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<human_interfaces::srv::InverseKinematics_Event>()
{
  return "human_interfaces::srv::InverseKinematics_Event";
}

template<>
inline const char * name<human_interfaces::srv::InverseKinematics_Event>()
{
  return "human_interfaces/srv/InverseKinematics_Event";
}

template<>
struct has_fixed_size<human_interfaces::srv::InverseKinematics_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<human_interfaces::srv::InverseKinematics_Event>
  : std::integral_constant<bool, has_bounded_size<human_interfaces::srv::InverseKinematics_Request>::value && has_bounded_size<human_interfaces::srv::InverseKinematics_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<human_interfaces::srv::InverseKinematics_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<human_interfaces::srv::InverseKinematics>()
{
  return "human_interfaces::srv::InverseKinematics";
}

template<>
inline const char * name<human_interfaces::srv::InverseKinematics>()
{
  return "human_interfaces/srv/InverseKinematics";
}

template<>
struct has_fixed_size<human_interfaces::srv::InverseKinematics>
  : std::integral_constant<
    bool,
    has_fixed_size<human_interfaces::srv::InverseKinematics_Request>::value &&
    has_fixed_size<human_interfaces::srv::InverseKinematics_Response>::value
  >
{
};

template<>
struct has_bounded_size<human_interfaces::srv::InverseKinematics>
  : std::integral_constant<
    bool,
    has_bounded_size<human_interfaces::srv::InverseKinematics_Request>::value &&
    has_bounded_size<human_interfaces::srv::InverseKinematics_Response>::value
  >
{
};

template<>
struct is_service<human_interfaces::srv::InverseKinematics>
  : std::true_type
{
};

template<>
struct is_service_request<human_interfaces::srv::InverseKinematics_Request>
  : std::true_type
{
};

template<>
struct is_service_response<human_interfaces::srv::InverseKinematics_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HUMAN_INTERFACES__SRV__DETAIL__INVERSE_KINEMATICS__TRAITS_HPP_
