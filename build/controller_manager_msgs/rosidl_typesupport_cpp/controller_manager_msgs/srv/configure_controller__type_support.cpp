// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from controller_manager_msgs:srv/ConfigureController.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "controller_manager_msgs/srv/detail/configure_controller__functions.h"
#include "controller_manager_msgs/srv/detail/configure_controller__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace controller_manager_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ConfigureController_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ConfigureController_Request_type_support_ids_t;

static const _ConfigureController_Request_type_support_ids_t _ConfigureController_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ConfigureController_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ConfigureController_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ConfigureController_Request_type_support_symbol_names_t _ConfigureController_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, controller_manager_msgs, srv, ConfigureController_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, controller_manager_msgs, srv, ConfigureController_Request)),
  }
};

typedef struct _ConfigureController_Request_type_support_data_t
{
  void * data[2];
} _ConfigureController_Request_type_support_data_t;

static _ConfigureController_Request_type_support_data_t _ConfigureController_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ConfigureController_Request_message_typesupport_map = {
  2,
  "controller_manager_msgs",
  &_ConfigureController_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ConfigureController_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ConfigureController_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ConfigureController_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ConfigureController_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &controller_manager_msgs__srv__ConfigureController_Request__get_type_hash,
  &controller_manager_msgs__srv__ConfigureController_Request__get_type_description,
  &controller_manager_msgs__srv__ConfigureController_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace controller_manager_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<controller_manager_msgs::srv::ConfigureController_Request>()
{
  return &::controller_manager_msgs::srv::rosidl_typesupport_cpp::ConfigureController_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, controller_manager_msgs, srv, ConfigureController_Request)() {
  return get_message_type_support_handle<controller_manager_msgs::srv::ConfigureController_Request>();
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
// #include "controller_manager_msgs/srv/detail/configure_controller__functions.h"
// already included above
// #include "controller_manager_msgs/srv/detail/configure_controller__struct.hpp"
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

namespace controller_manager_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ConfigureController_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ConfigureController_Response_type_support_ids_t;

static const _ConfigureController_Response_type_support_ids_t _ConfigureController_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ConfigureController_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ConfigureController_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ConfigureController_Response_type_support_symbol_names_t _ConfigureController_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, controller_manager_msgs, srv, ConfigureController_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, controller_manager_msgs, srv, ConfigureController_Response)),
  }
};

typedef struct _ConfigureController_Response_type_support_data_t
{
  void * data[2];
} _ConfigureController_Response_type_support_data_t;

static _ConfigureController_Response_type_support_data_t _ConfigureController_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ConfigureController_Response_message_typesupport_map = {
  2,
  "controller_manager_msgs",
  &_ConfigureController_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ConfigureController_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ConfigureController_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ConfigureController_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ConfigureController_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &controller_manager_msgs__srv__ConfigureController_Response__get_type_hash,
  &controller_manager_msgs__srv__ConfigureController_Response__get_type_description,
  &controller_manager_msgs__srv__ConfigureController_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace controller_manager_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<controller_manager_msgs::srv::ConfigureController_Response>()
{
  return &::controller_manager_msgs::srv::rosidl_typesupport_cpp::ConfigureController_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, controller_manager_msgs, srv, ConfigureController_Response)() {
  return get_message_type_support_handle<controller_manager_msgs::srv::ConfigureController_Response>();
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
// #include "controller_manager_msgs/srv/detail/configure_controller__functions.h"
// already included above
// #include "controller_manager_msgs/srv/detail/configure_controller__struct.hpp"
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

namespace controller_manager_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ConfigureController_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ConfigureController_Event_type_support_ids_t;

static const _ConfigureController_Event_type_support_ids_t _ConfigureController_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ConfigureController_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ConfigureController_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ConfigureController_Event_type_support_symbol_names_t _ConfigureController_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, controller_manager_msgs, srv, ConfigureController_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, controller_manager_msgs, srv, ConfigureController_Event)),
  }
};

typedef struct _ConfigureController_Event_type_support_data_t
{
  void * data[2];
} _ConfigureController_Event_type_support_data_t;

static _ConfigureController_Event_type_support_data_t _ConfigureController_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ConfigureController_Event_message_typesupport_map = {
  2,
  "controller_manager_msgs",
  &_ConfigureController_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ConfigureController_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ConfigureController_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ConfigureController_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ConfigureController_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &controller_manager_msgs__srv__ConfigureController_Event__get_type_hash,
  &controller_manager_msgs__srv__ConfigureController_Event__get_type_description,
  &controller_manager_msgs__srv__ConfigureController_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace controller_manager_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<controller_manager_msgs::srv::ConfigureController_Event>()
{
  return &::controller_manager_msgs::srv::rosidl_typesupport_cpp::ConfigureController_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, controller_manager_msgs, srv, ConfigureController_Event)() {
  return get_message_type_support_handle<controller_manager_msgs::srv::ConfigureController_Event>();
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
// #include "controller_manager_msgs/srv/detail/configure_controller__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace controller_manager_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ConfigureController_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ConfigureController_type_support_ids_t;

static const _ConfigureController_type_support_ids_t _ConfigureController_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ConfigureController_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ConfigureController_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ConfigureController_type_support_symbol_names_t _ConfigureController_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, controller_manager_msgs, srv, ConfigureController)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, controller_manager_msgs, srv, ConfigureController)),
  }
};

typedef struct _ConfigureController_type_support_data_t
{
  void * data[2];
} _ConfigureController_type_support_data_t;

static _ConfigureController_type_support_data_t _ConfigureController_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ConfigureController_service_typesupport_map = {
  2,
  "controller_manager_msgs",
  &_ConfigureController_service_typesupport_ids.typesupport_identifier[0],
  &_ConfigureController_service_typesupport_symbol_names.symbol_name[0],
  &_ConfigureController_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ConfigureController_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ConfigureController_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<controller_manager_msgs::srv::ConfigureController_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<controller_manager_msgs::srv::ConfigureController_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<controller_manager_msgs::srv::ConfigureController_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<controller_manager_msgs::srv::ConfigureController>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<controller_manager_msgs::srv::ConfigureController>,
  &controller_manager_msgs__srv__ConfigureController__get_type_hash,
  &controller_manager_msgs__srv__ConfigureController__get_type_description,
  &controller_manager_msgs__srv__ConfigureController__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace controller_manager_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<controller_manager_msgs::srv::ConfigureController>()
{
  return &::controller_manager_msgs::srv::rosidl_typesupport_cpp::ConfigureController_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, controller_manager_msgs, srv, ConfigureController)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<controller_manager_msgs::srv::ConfigureController>();
}

#ifdef __cplusplus
}
#endif
