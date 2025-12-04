// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from human_interfaces:action/GaitPath.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "human_interfaces/action/detail/gait_path__functions.h"
#include "human_interfaces/action/detail/gait_path__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace human_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GaitPath_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GaitPath_Goal_type_support_ids_t;

static const _GaitPath_Goal_type_support_ids_t _GaitPath_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GaitPath_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GaitPath_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GaitPath_Goal_type_support_symbol_names_t _GaitPath_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, human_interfaces, action, GaitPath_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, human_interfaces, action, GaitPath_Goal)),
  }
};

typedef struct _GaitPath_Goal_type_support_data_t
{
  void * data[2];
} _GaitPath_Goal_type_support_data_t;

static _GaitPath_Goal_type_support_data_t _GaitPath_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GaitPath_Goal_message_typesupport_map = {
  2,
  "human_interfaces",
  &_GaitPath_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_GaitPath_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_GaitPath_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GaitPath_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GaitPath_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &human_interfaces__action__GaitPath_Goal__get_type_hash,
  &human_interfaces__action__GaitPath_Goal__get_type_description,
  &human_interfaces__action__GaitPath_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace human_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<human_interfaces::action::GaitPath_Goal>()
{
  return &::human_interfaces::action::rosidl_typesupport_cpp::GaitPath_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, human_interfaces, action, GaitPath_Goal)() {
  return get_message_type_support_handle<human_interfaces::action::GaitPath_Goal>();
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
// #include "human_interfaces/action/detail/gait_path__functions.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__struct.hpp"
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

namespace human_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GaitPath_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GaitPath_Result_type_support_ids_t;

static const _GaitPath_Result_type_support_ids_t _GaitPath_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GaitPath_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GaitPath_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GaitPath_Result_type_support_symbol_names_t _GaitPath_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, human_interfaces, action, GaitPath_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, human_interfaces, action, GaitPath_Result)),
  }
};

typedef struct _GaitPath_Result_type_support_data_t
{
  void * data[2];
} _GaitPath_Result_type_support_data_t;

static _GaitPath_Result_type_support_data_t _GaitPath_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GaitPath_Result_message_typesupport_map = {
  2,
  "human_interfaces",
  &_GaitPath_Result_message_typesupport_ids.typesupport_identifier[0],
  &_GaitPath_Result_message_typesupport_symbol_names.symbol_name[0],
  &_GaitPath_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GaitPath_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GaitPath_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &human_interfaces__action__GaitPath_Result__get_type_hash,
  &human_interfaces__action__GaitPath_Result__get_type_description,
  &human_interfaces__action__GaitPath_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace human_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<human_interfaces::action::GaitPath_Result>()
{
  return &::human_interfaces::action::rosidl_typesupport_cpp::GaitPath_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, human_interfaces, action, GaitPath_Result)() {
  return get_message_type_support_handle<human_interfaces::action::GaitPath_Result>();
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
// #include "human_interfaces/action/detail/gait_path__functions.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__struct.hpp"
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

namespace human_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GaitPath_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GaitPath_Feedback_type_support_ids_t;

static const _GaitPath_Feedback_type_support_ids_t _GaitPath_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GaitPath_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GaitPath_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GaitPath_Feedback_type_support_symbol_names_t _GaitPath_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, human_interfaces, action, GaitPath_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, human_interfaces, action, GaitPath_Feedback)),
  }
};

typedef struct _GaitPath_Feedback_type_support_data_t
{
  void * data[2];
} _GaitPath_Feedback_type_support_data_t;

static _GaitPath_Feedback_type_support_data_t _GaitPath_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GaitPath_Feedback_message_typesupport_map = {
  2,
  "human_interfaces",
  &_GaitPath_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_GaitPath_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_GaitPath_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GaitPath_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GaitPath_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &human_interfaces__action__GaitPath_Feedback__get_type_hash,
  &human_interfaces__action__GaitPath_Feedback__get_type_description,
  &human_interfaces__action__GaitPath_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace human_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<human_interfaces::action::GaitPath_Feedback>()
{
  return &::human_interfaces::action::rosidl_typesupport_cpp::GaitPath_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, human_interfaces, action, GaitPath_Feedback)() {
  return get_message_type_support_handle<human_interfaces::action::GaitPath_Feedback>();
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
// #include "human_interfaces/action/detail/gait_path__functions.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__struct.hpp"
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

namespace human_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GaitPath_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GaitPath_SendGoal_Request_type_support_ids_t;

static const _GaitPath_SendGoal_Request_type_support_ids_t _GaitPath_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GaitPath_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GaitPath_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GaitPath_SendGoal_Request_type_support_symbol_names_t _GaitPath_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, human_interfaces, action, GaitPath_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, human_interfaces, action, GaitPath_SendGoal_Request)),
  }
};

