// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from human_interfaces:msg/ArmSwingCommand.idl
// generated code does not contain a copyright notice
#include "human_interfaces/msg/detail/arm_swing_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
human_interfaces__msg__ArmSwingCommand__init(human_interfaces__msg__ArmSwingCommand * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
human_interfaces__msg__ArmSwingCommand__fini(human_interfaces__msg__ArmSwingCommand * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
human_interfaces__msg__ArmSwingCommand__are_equal(const human_interfaces__msg__ArmSwingCommand * lhs, const human_interfaces__msg__ArmSwingCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
human_interfaces__msg__ArmSwingCommand__copy(
  const human_interfaces__msg__ArmSwingCommand * input,
  human_interfaces__msg__ArmSwingCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

human_interfaces__msg__ArmSwingCommand *
human_interfaces__msg__ArmSwingCommand__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  human_interfaces__msg__ArmSwingCommand * msg = (human_interfaces__msg__ArmSwingCommand *)allocator.allocate(sizeof(human_interfaces__msg__ArmSwingCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(human_interfaces__msg__ArmSwingCommand));
  bool success = human_interfaces__msg__ArmSwingCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
human_interfaces__msg__ArmSwingCommand__destroy(human_interfaces__msg__ArmSwingCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    human_interfaces__msg__ArmSwingCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
human_interfaces__msg__ArmSwingCommand__Sequence__init(human_interfaces__msg__ArmSwingCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  human_interfaces__msg__ArmSwingCommand * data = NULL;

  if (size) {
    data = (human_interfaces__msg__ArmSwingCommand *)allocator.zero_allocate(size, sizeof(human_interfaces__msg__ArmSwingCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = human_interfaces__msg__ArmSwingCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        human_interfaces__msg__ArmSwingCommand__fini(&data[i - 1]);
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
human_interfaces__msg__ArmSwingCommand__Sequence__fini(human_interfaces__msg__ArmSwingCommand__Sequence * array)
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
      human_interfaces__msg__ArmSwingCommand__fini(&array->data[i]);
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

human_interfaces__msg__ArmSwingCommand__Sequence *
human_interfaces__msg__ArmSwingCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  human_interfaces__msg__ArmSwingCommand__Sequence * array = (human_interfaces__msg__ArmSwingCommand__Sequence *)allocator.allocate(sizeof(human_interfaces__msg__ArmSwingCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = human_interfaces__msg__ArmSwingCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
human_interfaces__msg__ArmSwingCommand__Sequence__destroy(human_interfaces__msg__ArmSwingCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    human_interfaces__msg__ArmSwingCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
human_interfaces__msg__ArmSwingCommand__Sequence__are_equal(const human_interfaces__msg__ArmSwingCommand__Sequence * lhs, const human_interfaces__msg__ArmSwingCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!human_interfaces__msg__ArmSwingCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
human_interfaces__msg__ArmSwingCommand__Sequence__copy(
  const human_interfaces__msg__ArmSwingCommand__Sequence * input,
  human_interfaces__msg__ArmSwingCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(human_interfaces__msg__ArmSwingCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    human_interfaces__msg__ArmSwingCommand * data =
      (human_interfaces__msg__ArmSwingCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!human_interfaces__msg__ArmSwingCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          human_interfaces__msg__ArmSwingCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!human_interfaces__msg__ArmSwingCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
