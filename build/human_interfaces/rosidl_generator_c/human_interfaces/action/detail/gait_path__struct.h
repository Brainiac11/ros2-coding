// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from human_interfaces:action/GaitPath.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "human_interfaces/action/gait_path.h"


#ifndef HUMAN_INTERFACES__ACTION__DETAIL__GAIT_PATH__STRUCT_H_
#define HUMAN_INTERFACES__ACTION__DETAIL__GAIT_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'start_point'
// Member 'end_point'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/GaitPath in the package human_interfaces.
typedef struct human_interfaces__action__GaitPath_Goal
{
  rosidl_runtime_c__double__Sequence start_point;
  rosidl_runtime_c__double__Sequence end_point;
  int32_t interpolation_time_count;
  bool is_reversed;
  double height;
} human_interfaces__action__GaitPath_Goal;

// Struct for a sequence of human_interfaces__action__GaitPath_Goal.
typedef struct human_interfaces__action__GaitPath_Goal__Sequence
{
  human_interfaces__action__GaitPath_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} human_interfaces__action__GaitPath_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'joint_angles'
#include "std_msgs/msg/detail/float64_multi_array__struct.h"

/// Struct defined in action/GaitPath in the package human_interfaces.
typedef struct human_interfaces__action__GaitPath_Result
{
  std_msgs__msg__Float64MultiArray__Sequence joint_angles;
} human_interfaces__action__GaitPath_Result;

// Struct for a sequence of human_interfaces__action__GaitPath_Result.
typedef struct human_interfaces__action__GaitPath_Result__Sequence
{
  human_interfaces__action__GaitPath_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} human_interfaces__action__GaitPath_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'partial_joint_angles'
// already included above
// #include "std_msgs/msg/detail/float64_multi_array__struct.h"

/// Struct defined in action/GaitPath in the package human_interfaces.
typedef struct human_interfaces__action__GaitPath_Feedback
{
  std_msgs__msg__Float64MultiArray__Sequence partial_joint_angles;
} human_interfaces__action__GaitPath_Feedback;

// Struct for a sequence of human_interfaces__action__GaitPath_Feedback.
typedef struct human_interfaces__action__GaitPath_Feedback__Sequence
{
  human_interfaces__action__GaitPath_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} human_interfaces__action__GaitPath_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "human_interfaces/action/detail/gait_path__struct.h"

/// Struct defined in action/GaitPath in the package human_interfaces.
typedef struct human_interfaces__action__GaitPath_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  human_interfaces__action__GaitPath_Goal goal;
} human_interfaces__action__GaitPath_SendGoal_Request;

// Struct for a sequence of human_interfaces__action__GaitPath_SendGoal_Request.
typedef struct human_interfaces__action__GaitPath_SendGoal_Request__Sequence
{
  human_interfaces__action__GaitPath_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} human_interfaces__action__GaitPath_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/GaitPath in the package human_interfaces.
typedef struct human_interfaces__action__GaitPath_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} human_interfaces__action__GaitPath_SendGoal_Response;

// Struct for a sequence of human_interfaces__action__GaitPath_SendGoal_Response.
typedef struct human_interfaces__action__GaitPath_SendGoal_Response__Sequence
{
  human_interfaces__action__GaitPath_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} human_interfaces__action__GaitPath_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  human_interfaces__action__GaitPath_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  human_interfaces__action__GaitPath_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/GaitPath in the package human_interfaces.
typedef struct human_interfaces__action__GaitPath_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  human_interfaces__action__GaitPath_SendGoal_Request__Sequence request;
  human_interfaces__action__GaitPath_SendGoal_Response__Sequence response;
} human_interfaces__action__GaitPath_SendGoal_Event;

// Struct for a sequence of human_interfaces__action__GaitPath_SendGoal_Event.
typedef struct human_interfaces__action__GaitPath_SendGoal_Event__Sequence
{
  human_interfaces__action__GaitPath_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} human_interfaces__action__GaitPath_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/GaitPath in the package human_interfaces.
typedef struct human_interfaces__action__GaitPath_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} human_interfaces__action__GaitPath_GetResult_Request;

// Struct for a sequence of human_interfaces__action__GaitPath_GetResult_Request.
typedef struct human_interfaces__action__GaitPath_GetResult_Request__Sequence
{
  human_interfaces__action__GaitPath_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} human_interfaces__action__GaitPath_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "human_interfaces/action/detail/gait_path__struct.h"

/// Struct defined in action/GaitPath in the package human_interfaces.
typedef struct human_interfaces__action__GaitPath_GetResult_Response
{
  int8_t status;
  human_interfaces__action__GaitPath_Result result;
} human_interfaces__action__GaitPath_GetResult_Response;

// Struct for a sequence of human_interfaces__action__GaitPath_GetResult_Response.
typedef struct human_interfaces__action__GaitPath_GetResult_Response__Sequence
{
  human_interfaces__action__GaitPath_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} human_interfaces__action__GaitPath_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  human_interfaces__action__GaitPath_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  human_interfaces__action__GaitPath_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/GaitPath in the package human_interfaces.
typedef struct human_interfaces__action__GaitPath_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  human_interfaces__action__GaitPath_GetResult_Request__Sequence request;
  human_interfaces__action__GaitPath_GetResult_Response__Sequence response;
} human_interfaces__action__GaitPath_GetResult_Event;

// Struct for a sequence of human_interfaces__action__GaitPath_GetResult_Event.
typedef struct human_interfaces__action__GaitPath_GetResult_Event__Sequence
{
  human_interfaces__action__GaitPath_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} human_interfaces__action__GaitPath_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "human_interfaces/action/detail/gait_path__struct.h"

/// Struct defined in action/GaitPath in the package human_interfaces.
typedef struct human_interfaces__action__GaitPath_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  human_interfaces__action__GaitPath_Feedback feedback;
} human_interfaces__action__GaitPath_FeedbackMessage;

// Struct for a sequence of human_interfaces__action__GaitPath_FeedbackMessage.
typedef struct human_interfaces__action__GaitPath_FeedbackMessage__Sequence
{
  human_interfaces__action__GaitPath_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} human_interfaces__action__GaitPath_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HUMAN_INTERFACES__ACTION__DETAIL__GAIT_PATH__STRUCT_H_
