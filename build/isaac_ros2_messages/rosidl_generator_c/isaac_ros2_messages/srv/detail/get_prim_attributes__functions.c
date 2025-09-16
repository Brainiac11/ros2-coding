// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from isaac_ros2_messages:srv/GetPrimAttributes.idl
// generated code does not contain a copyright notice
#include "isaac_ros2_messages/srv/detail/get_prim_attributes__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `path`
#include "rosidl_runtime_c/string_functions.h"

bool
isaac_ros2_messages__srv__GetPrimAttributes_Request__init(isaac_ros2_messages__srv__GetPrimAttributes_Request * msg)
{
  if (!msg) {
    return false;
  }
  // path
  if (!rosidl_runtime_c__String__init(&msg->path)) {
    isaac_ros2_messages__srv__GetPrimAttributes_Request__fini(msg);
    return false;
  }
  return true;
}

void
isaac_ros2_messages__srv__GetPrimAttributes_Request__fini(isaac_ros2_messages__srv__GetPrimAttributes_Request * msg)
{
  if (!msg) {
    return;
  }
  // path
  rosidl_runtime_c__String__fini(&msg->path);
}

bool
isaac_ros2_messages__srv__GetPrimAttributes_Request__are_equal(const isaac_ros2_messages__srv__GetPrimAttributes_Request * lhs, const isaac_ros2_messages__srv__GetPrimAttributes_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->path), &(rhs->path)))
  {
    return false;
  }
  return true;
}

bool
isaac_ros2_messages__srv__GetPrimAttributes_Request__copy(
  const isaac_ros2_messages__srv__GetPrimAttributes_Request * input,
  isaac_ros2_messages__srv__GetPrimAttributes_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // path
  if (!rosidl_runtime_c__String__copy(
      &(input->path), &(output->path)))
  {
    return false;
  }
  return true;
}

