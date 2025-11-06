// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from human_interfaces:srv/InverseKinematics.idl
// generated code does not contain a copyright notice
#include "human_interfaces/srv/detail/inverse_kinematics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
human_interfaces__srv__InverseKinematics_Request__init(human_interfaces__srv__InverseKinematics_Request * msg)
{
  if (!msg) {
    return false;
  }
  // target_x
  // target_y
  // target_z
  // link1_length
  // link2_length
  // link3_length
  // fix_joint1
  // fix_joint2
  // fix_joint3
  // fixed_joint1_angle
  // fixed_joint2_angle
  // fixed_joint3_angle
  return true;
}

void
human_interfaces__srv__InverseKinematics_Request__fini(human_interfaces__srv__InverseKinematics_Request * msg)
{
  if (!msg) {
    return;
  }
  // target_x
  // target_y
  // target_z
  // link1_length
  // link2_length
  // link3_length
  // fix_joint1
  // fix_joint2
  // fix_joint3
  // fixed_joint1_angle
  // fixed_joint2_angle
  // fixed_joint3_angle
}

bool
human_interfaces__srv__InverseKinematics_Request__are_equal(const human_interfaces__srv__InverseKinematics_Request * lhs, const human_interfaces__srv__InverseKinematics_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_x
  if (lhs->target_x != rhs->target_x) {
    return false;
  }
  // target_y
  if (lhs->target_y != rhs->target_y) {
    return false;
  }
  // target_z
  if (lhs->target_z != rhs->target_z) {
    return false;
  }
  // link1_length
  if (lhs->link1_length != rhs->link1_length) {
    return false;
  }
  // link2_length
  if (lhs->link2_length != rhs->link2_length) {
    return false;
  }
  // link3_length
  if (lhs->link3_length != rhs->link3_length) {
    return false;
  }
  // fix_joint1
  if (lhs->fix_joint1 != rhs->fix_joint1) {
    return false;
  }
  // fix_joint2
  if (lhs->fix_joint2 != rhs->fix_joint2) {
    return false;
  }
  // fix_joint3
  if (lhs->fix_joint3 != rhs->fix_joint3) {
    return false;
  }
  // fixed_joint1_angle
  if (lhs->fixed_joint1_angle != rhs->fixed_joint1_angle) {
    return false;
  }
  // fixed_joint2_angle
  if (lhs->fixed_joint2_angle != rhs->fixed_joint2_angle) {
    return false;
  }
  // fixed_joint3_angle
  if (lhs->fixed_joint3_angle != rhs->fixed_joint3_angle) {
    return false;
  }
  return true;
}

bool
human_interfaces__srv__InverseKinematics_Request__copy(
  const human_interfaces__srv__InverseKinematics_Request * input,
  human_interfaces__srv__InverseKinematics_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // target_x
  output->target_x = input->target_x;
  // target_y
  output->target_y = input->target_y;
  // target_z
  output->target_z = input->target_z;
  // link1_length
  output->link1_length = input->link1_length;
  // link2_length
  output->link2_length = input->link2_length;
  // link3_length
  output->link3_length = input->link3_length;
  // fix_joint1
  output->fix_joint1 = input->fix_joint1;
  // fix_joint2
  output->fix_joint2 = input->fix_joint2;
  // fix_joint3
  output->fix_joint3 = input->fix_joint3;
  // fixed_joint1_angle
  output->fixed_joint1_angle = input->fixed_joint1_angle;
  // fixed_joint2_angle
  output->fixed_joint2_angle = input->fixed_joint2_angle;
  // fixed_joint3_angle
  output->fixed_joint3_angle = input->fixed_joint3_angle;
  return true;
}