typedef struct _GaitPath_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _GaitPath_SendGoal_Request_type_support_data_t;

static _GaitPath_SendGoal_Request_type_support_data_t _GaitPath_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GaitPath_SendGoal_Request_message_typesupport_map = {
  2,
  "human_interfaces",
  &_GaitPath_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GaitPath_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GaitPath_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GaitPath_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GaitPath_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &human_interfaces__action__GaitPath_SendGoal_Request__get_type_hash,
  &human_interfaces__action__GaitPath_SendGoal_Request__get_type_description,
  &human_interfaces__action__GaitPath_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace human_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<human_interfaces::action::GaitPath_SendGoal_Request>()
{
  return &::human_interfaces::action::rosidl_typesupport_cpp::GaitPath_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, human_interfaces, action, GaitPath_SendGoal_Request)() {
  return get_message_type_support_handle<human_interfaces::action::GaitPath_SendGoal_Request>();
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
// #include "human_interfaces/action/detail/gait_path__functions.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__struct.hpp"
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

namespace human_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GaitPath_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GaitPath_SendGoal_Response_type_support_ids_t;

static const _GaitPath_SendGoal_Response_type_support_ids_t _GaitPath_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GaitPath_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GaitPath_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GaitPath_SendGoal_Response_type_support_symbol_names_t _GaitPath_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, human_interfaces, action, GaitPath_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, human_interfaces, action, GaitPath_SendGoal_Response)),
  }
};

typedef struct _GaitPath_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _GaitPath_SendGoal_Response_type_support_data_t;

static _GaitPath_SendGoal_Response_type_support_data_t _GaitPath_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GaitPath_SendGoal_Response_message_typesupport_map = {
  2,
  "human_interfaces",
  &_GaitPath_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GaitPath_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GaitPath_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GaitPath_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GaitPath_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &human_interfaces__action__GaitPath_SendGoal_Response__get_type_hash,
  &human_interfaces__action__GaitPath_SendGoal_Response__get_type_description,
  &human_interfaces__action__GaitPath_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace human_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<human_interfaces::action::GaitPath_SendGoal_Response>()
{
  return &::human_interfaces::action::rosidl_typesupport_cpp::GaitPath_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, human_interfaces, action, GaitPath_SendGoal_Response)() {
  return get_message_type_support_handle<human_interfaces::action::GaitPath_SendGoal_Response>();
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
// #include "human_interfaces/action/detail/gait_path__functions.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__struct.hpp"
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

namespace human_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GaitPath_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GaitPath_SendGoal_Event_type_support_ids_t;

static const _GaitPath_SendGoal_Event_type_support_ids_t _GaitPath_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GaitPath_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GaitPath_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GaitPath_SendGoal_Event_type_support_symbol_names_t _GaitPath_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, human_interfaces, action, GaitPath_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, human_interfaces, action, GaitPath_SendGoal_Event)),
  }
};

typedef struct _GaitPath_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _GaitPath_SendGoal_Event_type_support_data_t;

static _GaitPath_SendGoal_Event_type_support_data_t _GaitPath_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GaitPath_SendGoal_Event_message_typesupport_map = {
  2,
  "human_interfaces",
  &_GaitPath_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GaitPath_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GaitPath_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GaitPath_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GaitPath_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &human_interfaces__action__GaitPath_SendGoal_Event__get_type_hash,
  &human_interfaces__action__GaitPath_SendGoal_Event__get_type_description,
  &human_interfaces__action__GaitPath_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace human_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<human_interfaces::action::GaitPath_SendGoal_Event>()
{
  return &::human_interfaces::action::rosidl_typesupport_cpp::GaitPath_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, human_interfaces, action, GaitPath_SendGoal_Event)() {
  return get_message_type_support_handle<human_interfaces::action::GaitPath_SendGoal_Event>();
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
// #include "human_interfaces/action/detail/gait_path__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace human_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GaitPath_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GaitPath_SendGoal_type_support_ids_t;

static const _GaitPath_SendGoal_type_support_ids_t _GaitPath_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GaitPath_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GaitPath_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GaitPath_SendGoal_type_support_symbol_names_t _GaitPath_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, human_interfaces, action, GaitPath_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, human_interfaces, action, GaitPath_SendGoal)),
  }
};

typedef struct _GaitPath_SendGoal_type_support_data_t
{
  void * data[2];
} _GaitPath_SendGoal_type_support_data_t;