isaac_ros2_messages__srv__GetPrimAttributes_Request *
isaac_ros2_messages__srv__GetPrimAttributes_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isaac_ros2_messages__srv__GetPrimAttributes_Request * msg = (isaac_ros2_messages__srv__GetPrimAttributes_Request *)allocator.allocate(sizeof(isaac_ros2_messages__srv__GetPrimAttributes_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(isaac_ros2_messages__srv__GetPrimAttributes_Request));
  bool success = isaac_ros2_messages__srv__GetPrimAttributes_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
isaac_ros2_messages__srv__GetPrimAttributes_Request__destroy(isaac_ros2_messages__srv__GetPrimAttributes_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    isaac_ros2_messages__srv__GetPrimAttributes_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
isaac_ros2_messages__srv__GetPrimAttributes_Request__Sequence__init(isaac_ros2_messages__srv__GetPrimAttributes_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isaac_ros2_messages__srv__GetPrimAttributes_Request * data = NULL;

  if (size) {
    data = (isaac_ros2_messages__srv__GetPrimAttributes_Request *)allocator.zero_allocate(size, sizeof(isaac_ros2_messages__srv__GetPrimAttributes_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = isaac_ros2_messages__srv__GetPrimAttributes_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        isaac_ros2_messages__srv__GetPrimAttributes_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
isaac_ros2_messages__srv__GetPrimAttributes_Request__Sequence__fini(isaac_ros2_messages__srv__GetPrimAttributes_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      isaac_ros2_messages__srv__GetPrimAttributes_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

isaac_ros2_messages__srv__GetPrimAttributes_Request__Sequence *
isaac_ros2_messages__srv__GetPrimAttributes_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isaac_ros2_messages__srv__GetPrimAttributes_Request__Sequence * array = (isaac_ros2_messages__srv__GetPrimAttributes_Request__Sequence *)allocator.allocate(sizeof(isaac_ros2_messages__srv__GetPrimAttributes_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = isaac_ros2_messages__srv__GetPrimAttributes_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
isaac_ros2_messages__srv__GetPrimAttributes_Request__Sequence__destroy(isaac_ros2_messages__srv__GetPrimAttributes_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    isaac_ros2_messages__srv__GetPrimAttributes_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
isaac_ros2_messages__srv__GetPrimAttributes_Request__Sequence__are_equal(const isaac_ros2_messages__srv__GetPrimAttributes_Request__Sequence * lhs, const isaac_ros2_messages__srv__GetPrimAttributes_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!isaac_ros2_messages__srv__GetPrimAttributes_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
isaac_ros2_messages__srv__GetPrimAttributes_Request__Sequence__copy(
  const isaac_ros2_messages__srv__GetPrimAttributes_Request__Sequence * input,
  isaac_ros2_messages__srv__GetPrimAttributes_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(isaac_ros2_messages__srv__GetPrimAttributes_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    isaac_ros2_messages__srv__GetPrimAttributes_Request * data =
      (isaac_ros2_messages__srv__GetPrimAttributes_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!isaac_ros2_messages__srv__GetPrimAttributes_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          isaac_ros2_messages__srv__GetPrimAttributes_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!isaac_ros2_messages__srv__GetPrimAttributes_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `names`
// Member `displays`
// Member `types`
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
isaac_ros2_messages__srv__GetPrimAttributes_Response__init(isaac_ros2_messages__srv__GetPrimAttributes_Response * msg)
{
  if (!msg) {
    return false;
  }
  // names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->names, 0)) {
    isaac_ros2_messages__srv__GetPrimAttributes_Response__fini(msg);
    return false;
  }
  // displays
  if (!rosidl_runtime_c__String__Sequence__init(&msg->displays, 0)) {
    isaac_ros2_messages__srv__GetPrimAttributes_Response__fini(msg);
    return false;
  }
  // types
  if (!rosidl_runtime_c__String__Sequence__init(&msg->types, 0)) {
    isaac_ros2_messages__srv__GetPrimAttributes_Response__fini(msg);
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    isaac_ros2_messages__srv__GetPrimAttributes_Response__fini(msg);
    return false;
  }
  return true;
}

void
isaac_ros2_messages__srv__GetPrimAttributes_Response__fini(isaac_ros2_messages__srv__GetPrimAttributes_Response * msg)
{
  if (!msg) {
    return;
  }
  // names
  rosidl_runtime_c__String__Sequence__fini(&msg->names);
  // displays
  rosidl_runtime_c__String__Sequence__fini(&msg->displays);
  // types
  rosidl_runtime_c__String__Sequence__fini(&msg->types);
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
isaac_ros2_messages__srv__GetPrimAttributes_Response__are_equal(const isaac_ros2_messages__srv__GetPrimAttributes_Response * lhs, const isaac_ros2_messages__srv__GetPrimAttributes_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->names), &(rhs->names)))
  {
    return false;
  }
  // displays
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->displays), &(rhs->displays)))
  {
    return false;
  }
  // types
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->types), &(rhs->types)))
  {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
isaac_ros2_messages__srv__GetPrimAttributes_Response__copy(
  const isaac_ros2_messages__srv__GetPrimAttributes_Response * input,
  isaac_ros2_messages__srv__GetPrimAttributes_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->names), &(output->names)))
  {
    return false;
  }
  // displays
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->displays), &(output->displays)))
  {
    return false;
  }
  // types
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->types), &(output->types)))
  {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

isaac_ros2_messages__srv__GetPrimAttributes_Response *
isaac_ros2_messages__srv__GetPrimAttributes_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isaac_ros2_messages__srv__GetPrimAttributes_Response * msg = (isaac_ros2_messages__srv__GetPrimAttributes_Response *)allocator.allocate(sizeof(isaac_ros2_messages__srv__GetPrimAttributes_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(isaac_ros2_messages__srv__GetPrimAttributes_Response));
  bool success = isaac_ros2_messages__srv__GetPrimAttributes_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
isaac_ros2_messages__srv__GetPrimAttributes_Response__destroy(isaac_ros2_messages__srv__GetPrimAttributes_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    isaac_ros2_messages__srv__GetPrimAttributes_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
isaac_ros2_messages__srv__GetPrimAttributes_Response__Sequence__init(isaac_ros2_messages__srv__GetPrimAttributes_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isaac_ros2_messages__srv__GetPrimAttributes_Response * data = NULL;

  if (size) {
    data = (isaac_ros2_messages__srv__GetPrimAttributes_Response *)allocator.zero_allocate(size, sizeof(isaac_ros2_messages__srv__GetPrimAttributes_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = isaac_ros2_messages__srv__GetPrimAttributes_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        isaac_ros2_messages__srv__GetPrimAttributes_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
isaac_ros2_messages__srv__GetPrimAttributes_Response__Sequence__fini(isaac_ros2_messages__srv__GetPrimAttributes_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      isaac_ros2_messages__srv__GetPrimAttributes_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

isaac_ros2_messages__srv__GetPrimAttributes_Response__Sequence *
isaac_ros2_messages__srv__GetPrimAttributes_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isaac_ros2_messages__srv__GetPrimAttributes_Response__Sequence * array = (isaac_ros2_messages__srv__GetPrimAttributes_Response__Sequence *)allocator.allocate(sizeof(isaac_ros2_messages__srv__GetPrimAttributes_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = isaac_ros2_messages__srv__GetPrimAttributes_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
isaac_ros2_messages__srv__GetPrimAttributes_Response__Sequence__destroy(isaac_ros2_messages__srv__GetPrimAttributes_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    isaac_ros2_messages__srv__GetPrimAttributes_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
isaac_ros2_messages__srv__GetPrimAttributes_Response__Sequence__are_equal(const isaac_ros2_messages__srv__GetPrimAttributes_Response__Sequence * lhs, const isaac_ros2_messages__srv__GetPrimAttributes_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!isaac_ros2_messages__srv__GetPrimAttributes_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
isaac_ros2_messages__srv__GetPrimAttributes_Response__Sequence__copy(
  const isaac_ros2_messages__srv__GetPrimAttributes_Response__Sequence * input,
  isaac_ros2_messages__srv__GetPrimAttributes_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(isaac_ros2_messages__srv__GetPrimAttributes_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    isaac_ros2_messages__srv__GetPrimAttributes_Response * data =
      (isaac_ros2_messages__srv__GetPrimAttributes_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!isaac_ros2_messages__srv__GetPrimAttributes_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          isaac_ros2_messages__srv__GetPrimAttributes_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!isaac_ros2_messages__srv__GetPrimAttributes_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "isaac_ros2_messages/srv/detail/get_prim_attributes__functions.h"

bool
isaac_ros2_messages__srv__GetPrimAttributes_Event__init(isaac_ros2_messages__srv__GetPrimAttributes_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    isaac_ros2_messages__srv__GetPrimAttributes_Event__fini(msg);
    return false;
  }
  // request
  if (!isaac_ros2_messages__srv__GetPrimAttributes_Request__Sequence__init(&msg->request, 0)) {
    isaac_ros2_messages__srv__GetPrimAttributes_Event__fini(msg);
    return false;
  }
  // response
  if (!isaac_ros2_messages__srv__GetPrimAttributes_Response__Sequence__init(&msg->response, 0)) {
    isaac_ros2_messages__srv__GetPrimAttributes_Event__fini(msg);
    return false;
  }
  return true;
}

void
isaac_ros2_messages__srv__GetPrimAttributes_Event__fini(isaac_ros2_messages__srv__GetPrimAttributes_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  isaac_ros2_messages__srv__GetPrimAttributes_Request__Sequence__fini(&msg->request);
  // response
  isaac_ros2_messages__srv__GetPrimAttributes_Response__Sequence__fini(&msg->response);
}

bool
isaac_ros2_messages__srv__GetPrimAttributes_Event__are_equal(const isaac_ros2_messages__srv__GetPrimAttributes_Event * lhs, const isaac_ros2_messages__srv__GetPrimAttributes_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!isaac_ros2_messages__srv__GetPrimAttributes_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!isaac_ros2_messages__srv__GetPrimAttributes_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
isaac_ros2_messages__srv__GetPrimAttributes_Event__copy(
  const isaac_ros2_messages__srv__GetPrimAttributes_Event * input,
  isaac_ros2_messages__srv__GetPrimAttributes_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!isaac_ros2_messages__srv__GetPrimAttributes_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!isaac_ros2_messages__srv__GetPrimAttributes_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

isaac_ros2_messages__srv__GetPrimAttributes_Event *
isaac_ros2_messages__srv__GetPrimAttributes_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isaac_ros2_messages__srv__GetPrimAttributes_Event * msg = (isaac_ros2_messages__srv__GetPrimAttributes_Event *)allocator.allocate(sizeof(isaac_ros2_messages__srv__GetPrimAttributes_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(isaac_ros2_messages__srv__GetPrimAttributes_Event));
  bool success = isaac_ros2_messages__srv__GetPrimAttributes_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
isaac_ros2_messages__srv__GetPrimAttributes_Event__destroy(isaac_ros2_messages__srv__GetPrimAttributes_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    isaac_ros2_messages__srv__GetPrimAttributes_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
isaac_ros2_messages__srv__GetPrimAttributes_Event__Sequence__init(isaac_ros2_messages__srv__GetPrimAttributes_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isaac_ros2_messages__srv__GetPrimAttributes_Event * data = NULL;

  if (size) {
    data = (isaac_ros2_messages__srv__GetPrimAttributes_Event *)allocator.zero_allocate(size, sizeof(isaac_ros2_messages__srv__GetPrimAttributes_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = isaac_ros2_messages__srv__GetPrimAttributes_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        isaac_ros2_messages__srv__GetPrimAttributes_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
isaac_ros2_messages__srv__GetPrimAttributes_Event__Sequence__fini(isaac_ros2_messages__srv__GetPrimAttributes_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      isaac_ros2_messages__srv__GetPrimAttributes_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

isaac_ros2_messages__srv__GetPrimAttributes_Event__Sequence *
isaac_ros2_messages__srv__GetPrimAttributes_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isaac_ros2_messages__srv__GetPrimAttributes_Event__Sequence * array = (isaac_ros2_messages__srv__GetPrimAttributes_Event__Sequence *)allocator.allocate(sizeof(isaac_ros2_messages__srv__GetPrimAttributes_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = isaac_ros2_messages__srv__GetPrimAttributes_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
isaac_ros2_messages__srv__GetPrimAttributes_Event__Sequence__destroy(isaac_ros2_messages__srv__GetPrimAttributes_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    isaac_ros2_messages__srv__GetPrimAttributes_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
isaac_ros2_messages__srv__GetPrimAttributes_Event__Sequence__are_equal(const isaac_ros2_messages__srv__GetPrimAttributes_Event__Sequence * lhs, const isaac_ros2_messages__srv__GetPrimAttributes_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!isaac_ros2_messages__srv__GetPrimAttributes_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
isaac_ros2_messages__srv__GetPrimAttributes_Event__Sequence__copy(
  const isaac_ros2_messages__srv__GetPrimAttributes_Event__Sequence * input,
  isaac_ros2_messages__srv__GetPrimAttributes_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(isaac_ros2_messages__srv__GetPrimAttributes_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    isaac_ros2_messages__srv__GetPrimAttributes_Event * data =
      (isaac_ros2_messages__srv__GetPrimAttributes_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!isaac_ros2_messages__srv__GetPrimAttributes_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          isaac_ros2_messages__srv__GetPrimAttributes_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!isaac_ros2_messages__srv__GetPrimAttributes_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
