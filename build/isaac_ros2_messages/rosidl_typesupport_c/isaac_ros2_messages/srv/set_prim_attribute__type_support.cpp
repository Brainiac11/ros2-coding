// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from isaac_ros2_messages:srv/SetPrimAttribute.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "isaac_ros2_messages/srv/detail/set_prim_attribute__struct.h"
#include "isaac_ros2_messages/srv/detail/set_prim_attribute__type_support.h"
#include "isaac_ros2_messages/srv/detail/set_prim_attribute__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace isaac_ros2_messages
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetPrimAttribute_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetPrimAttribute_Request_type_support_ids_t;

static const _SetPrimAttribute_Request_type_support_ids_t _SetPrimAttribute_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetPrimAttribute_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetPrimAttribute_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetPrimAttribute_Request_type_support_symbol_names_t _SetPrimAttribute_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, isaac_ros2_messages, srv, SetPrimAttribute_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, isaac_ros2_messages, srv, SetPrimAttribute_Request)),
  }
};

typedef struct _SetPrimAttribute_Request_type_support_data_t
{
  void * data[2];
} _SetPrimAttribute_Request_type_support_data_t;

static _SetPrimAttribute_Request_type_support_data_t _SetPrimAttribute_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetPrimAttribute_Request_message_typesupport_map = {
  2,
  "isaac_ros2_messages",
  &_SetPrimAttribute_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetPrimAttribute_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetPrimAttribute_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetPrimAttribute_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetPrimAttribute_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &isaac_ros2_messages__srv__SetPrimAttribute_Request__get_type_hash,
  &isaac_ros2_messages__srv__SetPrimAttribute_Request__get_type_description,
  &isaac_ros2_messages__srv__SetPrimAttribute_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace isaac_ros2_messages

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, isaac_ros2_messages, srv, SetPrimAttribute_Request)() {
  return &::isaac_ros2_messages::srv::rosidl_typesupport_c::SetPrimAttribute_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "isaac_ros2_messages/srv/detail/set_prim_attribute__struct.h"
// already included above
// #include "isaac_ros2_messages/srv/detail/set_prim_attribute__type_support.h"
// already included above
// #include "isaac_ros2_messages/srv/detail/set_prim_attribute__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace isaac_ros2_messages
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetPrimAttribute_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetPrimAttribute_Response_type_support_ids_t;

static const _SetPrimAttribute_Response_type_support_ids_t _SetPrimAttribute_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetPrimAttribute_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetPrimAttribute_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetPrimAttribute_Response_type_support_symbol_names_t _SetPrimAttribute_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, isaac_ros2_messages, srv, SetPrimAttribute_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, isaac_ros2_messages, srv, SetPrimAttribute_Response)),
  }
};

typedef struct _SetPrimAttribute_Response_type_support_data_t
{
  void * data[2];
} _SetPrimAttribute_Response_type_support_data_t;

static _SetPrimAttribute_Response_type_support_data_t _SetPrimAttribute_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetPrimAttribute_Response_message_typesupport_map = {
  2,
  "isaac_ros2_messages",
  &_SetPrimAttribute_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetPrimAttribute_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetPrimAttribute_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetPrimAttribute_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetPrimAttribute_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &isaac_ros2_messages__srv__SetPrimAttribute_Response__get_type_hash,
  &isaac_ros2_messages__srv__SetPrimAttribute_Response__get_type_description,
  &isaac_ros2_messages__srv__SetPrimAttribute_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace isaac_ros2_messages

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, isaac_ros2_messages, srv, SetPrimAttribute_Response)() {
  return &::isaac_ros2_messages::srv::rosidl_typesupport_c::SetPrimAttribute_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "isaac_ros2_messages/srv/detail/set_prim_attribute__struct.h"
// already included above
// #include "isaac_ros2_messages/srv/detail/set_prim_attribute__type_support.h"
// already included above
// #include "isaac_ros2_messages/srv/detail/set_prim_attribute__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace isaac_ros2_messages
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetPrimAttribute_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetPrimAttribute_Event_type_support_ids_t;

static const _SetPrimAttribute_Event_type_support_ids_t _SetPrimAttribute_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetPrimAttribute_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetPrimAttribute_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetPrimAttribute_Event_type_support_symbol_names_t _SetPrimAttribute_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, isaac_ros2_messages, srv, SetPrimAttribute_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, isaac_ros2_messages, srv, SetPrimAttribute_Event)),
  }
};

typedef struct _SetPrimAttribute_Event_type_support_data_t
{
  void * data[2];
} _SetPrimAttribute_Event_type_support_data_t;

static _SetPrimAttribute_Event_type_support_data_t _SetPrimAttribute_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetPrimAttribute_Event_message_typesupport_map = {
  2,
  "isaac_ros2_messages",
  &_SetPrimAttribute_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetPrimAttribute_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetPrimAttribute_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetPrimAttribute_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetPrimAttribute_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &isaac_ros2_messages__srv__SetPrimAttribute_Event__get_type_hash,
  &isaac_ros2_messages__srv__SetPrimAttribute_Event__get_type_description,
  &isaac_ros2_messages__srv__SetPrimAttribute_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace isaac_ros2_messages

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, isaac_ros2_messages, srv, SetPrimAttribute_Event)() {
  return &::isaac_ros2_messages::srv::rosidl_typesupport_c::SetPrimAttribute_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "isaac_ros2_messages/srv/detail/set_prim_attribute__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace isaac_ros2_messages
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _SetPrimAttribute_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetPrimAttribute_type_support_ids_t;

static const _SetPrimAttribute_type_support_ids_t _SetPrimAttribute_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetPrimAttribute_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetPrimAttribute_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetPrimAttribute_type_support_symbol_names_t _SetPrimAttribute_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, isaac_ros2_messages, srv, SetPrimAttribute)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, isaac_ros2_messages, srv, SetPrimAttribute)),
  }
};

typedef struct _SetPrimAttribute_type_support_data_t
{
  void * data[2];
} _SetPrimAttribute_type_support_data_t;

static _SetPrimAttribute_type_support_data_t _SetPrimAttribute_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetPrimAttribute_service_typesupport_map = {
  2,
  "isaac_ros2_messages",
  &_SetPrimAttribute_service_typesupport_ids.typesupport_identifier[0],
  &_SetPrimAttribute_service_typesupport_symbol_names.symbol_name[0],
  &_SetPrimAttribute_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetPrimAttribute_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetPrimAttribute_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SetPrimAttribute_Request_message_type_support_handle,
  &SetPrimAttribute_Response_message_type_support_handle,
  &SetPrimAttribute_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    isaac_ros2_messages,
    srv,
    SetPrimAttribute
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    isaac_ros2_messages,
    srv,
    SetPrimAttribute
  ),
  &isaac_ros2_messages__srv__SetPrimAttribute__get_type_hash,
  &isaac_ros2_messages__srv__SetPrimAttribute__get_type_description,
  &isaac_ros2_messages__srv__SetPrimAttribute__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace isaac_ros2_messages

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, isaac_ros2_messages, srv, SetPrimAttribute)() {
  return &::isaac_ros2_messages::srv::rosidl_typesupport_c::SetPrimAttribute_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