static _GaitPath_SendGoal_type_support_data_t _GaitPath_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GaitPath_SendGoal_service_typesupport_map = {
  2,
  "human_interfaces",
  &_GaitPath_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_GaitPath_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_GaitPath_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GaitPath_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GaitPath_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<human_interfaces::action::GaitPath_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<human_interfaces::action::GaitPath_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<human_interfaces::action::GaitPath_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<human_interfaces::action::GaitPath_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<human_interfaces::action::GaitPath_SendGoal>,
  &human_interfaces__action__GaitPath_SendGoal__get_type_hash,
  &human_interfaces__action__GaitPath_SendGoal__get_type_description,
  &human_interfaces__action__GaitPath_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace human_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<human_interfaces::action::GaitPath_SendGoal>()
{
  return &::human_interfaces::action::rosidl_typesupport_cpp::GaitPath_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, human_interfaces, action, GaitPath_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<human_interfaces::action::GaitPath_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__functions.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__struct.hpp"
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

namespace human_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GaitPath_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GaitPath_GetResult_Request_type_support_ids_t;

static const _GaitPath_GetResult_Request_type_support_ids_t _GaitPath_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GaitPath_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GaitPath_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GaitPath_GetResult_Request_type_support_symbol_names_t _GaitPath_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, human_interfaces, action, GaitPath_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, human_interfaces, action, GaitPath_GetResult_Request)),
  }
};

typedef struct _GaitPath_GetResult_Request_type_support_data_t
{
  void * data[2];
} _GaitPath_GetResult_Request_type_support_data_t;

static _GaitPath_GetResult_Request_type_support_data_t _GaitPath_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GaitPath_GetResult_Request_message_typesupport_map = {
  2,
  "human_interfaces",
  &_GaitPath_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GaitPath_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GaitPath_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GaitPath_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GaitPath_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &human_interfaces__action__GaitPath_GetResult_Request__get_type_hash,
  &human_interfaces__action__GaitPath_GetResult_Request__get_type_description,
  &human_interfaces__action__GaitPath_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace human_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<human_interfaces::action::GaitPath_GetResult_Request>()
{
  return &::human_interfaces::action::rosidl_typesupport_cpp::GaitPath_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, human_interfaces, action, GaitPath_GetResult_Request)() {
  return get_message_type_support_handle<human_interfaces::action::GaitPath_GetResult_Request>();
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
// #include "human_interfaces/action/detail/gait_path__functions.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__struct.hpp"
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

namespace human_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GaitPath_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GaitPath_GetResult_Response_type_support_ids_t;

static const _GaitPath_GetResult_Response_type_support_ids_t _GaitPath_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GaitPath_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GaitPath_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GaitPath_GetResult_Response_type_support_symbol_names_t _GaitPath_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, human_interfaces, action, GaitPath_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, human_interfaces, action, GaitPath_GetResult_Response)),
  }
};

typedef struct _GaitPath_GetResult_Response_type_support_data_t
{
  void * data[2];
} _GaitPath_GetResult_Response_type_support_data_t;

static _GaitPath_GetResult_Response_type_support_data_t _GaitPath_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GaitPath_GetResult_Response_message_typesupport_map = {
  2,
  "human_interfaces",
  &_GaitPath_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GaitPath_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GaitPath_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GaitPath_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GaitPath_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &human_interfaces__action__GaitPath_GetResult_Response__get_type_hash,
  &human_interfaces__action__GaitPath_GetResult_Response__get_type_description,
  &human_interfaces__action__GaitPath_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace human_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<human_interfaces::action::GaitPath_GetResult_Response>()
{
  return &::human_interfaces::action::rosidl_typesupport_cpp::GaitPath_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, human_interfaces, action, GaitPath_GetResult_Response)() {
  return get_message_type_support_handle<human_interfaces::action::GaitPath_GetResult_Response>();
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
// #include "human_interfaces/action/detail/gait_path__functions.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__struct.hpp"
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

namespace human_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GaitPath_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GaitPath_GetResult_Event_type_support_ids_t;

static const _GaitPath_GetResult_Event_type_support_ids_t _GaitPath_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GaitPath_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GaitPath_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GaitPath_GetResult_Event_type_support_symbol_names_t _GaitPath_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, human_interfaces, action, GaitPath_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, human_interfaces, action, GaitPath_GetResult_Event)),
  }
};

typedef struct _GaitPath_GetResult_Event_type_support_data_t
{
  void * data[2];
} _GaitPath_GetResult_Event_type_support_data_t;

