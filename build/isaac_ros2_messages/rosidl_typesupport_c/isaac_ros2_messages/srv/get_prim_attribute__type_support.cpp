// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from isaac_ros2_messages:srv/GetPrimAttribute.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "isaac_ros2_messages/srv/detail/get_prim_attribute__struct.h"
#include "isaac_ros2_messages/srv/detail/get_prim_attribute__type_support.h"
#include "isaac_ros2_messages/srv/detail/get_prim_attribute__functions.h"
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

typedef struct _GetPrimAttribute_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetPrimAttribute_Request_type_support_ids_t;

static const _GetPrimAttribute_Request_type_support_ids_t _GetPrimAttribute_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetPrimAttribute_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetPrimAttribute_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetPrimAttribute_Request_type_support_symbol_names_t _GetPrimAttribute_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, isaac_ros2_messages, srv, GetPrimAttribute_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, isaac_ros2_messages, srv, GetPrimAttribute_Request)),
  }
};

typedef struct _GetPrimAttribute_Request_type_support_data_t
{
  void * data[2];
} _GetPrimAttribute_Request_type_support_data_t;

static _GetPrimAttribute_Request_type_support_data_t _GetPrimAttribute_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetPrimAttribute_Request_message_typesupport_map = {
  2,
  "isaac_ros2_messages",
  &_GetPrimAttribute_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetPrimAttribute_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetPrimAttribute_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetPrimAttribute_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetPrimAttribute_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &isaac_ros2_messages__srv__GetPrimAttribute_Request__get_type_hash,
  &isaac_ros2_messages__srv__GetPrimAttribute_Request__get_type_description,
  &isaac_ros2_messages__srv__GetPrimAttribute_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace isaac_ros2_messages

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, isaac_ros2_messages, srv, GetPrimAttribute_Request)() {
  return &::isaac_ros2_messages::srv::rosidl_typesupport_c::GetPrimAttribute_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "isaac_ros2_messages/srv/detail/get_prim_attribute__struct.h"
// already included above
// #include "isaac_ros2_messages/srv/detail/get_prim_attribute__type_support.h"
// already included above
// #include "isaac_ros2_messages/srv/detail/get_prim_attribute__functions.h"
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

typedef struct _GetPrimAttribute_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetPrimAttribute_Response_type_support_ids_t;

static const _GetPrimAttribute_Response_type_support_ids_t _GetPrimAttribute_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetPrimAttribute_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetPrimAttribute_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetPrimAttribute_Response_type_support_symbol_names_t _GetPrimAttribute_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, isaac_ros2_messages, srv, GetPrimAttribute_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, isaac_ros2_messages, srv, GetPrimAttribute_Response)),
  }
};

typedef struct _GetPrimAttribute_Response_type_support_data_t
{
  void * data[2];
} _GetPrimAttribute_Response_type_support_data_t;

static _GetPrimAttribute_Response_type_support_data_t _GetPrimAttribute_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetPrimAttribute_Response_message_typesupport_map = {
  2,
  "isaac_ros2_messages",
  &_GetPrimAttribute_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetPrimAttribute_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetPrimAttribute_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetPrimAttribute_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetPrimAttribute_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &isaac_ros2_messages__srv__GetPrimAttribute_Response__get_type_hash,
  &isaac_ros2_messages__srv__GetPrimAttribute_Response__get_type_description,
  &isaac_ros2_messages__srv__GetPrimAttribute_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace isaac_ros2_messages

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, isaac_ros2_messages, srv, GetPrimAttribute_Response)() {
  return &::isaac_ros2_messages::srv::rosidl_typesupport_c::GetPrimAttribute_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "isaac_ros2_messages/srv/detail/get_prim_attribute__struct.h"
// already included above
// #include "isaac_ros2_messages/srv/detail/get_prim_attribute__type_support.h"
// already included above
// #include "isaac_ros2_messages/srv/detail/get_prim_attribute__functions.h"
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

typedef struct _GetPrimAttribute_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetPrimAttribute_Event_type_support_ids_t;

static const _GetPrimAttribute_Event_type_support_ids_t _GetPrimAttribute_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetPrimAttribute_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetPrimAttribute_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetPrimAttribute_Event_type_support_symbol_names_t _GetPrimAttribute_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, isaac_ros2_messages, srv, GetPrimAttribute_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, isaac_ros2_messages, srv, GetPrimAttribute_Event)),
  }
};

typedef struct _GetPrimAttribute_Event_type_support_data_t
{
  void * data[2];
} _GetPrimAttribute_Event_type_support_data_t;

static _GetPrimAttribute_Event_type_support_data_t _GetPrimAttribute_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetPrimAttribute_Event_message_typesupport_map = {
  2,
  "isaac_ros2_messages",
  &_GetPrimAttribute_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetPrimAttribute_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetPrimAttribute_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetPrimAttribute_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetPrimAttribute_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &isaac_ros2_messages__srv__GetPrimAttribute_Event__get_type_hash,
  &isaac_ros2_messages__srv__GetPrimAttribute_Event__get_type_description,
  &isaac_ros2_messages__srv__GetPrimAttribute_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace isaac_ros2_messages

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, isaac_ros2_messages, srv, GetPrimAttribute_Event)() {
  return &::isaac_ros2_messages::srv::rosidl_typesupport_c::GetPrimAttribute_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "isaac_ros2_messages/srv/detail/get_prim_attribute__type_support.h"
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
typedef struct _GetPrimAttribute_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetPrimAttribute_type_support_ids_t;

static const _GetPrimAttribute_type_support_ids_t _GetPrimAttribute_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetPrimAttribute_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetPrimAttribute_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetPrimAttribute_type_support_symbol_names_t _GetPrimAttribute_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, isaac_ros2_messages, srv, GetPrimAttribute)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, isaac_ros2_messages, srv, GetPrimAttribute)),
  }
};

typedef struct _GetPrimAttribute_type_support_data_t
{
  void * data[2];
} _GetPrimAttribute_type_support_data_t;

static _GetPrimAttribute_type_support_data_t _GetPrimAttribute_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetPrimAttribute_service_typesupport_map = {
  2,
  "isaac_ros2_messages",
  &_GetPrimAttribute_service_typesupport_ids.typesupport_identifier[0],
  &_GetPrimAttribute_service_typesupport_symbol_names.symbol_name[0],
  &_GetPrimAttribute_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetPrimAttribute_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetPrimAttribute_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &GetPrimAttribute_Request_message_type_support_handle,
  &GetPrimAttribute_Response_message_type_support_handle,
  &GetPrimAttribute_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    isaac_ros2_messages,
    srv,
    GetPrimAttribute
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    isaac_ros2_messages,
    srv,
    GetPrimAttribute
  ),
  &isaac_ros2_messages__srv__GetPrimAttribute__get_type_hash,
  &isaac_ros2_messages__srv__GetPrimAttribute__get_type_description,
  &isaac_ros2_messages__srv__GetPrimAttribute__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace isaac_ros2_messages

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, isaac_ros2_messages, srv, GetPrimAttribute)() {
  return &::isaac_ros2_messages::srv::rosidl_typesupport_c::GetPrimAttribute_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
