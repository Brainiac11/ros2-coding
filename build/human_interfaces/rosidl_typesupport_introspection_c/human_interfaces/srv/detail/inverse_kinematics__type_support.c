// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from human_interfaces:srv/InverseKinematics.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "human_interfaces/srv/detail/inverse_kinematics__rosidl_typesupport_introspection_c.h"
#include "human_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "human_interfaces/srv/detail/inverse_kinematics__functions.h"
#include "human_interfaces/srv/detail/inverse_kinematics__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void human_interfaces__srv__InverseKinematics_Request__rosidl_typesupport_introspection_c__InverseKinematics_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  human_interfaces__srv__InverseKinematics_Request__init(message_memory);
}

void human_interfaces__srv__InverseKinematics_Request__rosidl_typesupport_introspection_c__InverseKinematics_Request_fini_function(void * message_memory)
{
  human_interfaces__srv__InverseKinematics_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember human_interfaces__srv__InverseKinematics_Request__rosidl_typesupport_introspection_c__InverseKinematics_Request_message_member_array[12] = {
  {
    "target_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces__srv__InverseKinematics_Request, target_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces__srv__InverseKinematics_Request, target_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces__srv__InverseKinematics_Request, target_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "link1_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces__srv__InverseKinematics_Request, link1_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "link2_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces__srv__InverseKinematics_Request, link2_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "link3_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces__srv__InverseKinematics_Request, link3_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fix_joint1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces__srv__InverseKinematics_Request, fix_joint1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fix_joint2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces__srv__InverseKinematics_Request, fix_joint2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fix_joint3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces__srv__InverseKinematics_Request, fix_joint3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fixed_joint1_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces__srv__InverseKinematics_Request, fixed_joint1_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fixed_joint2_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces__srv__InverseKinematics_Request, fixed_joint2_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fixed_joint3_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces__srv__InverseKinematics_Request, fixed_joint3_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers human_interfaces__srv__InverseKinematics_Request__rosidl_typesupport_introspection_c__InverseKinematics_Request_message_members = {
  "human_interfaces__srv",  // message namespace
  "InverseKinematics_Request",  // message name
  12,  // number of fields
  sizeof(human_interfaces__srv__InverseKinematics_Request),
  false,  // has_any_key_member_
  human_interfaces__srv__InverseKinematics_Request__rosidl_typesupport_introspection_c__InverseKinematics_Request_message_member_array,  // message members
  human_interfaces__srv__InverseKinematics_Request__rosidl_typesupport_introspection_c__InverseKinematics_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  human_interfaces__srv__InverseKinematics_Request__rosidl_typesupport_introspection_c__InverseKinematics_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t human_interfaces__srv__InverseKinematics_Request__rosidl_typesupport_introspection_c__InverseKinematics_Request_message_type_support_handle = {
  0,
  &human_interfaces__srv__InverseKinematics_Request__rosidl_typesupport_introspection_c__InverseKinematics_Request_message_members,
  get_message_typesupport_handle_function,
  &human_interfaces__srv__InverseKinematics_Request__get_type_hash,
  &human_interfaces__srv__InverseKinematics_Request__get_type_description,
  &human_interfaces__srv__InverseKinematics_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_human_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, srv, InverseKinematics_Request)() {
  if (!human_interfaces__srv__InverseKinematics_Request__rosidl_typesupport_introspection_c__InverseKinematics_Request_message_type_support_handle.typesupport_identifier) {
    human_interfaces__srv__InverseKinematics_Request__rosidl_typesupport_introspection_c__InverseKinematics_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &human_interfaces__srv__InverseKinematics_Request__rosidl_typesupport_introspection_c__InverseKinematics_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "human_interfaces/srv/detail/inverse_kinematics__rosidl_typesupport_introspection_c.h"
// already included above
// #include "human_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "human_interfaces/srv/detail/inverse_kinematics__functions.h"
// already included above
// #include "human_interfaces/srv/detail/inverse_kinematics__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void human_interfaces__srv__InverseKinematics_Response__rosidl_typesupport_introspection_c__InverseKinematics_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  human_interfaces__srv__InverseKinematics_Response__init(message_memory);
}

void human_interfaces__srv__InverseKinematics_Response__rosidl_typesupport_introspection_c__InverseKinematics_Response_fini_function(void * message_memory)
{
  human_interfaces__srv__InverseKinematics_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember human_interfaces__srv__InverseKinematics_Response__rosidl_typesupport_introspection_c__InverseKinematics_Response_message_member_array[5] = {
  {
    "joint1_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces__srv__InverseKinematics_Response, joint1_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint2_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces__srv__InverseKinematics_Response, joint2_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint3_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces__srv__InverseKinematics_Response, joint3_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces__srv__InverseKinematics_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces__srv__InverseKinematics_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers human_interfaces__srv__InverseKinematics_Response__rosidl_typesupport_introspection_c__InverseKinematics_Response_message_members = {
  "human_interfaces__srv",  // message namespace
  "InverseKinematics_Response",  // message name
  5,  // number of fields
  sizeof(human_interfaces__srv__InverseKinematics_Response),
  false,  // has_any_key_member_
  human_interfaces__srv__InverseKinematics_Response__rosidl_typesupport_introspection_c__InverseKinematics_Response_message_member_array,  // message members
  human_interfaces__srv__InverseKinematics_Response__rosidl_typesupport_introspection_c__InverseKinematics_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  human_interfaces__srv__InverseKinematics_Response__rosidl_typesupport_introspection_c__InverseKinematics_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t human_interfaces__srv__InverseKinematics_Response__rosidl_typesupport_introspection_c__InverseKinematics_Response_message_type_support_handle = {
  0,
  &human_interfaces__srv__InverseKinematics_Response__rosidl_typesupport_introspection_c__InverseKinematics_Response_message_members,
  get_message_typesupport_handle_function,
  &human_interfaces__srv__InverseKinematics_Response__get_type_hash,
  &human_interfaces__srv__InverseKinematics_Response__get_type_description,
  &human_interfaces__srv__InverseKinematics_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_human_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, srv, InverseKinematics_Response)() {
  if (!human_interfaces__srv__InverseKinematics_Response__rosidl_typesupport_introspection_c__InverseKinematics_Response_message_type_support_handle.typesupport_identifier) {
    human_interfaces__srv__InverseKinematics_Response__rosidl_typesupport_introspection_c__InverseKinematics_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &human_interfaces__srv__InverseKinematics_Response__rosidl_typesupport_introspection_c__InverseKinematics_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "human_interfaces/srv/detail/inverse_kinematics__rosidl_typesupport_introspection_c.h"
// already included above
// #include "human_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "human_interfaces/srv/detail/inverse_kinematics__functions.h"
// already included above
// #include "human_interfaces/srv/detail/inverse_kinematics__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "human_interfaces/srv/inverse_kinematics.h"
// Member `request`
// Member `response`
// already included above
// #include "human_interfaces/srv/detail/inverse_kinematics__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__InverseKinematics_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  human_interfaces__srv__InverseKinematics_Event__init(message_memory);
}

void human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__InverseKinematics_Event_fini_function(void * message_memory)
{
  human_interfaces__srv__InverseKinematics_Event__fini(message_memory);
}

size_t human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__size_function__InverseKinematics_Event__request(
  const void * untyped_member)
{
  const human_interfaces__srv__InverseKinematics_Request__Sequence * member =
    (const human_interfaces__srv__InverseKinematics_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__get_const_function__InverseKinematics_Event__request(
  const void * untyped_member, size_t index)
{
  const human_interfaces__srv__InverseKinematics_Request__Sequence * member =
    (const human_interfaces__srv__InverseKinematics_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__get_function__InverseKinematics_Event__request(
  void * untyped_member, size_t index)
{
  human_interfaces__srv__InverseKinematics_Request__Sequence * member =
    (human_interfaces__srv__InverseKinematics_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__fetch_function__InverseKinematics_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const human_interfaces__srv__InverseKinematics_Request * item =
    ((const human_interfaces__srv__InverseKinematics_Request *)
    human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__get_const_function__InverseKinematics_Event__request(untyped_member, index));
  human_interfaces__srv__InverseKinematics_Request * value =
    (human_interfaces__srv__InverseKinematics_Request *)(untyped_value);
  *value = *item;
}

void human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__assign_function__InverseKinematics_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  human_interfaces__srv__InverseKinematics_Request * item =
    ((human_interfaces__srv__InverseKinematics_Request *)
    human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__get_function__InverseKinematics_Event__request(untyped_member, index));
  const human_interfaces__srv__InverseKinematics_Request * value =
    (const human_interfaces__srv__InverseKinematics_Request *)(untyped_value);
  *item = *value;
}

bool human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__resize_function__InverseKinematics_Event__request(
  void * untyped_member, size_t size)
{
  human_interfaces__srv__InverseKinematics_Request__Sequence * member =
    (human_interfaces__srv__InverseKinematics_Request__Sequence *)(untyped_member);
  human_interfaces__srv__InverseKinematics_Request__Sequence__fini(member);
  return human_interfaces__srv__InverseKinematics_Request__Sequence__init(member, size);
}

size_t human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__size_function__InverseKinematics_Event__response(
  const void * untyped_member)
{
  const human_interfaces__srv__InverseKinematics_Response__Sequence * member =
    (const human_interfaces__srv__InverseKinematics_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__get_const_function__InverseKinematics_Event__response(
  const void * untyped_member, size_t index)
{
  const human_interfaces__srv__InverseKinematics_Response__Sequence * member =
    (const human_interfaces__srv__InverseKinematics_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__get_function__InverseKinematics_Event__response(
  void * untyped_member, size_t index)
{
  human_interfaces__srv__InverseKinematics_Response__Sequence * member =
    (human_interfaces__srv__InverseKinematics_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__fetch_function__InverseKinematics_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const human_interfaces__srv__InverseKinematics_Response * item =
    ((const human_interfaces__srv__InverseKinematics_Response *)
    human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__get_const_function__InverseKinematics_Event__response(untyped_member, index));
  human_interfaces__srv__InverseKinematics_Response * value =
    (human_interfaces__srv__InverseKinematics_Response *)(untyped_value);
  *value = *item;
}

void human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__assign_function__InverseKinematics_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  human_interfaces__srv__InverseKinematics_Response * item =
    ((human_interfaces__srv__InverseKinematics_Response *)
    human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__get_function__InverseKinematics_Event__response(untyped_member, index));
  const human_interfaces__srv__InverseKinematics_Response * value =
    (const human_interfaces__srv__InverseKinematics_Response *)(untyped_value);
  *item = *value;
}

bool human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__resize_function__InverseKinematics_Event__response(
  void * untyped_member, size_t size)
{
  human_interfaces__srv__InverseKinematics_Response__Sequence * member =
    (human_interfaces__srv__InverseKinematics_Response__Sequence *)(untyped_member);
  human_interfaces__srv__InverseKinematics_Response__Sequence__fini(member);
  return human_interfaces__srv__InverseKinematics_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__InverseKinematics_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(human_interfaces__srv__InverseKinematics_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(human_interfaces__srv__InverseKinematics_Event, request),  // bytes offset in struct
    NULL,  // default value
    human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__size_function__InverseKinematics_Event__request,  // size() function pointer
    human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__get_const_function__InverseKinematics_Event__request,  // get_const(index) function pointer
    human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__get_function__InverseKinematics_Event__request,  // get(index) function pointer
    human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__fetch_function__InverseKinematics_Event__request,  // fetch(index, &value) function pointer
    human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__assign_function__InverseKinematics_Event__request,  // assign(index, value) function pointer
    human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__resize_function__InverseKinematics_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(human_interfaces__srv__InverseKinematics_Event, response),  // bytes offset in struct
    NULL,  // default value
    human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__size_function__InverseKinematics_Event__response,  // size() function pointer
    human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__get_const_function__InverseKinematics_Event__response,  // get_const(index) function pointer
    human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__get_function__InverseKinematics_Event__response,  // get(index) function pointer
    human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__fetch_function__InverseKinematics_Event__response,  // fetch(index, &value) function pointer
    human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__assign_function__InverseKinematics_Event__response,  // assign(index, value) function pointer
    human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__resize_function__InverseKinematics_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__InverseKinematics_Event_message_members = {
  "human_interfaces__srv",  // message namespace
  "InverseKinematics_Event",  // message name
  3,  // number of fields
  sizeof(human_interfaces__srv__InverseKinematics_Event),
  false,  // has_any_key_member_
  human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__InverseKinematics_Event_message_member_array,  // message members
  human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__InverseKinematics_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__InverseKinematics_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__InverseKinematics_Event_message_type_support_handle = {
  0,
  &human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__InverseKinematics_Event_message_members,
  get_message_typesupport_handle_function,
  &human_interfaces__srv__InverseKinematics_Event__get_type_hash,
  &human_interfaces__srv__InverseKinematics_Event__get_type_description,
  &human_interfaces__srv__InverseKinematics_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_human_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, srv, InverseKinematics_Event)() {
  human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__InverseKinematics_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__InverseKinematics_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, srv, InverseKinematics_Request)();
  human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__InverseKinematics_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, srv, InverseKinematics_Response)();
  if (!human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__InverseKinematics_Event_message_type_support_handle.typesupport_identifier) {
    human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__InverseKinematics_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__InverseKinematics_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "human_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "human_interfaces/srv/detail/inverse_kinematics__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers human_interfaces__srv__detail__inverse_kinematics__rosidl_typesupport_introspection_c__InverseKinematics_service_members = {
  "human_interfaces__srv",  // service namespace
  "InverseKinematics",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // human_interfaces__srv__detail__inverse_kinematics__rosidl_typesupport_introspection_c__InverseKinematics_Request_message_type_support_handle,
  NULL,  // response message
  // human_interfaces__srv__detail__inverse_kinematics__rosidl_typesupport_introspection_c__InverseKinematics_Response_message_type_support_handle
  NULL  // event_message
  // human_interfaces__srv__detail__inverse_kinematics__rosidl_typesupport_introspection_c__InverseKinematics_Response_message_type_support_handle
};


static rosidl_service_type_support_t human_interfaces__srv__detail__inverse_kinematics__rosidl_typesupport_introspection_c__InverseKinematics_service_type_support_handle = {
  0,
  &human_interfaces__srv__detail__inverse_kinematics__rosidl_typesupport_introspection_c__InverseKinematics_service_members,
  get_service_typesupport_handle_function,
  &human_interfaces__srv__InverseKinematics_Request__rosidl_typesupport_introspection_c__InverseKinematics_Request_message_type_support_handle,
  &human_interfaces__srv__InverseKinematics_Response__rosidl_typesupport_introspection_c__InverseKinematics_Response_message_type_support_handle,
  &human_interfaces__srv__InverseKinematics_Event__rosidl_typesupport_introspection_c__InverseKinematics_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    human_interfaces,
    srv,
    InverseKinematics
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    human_interfaces,
    srv,
    InverseKinematics
  ),
  &human_interfaces__srv__InverseKinematics__get_type_hash,
  &human_interfaces__srv__InverseKinematics__get_type_description,
  &human_interfaces__srv__InverseKinematics__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, srv, InverseKinematics_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, srv, InverseKinematics_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, srv, InverseKinematics_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_human_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, srv, InverseKinematics)(void) {
  if (!human_interfaces__srv__detail__inverse_kinematics__rosidl_typesupport_introspection_c__InverseKinematics_service_type_support_handle.typesupport_identifier) {
    human_interfaces__srv__detail__inverse_kinematics__rosidl_typesupport_introspection_c__InverseKinematics_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)human_interfaces__srv__detail__inverse_kinematics__rosidl_typesupport_introspection_c__InverseKinematics_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, srv, InverseKinematics_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, srv, InverseKinematics_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, human_interfaces, srv, InverseKinematics_Event)()->data;
  }

  return &human_interfaces__srv__detail__inverse_kinematics__rosidl_typesupport_introspection_c__InverseKinematics_service_type_support_handle;
}
