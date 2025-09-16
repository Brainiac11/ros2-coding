// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from isaac_ros2_messages:srv/GetPrims.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "isaac_ros2_messages/srv/detail/get_prims__functions.h"
#include "isaac_ros2_messages/srv/detail/get_prims__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace isaac_ros2_messages
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetPrims_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetPrims_Request_type_support_ids_t;

static const _GetPrims_Request_type_support_ids_t _GetPrims_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetPrims_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetPrims_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetPrims_Request_type_support_symbol_names_t _GetPrims_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, isaac_ros2_messages, srv, GetPrims_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, isaac_ros2_messages, srv, GetPrims_Request)),
  }
};

typedef struct _GetPrims_Request_type_support_data_t
{
  void * data[2];
} _GetPrims_Request_type_support_data_t;

static _GetPrims_Request_type_support_data_t _GetPrims_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetPrims_Request_message_typesupport_map = {
  2,
  "isaac_ros2_messages",
  &_GetPrims_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetPrims_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetPrims_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetPrims_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetPrims_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &isaac_ros2_messages__srv__GetPrims_Request__get_type_hash,
  &isaac_ros2_messages__srv__GetPrims_Request__get_type_description,
  &isaac_ros2_messages__srv__GetPrims_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace isaac_ros2_messages

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<isaac_ros2_messages::srv::GetPrims_Request>()
{
  return &::isaac_ros2_messages::srv::rosidl_typesupport_cpp::GetPrims_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, isaac_ros2_messages, srv, GetPrims_Request)() {
  return get_message_type_support_handle<isaac_ros2_messages::srv::GetPrims_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "isaac_ros2_messages/srv/detail/get_prims__functions.h"
// already included above
// #include "isaac_ros2_messages/srv/detail/get_prims__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace isaac_ros2_messages
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetPrims_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetPrims_Response_type_support_ids_t;

static const _GetPrims_Response_type_support_ids_t _GetPrims_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetPrims_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetPrims_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetPrims_Response_type_support_symbol_names_t _GetPrims_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, isaac_ros2_messages, srv, GetPrims_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, isaac_ros2_messages, srv, GetPrims_Response)),
  }
};

typedef struct _GetPrims_Response_type_support_data_t
{
  void * data[2];
} _GetPrims_Response_type_support_data_t;

static _GetPrims_Response_type_support_data_t _GetPrims_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetPrims_Response_message_typesupport_map = {
  2,
  "isaac_ros2_messages",
  &_GetPrims_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetPrims_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetPrims_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetPrims_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetPrims_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &isaac_ros2_messages__srv__GetPrims_Response__get_type_hash,
  &isaac_ros2_messages__srv__GetPrims_Response__get_type_description,
  &isaac_ros2_messages__srv__GetPrims_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace isaac_ros2_messages

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<isaac_ros2_messages::srv::GetPrims_Response>()
{
  return &::isaac_ros2_messages::srv::rosidl_typesupport_cpp::GetPrims_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, isaac_ros2_messages, srv, GetPrims_Response)() {
  return get_message_type_support_handle<isaac_ros2_messages::srv::GetPrims_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "isaac_ros2_messages/srv/detail/get_prims__functions.h"
// already included above
// #include "isaac_ros2_messages/srv/detail/get_prims__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace isaac_ros2_messages
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetPrims_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetPrims_Event_type_support_ids_t;

static const _GetPrims_Event_type_support_ids_t _GetPrims_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetPrims_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetPrims_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetPrims_Event_type_support_symbol_names_t _GetPrims_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, isaac_ros2_messages, srv, GetPrims_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, isaac_ros2_messages, srv, GetPrims_Event)),
  }
};

typedef struct _GetPrims_Event_type_support_data_t
{
  void * data[2];
} _GetPrims_Event_type_support_data_t;

static _GetPrims_Event_type_support_data_t _GetPrims_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetPrims_Event_message_typesupport_map = {
  2,
  "isaac_ros2_messages",
  &_GetPrims_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetPrims_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetPrims_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetPrims_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetPrims_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &isaac_ros2_messages__srv__GetPrims_Event__get_type_hash,
  &isaac_ros2_messages__srv__GetPrims_Event__get_type_description,
  &isaac_ros2_messages__srv__GetPrims_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace isaac_ros2_messages

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<isaac_ros2_messages::srv::GetPrims_Event>()
{
  return &::isaac_ros2_messages::srv::rosidl_typesupport_cpp::GetPrims_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, isaac_ros2_messages, srv, GetPrims_Event)() {
  return get_message_type_support_handle<isaac_ros2_messages::srv::GetPrims_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "isaac_ros2_messages/srv/detail/get_prims__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace isaac_ros2_messages
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetPrims_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetPrims_type_support_ids_t;

static const _GetPrims_type_support_ids_t _GetPrims_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetPrims_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetPrims_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetPrims_type_support_symbol_names_t _GetPrims_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, isaac_ros2_messages, srv, GetPrims)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, isaac_ros2_messages, srv, GetPrims)),
  }
};

typedef struct _GetPrims_type_support_data_t
{
  void * data[2];
} _GetPrims_type_support_data_t;

static _GetPrims_type_support_data_t _GetPrims_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetPrims_service_typesupport_map = {
  2,
  "isaac_ros2_messages",
  &_GetPrims_service_typesupport_ids.typesupport_identifier[0],
  &_GetPrims_service_typesupport_symbol_names.symbol_name[0],
  &_GetPrims_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetPrims_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetPrims_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<isaac_ros2_messages::srv::GetPrims_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<isaac_ros2_messages::srv::GetPrims_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<isaac_ros2_messages::srv::GetPrims_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<isaac_ros2_messages::srv::GetPrims>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<isaac_ros2_messages::srv::GetPrims>,
  &isaac_ros2_messages__srv__GetPrims__get_type_hash,
  &isaac_ros2_messages__srv__GetPrims__get_type_description,
  &isaac_ros2_messages__srv__GetPrims__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace isaac_ros2_messages

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<isaac_ros2_messages::srv::GetPrims>()
{
  return &::isaac_ros2_messages::srv::rosidl_typesupport_cpp::GetPrims_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, isaac_ros2_messages, srv, GetPrims)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<isaac_ros2_messages::srv::GetPrims>();
}

#ifdef __cplusplus
}
#endif
