// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from control_msgs:msg/MotionPrimitive.idl
// generated code does not contain a copyright notice
#include "control_msgs/msg/detail/motion_primitive__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `additional_arguments`
#include "control_msgs/msg/detail/motion_argument__functions.h"
// Member `poses`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
// Member `joint_positions`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
control_msgs__msg__MotionPrimitive__init(control_msgs__msg__MotionPrimitive * msg)
{
  if (!msg) {
    return false;
  }
  // type
  msg->type = -1;
  // blend_radius
  // additional_arguments
  if (!control_msgs__msg__MotionArgument__Sequence__init(&msg->additional_arguments, 0)) {
    control_msgs__msg__MotionPrimitive__fini(msg);
    return false;
  }
  // poses
  if (!geometry_msgs__msg__PoseStamped__Sequence__init(&msg->poses, 0)) {
    control_msgs__msg__MotionPrimitive__fini(msg);
    return false;
  }
  // joint_positions
  if (!rosidl_runtime_c__double__Sequence__init(&msg->joint_positions, 0)) {
    control_msgs__msg__MotionPrimitive__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__msg__MotionPrimitive__fini(control_msgs__msg__MotionPrimitive * msg)
{
  if (!msg) {
    return;
  }
  // type
  // blend_radius
  // additional_arguments
  control_msgs__msg__MotionArgument__Sequence__fini(&msg->additional_arguments);
  // poses
  geometry_msgs__msg__PoseStamped__Sequence__fini(&msg->poses);
  // joint_positions
  rosidl_runtime_c__double__Sequence__fini(&msg->joint_positions);
}

bool
control_msgs__msg__MotionPrimitive__are_equal(const control_msgs__msg__MotionPrimitive * lhs, const control_msgs__msg__MotionPrimitive * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // blend_radius
  if (lhs->blend_radius != rhs->blend_radius) {
    return false;
  }
  // additional_arguments
  if (!control_msgs__msg__MotionArgument__Sequence__are_equal(
      &(lhs->additional_arguments), &(rhs->additional_arguments)))
  {
    return false;
  }
  // poses
  if (!geometry_msgs__msg__PoseStamped__Sequence__are_equal(
      &(lhs->poses), &(rhs->poses)))
  {
    return false;
  }
  // joint_positions
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->joint_positions), &(rhs->joint_positions)))
  {
    return false;
  }
  return true;
}

bool
control_msgs__msg__MotionPrimitive__copy(
  const control_msgs__msg__MotionPrimitive * input,
  control_msgs__msg__MotionPrimitive * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  // blend_radius
  output->blend_radius = input->blend_radius;
  // additional_arguments
  if (!control_msgs__msg__MotionArgument__Sequence__copy(
      &(input->additional_arguments), &(output->additional_arguments)))
  {
    return false;
  }
  // poses
  if (!geometry_msgs__msg__PoseStamped__Sequence__copy(
      &(input->poses), &(output->poses)))
  {
    return false;
  }
  // joint_positions
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->joint_positions), &(output->joint_positions)))
  {
    return false;
  }
  return true;
}

control_msgs__msg__MotionPrimitive *
control_msgs__msg__MotionPrimitive__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__MotionPrimitive * msg = (control_msgs__msg__MotionPrimitive *)allocator.allocate(sizeof(control_msgs__msg__MotionPrimitive), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__msg__MotionPrimitive));
  bool success = control_msgs__msg__MotionPrimitive__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_msgs__msg__MotionPrimitive__destroy(control_msgs__msg__MotionPrimitive * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_msgs__msg__MotionPrimitive__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_msgs__msg__MotionPrimitive__Sequence__init(control_msgs__msg__MotionPrimitive__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__MotionPrimitive * data = NULL;

  if (size) {
    data = (control_msgs__msg__MotionPrimitive *)allocator.zero_allocate(size, sizeof(control_msgs__msg__MotionPrimitive), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__msg__MotionPrimitive__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__msg__MotionPrimitive__fini(&data[i - 1]);
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
control_msgs__msg__MotionPrimitive__Sequence__fini(control_msgs__msg__MotionPrimitive__Sequence * array)
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
      control_msgs__msg__MotionPrimitive__fini(&array->data[i]);
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

control_msgs__msg__MotionPrimitive__Sequence *
control_msgs__msg__MotionPrimitive__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__MotionPrimitive__Sequence * array = (control_msgs__msg__MotionPrimitive__Sequence *)allocator.allocate(sizeof(control_msgs__msg__MotionPrimitive__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__msg__MotionPrimitive__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_msgs__msg__MotionPrimitive__Sequence__destroy(control_msgs__msg__MotionPrimitive__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_msgs__msg__MotionPrimitive__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_msgs__msg__MotionPrimitive__Sequence__are_equal(const control_msgs__msg__MotionPrimitive__Sequence * lhs, const control_msgs__msg__MotionPrimitive__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_msgs__msg__MotionPrimitive__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_msgs__msg__MotionPrimitive__Sequence__copy(
  const control_msgs__msg__MotionPrimitive__Sequence * input,
  control_msgs__msg__MotionPrimitive__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_msgs__msg__MotionPrimitive);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_msgs__msg__MotionPrimitive * data =
      (control_msgs__msg__MotionPrimitive *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_msgs__msg__MotionPrimitive__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_msgs__msg__MotionPrimitive__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_msgs__msg__MotionPrimitive__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