static _GaitPath_GetResult_Event_type_support_data_t _GaitPath_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GaitPath_GetResult_Event_message_typesupport_map = {
  2,
  "human_interfaces",
  &_GaitPath_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GaitPath_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GaitPath_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GaitPath_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GaitPath_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &human_interfaces__action__GaitPath_GetResult_Event__get_type_hash,
  &human_interfaces__action__GaitPath_GetResult_Event__get_type_description,
  &human_interfaces__action__GaitPath_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace human_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<human_interfaces::action::GaitPath_GetResult_Event>()
{
  return &::human_interfaces::action::rosidl_typesupport_cpp::GaitPath_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, human_interfaces, action, GaitPath_GetResult_Event)() {
  return get_message_type_support_handle<human_interfaces::action::GaitPath_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "human_interfaces/action/detail/gait_path__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace human_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GaitPath_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GaitPath_GetResult_type_support_ids_t;

static const _GaitPath_GetResult_type_support_ids_t _GaitPath_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GaitPath_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GaitPath_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GaitPath_GetResult_type_support_symbol_names_t _GaitPath_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, human_interfaces, action, GaitPath_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, human_interfaces, action, GaitPath_GetResult)),
  }
};

typedef struct _GaitPath_GetResult_type_support_data_t
{
  void * data[2];
} _GaitPath_GetResult_type_support_data_t;

static _GaitPath_GetResult_type_support_data_t _GaitPath_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GaitPath_GetResult_service_typesupport_map = {
  2,
  "human_interfaces",
  &_GaitPath_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_GaitPath_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_GaitPath_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GaitPath_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GaitPath_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<human_interfaces::action::GaitPath_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<human_interfaces::action::GaitPath_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<human_interfaces::action::GaitPath_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<human_interfaces::action::GaitPath_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<human_interfaces::action::GaitPath_GetResult>,
  &human_interfaces__action__GaitPath_GetResult__get_type_hash,
  &human_interfaces__action__GaitPath_GetResult__get_type_description,
  &human_interfaces__action__GaitPath_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace human_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<human_interfaces::action::GaitPath_GetResult>()
{
  return &::human_interfaces::action::rosidl_typesupport_cpp::GaitPath_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, human_interfaces, action, GaitPath_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<human_interfaces::action::GaitPath_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__functions.h"
// already included above
// #include "human_interfaces/action/detail/gait_path__struct.hpp"
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

namespace human_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GaitPath_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GaitPath_FeedbackMessage_type_support_ids_t;

static const _GaitPath_FeedbackMessage_type_support_ids_t _GaitPath_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GaitPath_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GaitPath_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GaitPath_FeedbackMessage_type_support_symbol_names_t _GaitPath_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, human_interfaces, action, GaitPath_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, human_interfaces, action, GaitPath_FeedbackMessage)),
  }
};

typedef struct _GaitPath_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _GaitPath_FeedbackMessage_type_support_data_t;

static _GaitPath_FeedbackMessage_type_support_data_t _GaitPath_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GaitPath_FeedbackMessage_message_typesupport_map = {
  2,
  "human_interfaces",
  &_GaitPath_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_GaitPath_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_GaitPath_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GaitPath_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GaitPath_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &human_interfaces__action__GaitPath_FeedbackMessage__get_type_hash,
  &human_interfaces__action__GaitPath_FeedbackMessage__get_type_description,
  &human_interfaces__action__GaitPath_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace human_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<human_interfaces::action::GaitPath_FeedbackMessage>()
{
  return &::human_interfaces::action::rosidl_typesupport_cpp::GaitPath_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, human_interfaces, action, GaitPath_FeedbackMessage)() {
  return get_message_type_support_handle<human_interfaces::action::GaitPath_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "human_interfaces/action/detail/gait_path__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace human_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t GaitPath_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &human_interfaces__action__GaitPath__get_type_hash,
  &human_interfaces__action__GaitPath__get_type_description,
  &human_interfaces__action__GaitPath__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace human_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<human_interfaces::action::GaitPath>()
{
  using ::human_interfaces::action::rosidl_typesupport_cpp::GaitPath_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  GaitPath_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::human_interfaces::action::GaitPath::Impl::SendGoalService>();
  GaitPath_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::human_interfaces::action::GaitPath::Impl::GetResultService>();
  GaitPath_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::human_interfaces::action::GaitPath::Impl::CancelGoalService>();
  GaitPath_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::human_interfaces::action::GaitPath::Impl::FeedbackMessage>();
  GaitPath_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::human_interfaces::action::GaitPath::Impl::GoalStatusMessage>();
  return &GaitPath_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, human_interfaces, action, GaitPath)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<human_interfaces::action::GaitPath>();
}

#ifdef __cplusplus
}
#endif