human_interfaces__srv__InverseKinematics_Request *
human_interfaces__srv__InverseKinematics_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  human_interfaces__srv__InverseKinematics_Request * msg = (human_interfaces__srv__InverseKinematics_Request *)allocator.allocate(sizeof(human_interfaces__srv__InverseKinematics_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(human_interfaces__srv__InverseKinematics_Request));
  bool success = human_interfaces__srv__InverseKinematics_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
human_interfaces__srv__InverseKinematics_Request__destroy(human_interfaces__srv__InverseKinematics_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    human_interfaces__srv__InverseKinematics_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
human_interfaces__srv__InverseKinematics_Request__Sequence__init(human_interfaces__srv__InverseKinematics_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  human_interfaces__srv__InverseKinematics_Request * data = NULL;

  if (size) {
    data = (human_interfaces__srv__InverseKinematics_Request *)allocator.zero_allocate(size, sizeof(human_interfaces__srv__InverseKinematics_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = human_interfaces__srv__InverseKinematics_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        human_interfaces__srv__InverseKinematics_Request__fini(&data[i - 1]);
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
human_interfaces__srv__InverseKinematics_Request__Sequence__fini(human_interfaces__srv__InverseKinematics_Request__Sequence * array)
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
      human_interfaces__srv__InverseKinematics_Request__fini(&array->data[i]);
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

human_interfaces__srv__InverseKinematics_Request__Sequence *
human_interfaces__srv__InverseKinematics_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  human_interfaces__srv__InverseKinematics_Request__Sequence * array = (human_interfaces__srv__InverseKinematics_Request__Sequence *)allocator.allocate(sizeof(human_interfaces__srv__InverseKinematics_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = human_interfaces__srv__InverseKinematics_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
human_interfaces__srv__InverseKinematics_Request__Sequence__destroy(human_interfaces__srv__InverseKinematics_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    human_interfaces__srv__InverseKinematics_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
human_interfaces__srv__InverseKinematics_Request__Sequence__are_equal(const human_interfaces__srv__InverseKinematics_Request__Sequence * lhs, const human_interfaces__srv__InverseKinematics_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!human_interfaces__srv__InverseKinematics_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
human_interfaces__srv__InverseKinematics_Request__Sequence__copy(
  const human_interfaces__srv__InverseKinematics_Request__Sequence * input,
  human_interfaces__srv__InverseKinematics_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(human_interfaces__srv__InverseKinematics_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    human_interfaces__srv__InverseKinematics_Request * data =
      (human_interfaces__srv__InverseKinematics_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!human_interfaces__srv__InverseKinematics_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          human_interfaces__srv__InverseKinematics_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!human_interfaces__srv__InverseKinematics_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
human_interfaces__srv__InverseKinematics_Response__init(human_interfaces__srv__InverseKinematics_Response * msg)
{
  if (!msg) {
    return false;
  }
  // joint1_angle
  // joint2_angle
  // joint3_angle
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    human_interfaces__srv__InverseKinematics_Response__fini(msg);
    return false;
  }
  return true;
}

void
human_interfaces__srv__InverseKinematics_Response__fini(human_interfaces__srv__InverseKinematics_Response * msg)
{
  if (!msg) {
    return;
  }
  // joint1_angle
  // joint2_angle
  // joint3_angle
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
human_interfaces__srv__InverseKinematics_Response__are_equal(const human_interfaces__srv__InverseKinematics_Response * lhs, const human_interfaces__srv__InverseKinematics_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint1_angle
  if (lhs->joint1_angle != rhs->joint1_angle) {
    return false;
  }
  // joint2_angle
  if (lhs->joint2_angle != rhs->joint2_angle) {
    return false;
  }
  // joint3_angle
  if (lhs->joint3_angle != rhs->joint3_angle) {
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
human_interfaces__srv__InverseKinematics_Response__copy(
  const human_interfaces__srv__InverseKinematics_Response * input,
  human_interfaces__srv__InverseKinematics_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // joint1_angle
  output->joint1_angle = input->joint1_angle;
  // joint2_angle
  output->joint2_angle = input->joint2_angle;
  // joint3_angle
  output->joint3_angle = input->joint3_angle;
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

human_interfaces__srv__InverseKinematics_Response *
human_interfaces__srv__InverseKinematics_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  human_interfaces__srv__InverseKinematics_Response * msg = (human_interfaces__srv__InverseKinematics_Response *)allocator.allocate(sizeof(human_interfaces__srv__InverseKinematics_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(human_interfaces__srv__InverseKinematics_Response));
  bool success = human_interfaces__srv__InverseKinematics_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
human_interfaces__srv__InverseKinematics_Response__destroy(human_interfaces__srv__InverseKinematics_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    human_interfaces__srv__InverseKinematics_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
human_interfaces__srv__InverseKinematics_Response__Sequence__init(human_interfaces__srv__InverseKinematics_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  human_interfaces__srv__InverseKinematics_Response * data = NULL;

  if (size) {
    data = (human_interfaces__srv__InverseKinematics_Response *)allocator.zero_allocate(size, sizeof(human_interfaces__srv__InverseKinematics_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = human_interfaces__srv__InverseKinematics_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        human_interfaces__srv__InverseKinematics_Response__fini(&data[i - 1]);
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
human_interfaces__srv__InverseKinematics_Response__Sequence__fini(human_interfaces__srv__InverseKinematics_Response__Sequence * array)
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
      human_interfaces__srv__InverseKinematics_Response__fini(&array->data[i]);
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

human_interfaces__srv__InverseKinematics_Response__Sequence *
human_interfaces__srv__InverseKinematics_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  human_interfaces__srv__InverseKinematics_Response__Sequence * array = (human_interfaces__srv__InverseKinematics_Response__Sequence *)allocator.allocate(sizeof(human_interfaces__srv__InverseKinematics_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = human_interfaces__srv__InverseKinematics_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
human_interfaces__srv__InverseKinematics_Response__Sequence__destroy(human_interfaces__srv__InverseKinematics_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    human_interfaces__srv__InverseKinematics_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
human_interfaces__srv__InverseKinematics_Response__Sequence__are_equal(const human_interfaces__srv__InverseKinematics_Response__Sequence * lhs, const human_interfaces__srv__InverseKinematics_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!human_interfaces__srv__InverseKinematics_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
human_interfaces__srv__InverseKinematics_Response__Sequence__copy(
  const human_interfaces__srv__InverseKinematics_Response__Sequence * input,
  human_interfaces__srv__InverseKinematics_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(human_interfaces__srv__InverseKinematics_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    human_interfaces__srv__InverseKinematics_Response * data =
      (human_interfaces__srv__InverseKinematics_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!human_interfaces__srv__InverseKinematics_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          human_interfaces__srv__InverseKinematics_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!human_interfaces__srv__InverseKinematics_Response__copy(
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
// #include "human_interfaces/srv/detail/inverse_kinematics__functions.h"

bool
human_interfaces__srv__InverseKinematics_Event__init(human_interfaces__srv__InverseKinematics_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    human_interfaces__srv__InverseKinematics_Event__fini(msg);
    return false;
  }
  // request
  if (!human_interfaces__srv__InverseKinematics_Request__Sequence__init(&msg->request, 0)) {
    human_interfaces__srv__InverseKinematics_Event__fini(msg);
    return false;
  }
  // response
  if (!human_interfaces__srv__InverseKinematics_Response__Sequence__init(&msg->response, 0)) {
    human_interfaces__srv__InverseKinematics_Event__fini(msg);
    return false;
  }
  return true;
}

void
human_interfaces__srv__InverseKinematics_Event__fini(human_interfaces__srv__InverseKinematics_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  human_interfaces__srv__InverseKinematics_Request__Sequence__fini(&msg->request);
  // response
  human_interfaces__srv__InverseKinematics_Response__Sequence__fini(&msg->response);
}

bool
human_interfaces__srv__InverseKinematics_Event__are_equal(const human_interfaces__srv__InverseKinematics_Event * lhs, const human_interfaces__srv__InverseKinematics_Event * rhs)
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
  if (!human_interfaces__srv__InverseKinematics_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!human_interfaces__srv__InverseKinematics_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
human_interfaces__srv__InverseKinematics_Event__copy(
  const human_interfaces__srv__InverseKinematics_Event * input,
  human_interfaces__srv__InverseKinematics_Event * output)
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
  if (!human_interfaces__srv__InverseKinematics_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!human_interfaces__srv__InverseKinematics_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

human_interfaces__srv__InverseKinematics_Event *
human_interfaces__srv__InverseKinematics_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  human_interfaces__srv__InverseKinematics_Event * msg = (human_interfaces__srv__InverseKinematics_Event *)allocator.allocate(sizeof(human_interfaces__srv__InverseKinematics_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(human_interfaces__srv__InverseKinematics_Event));
  bool success = human_interfaces__srv__InverseKinematics_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
human_interfaces__srv__InverseKinematics_Event__destroy(human_interfaces__srv__InverseKinematics_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    human_interfaces__srv__InverseKinematics_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
human_interfaces__srv__InverseKinematics_Event__Sequence__init(human_interfaces__srv__InverseKinematics_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  human_interfaces__srv__InverseKinematics_Event * data = NULL;

  if (size) {
    data = (human_interfaces__srv__InverseKinematics_Event *)allocator.zero_allocate(size, sizeof(human_interfaces__srv__InverseKinematics_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = human_interfaces__srv__InverseKinematics_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        human_interfaces__srv__InverseKinematics_Event__fini(&data[i - 1]);
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
human_interfaces__srv__InverseKinematics_Event__Sequence__fini(human_interfaces__srv__InverseKinematics_Event__Sequence * array)
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
      human_interfaces__srv__InverseKinematics_Event__fini(&array->data[i]);
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

human_interfaces__srv__InverseKinematics_Event__Sequence *
human_interfaces__srv__InverseKinematics_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  human_interfaces__srv__InverseKinematics_Event__Sequence * array = (human_interfaces__srv__InverseKinematics_Event__Sequence *)allocator.allocate(sizeof(human_interfaces__srv__InverseKinematics_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = human_interfaces__srv__InverseKinematics_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
human_interfaces__srv__InverseKinematics_Event__Sequence__destroy(human_interfaces__srv__InverseKinematics_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    human_interfaces__srv__InverseKinematics_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
human_interfaces__srv__InverseKinematics_Event__Sequence__are_equal(const human_interfaces__srv__InverseKinematics_Event__Sequence * lhs, const human_interfaces__srv__InverseKinematics_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!human_interfaces__srv__InverseKinematics_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
human_interfaces__srv__InverseKinematics_Event__Sequence__copy(
  const human_interfaces__srv__InverseKinematics_Event__Sequence * input,
  human_interfaces__srv__InverseKinematics_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(human_interfaces__srv__InverseKinematics_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    human_interfaces__srv__InverseKinematics_Event * data =
      (human_interfaces__srv__InverseKinematics_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!human_interfaces__srv__InverseKinematics_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          human_interfaces__srv__InverseKinematics_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!human_interfaces__srv__InverseKinematics_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
