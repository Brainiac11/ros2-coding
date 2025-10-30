// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from human_interfaces:msg/KickCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "human_interfaces/msg/kick_command.h"


#ifndef HUMAN_INTERFACES__MSG__DETAIL__KICK_COMMAND__FUNCTIONS_H_
#define HUMAN_INTERFACES__MSG__DETAIL__KICK_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "human_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "human_interfaces/msg/detail/kick_command__struct.h"

/// Initialize msg/KickCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * human_interfaces__msg__KickCommand
 * )) before or use
 * human_interfaces__msg__KickCommand__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_human_interfaces
bool
human_interfaces__msg__KickCommand__init(human_interfaces__msg__KickCommand * msg);

/// Finalize msg/KickCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_human_interfaces
void
human_interfaces__msg__KickCommand__fini(human_interfaces__msg__KickCommand * msg);

/// Create msg/KickCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * human_interfaces__msg__KickCommand__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_human_interfaces
human_interfaces__msg__KickCommand *
human_interfaces__msg__KickCommand__create(void);

/// Destroy msg/KickCommand message.
/**
 * It calls
 * human_interfaces__msg__KickCommand__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_human_interfaces
void
human_interfaces__msg__KickCommand__destroy(human_interfaces__msg__KickCommand * msg);

/// Check for msg/KickCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_human_interfaces
bool
human_interfaces__msg__KickCommand__are_equal(const human_interfaces__msg__KickCommand * lhs, const human_interfaces__msg__KickCommand * rhs);

/// Copy a msg/KickCommand message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_human_interfaces
bool
human_interfaces__msg__KickCommand__copy(
  const human_interfaces__msg__KickCommand * input,
  human_interfaces__msg__KickCommand * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_human_interfaces
const rosidl_type_hash_t *
human_interfaces__msg__KickCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_human_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
human_interfaces__msg__KickCommand__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_human_interfaces
const rosidl_runtime_c__type_description__TypeSource *
human_interfaces__msg__KickCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_human_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
human_interfaces__msg__KickCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/KickCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * human_interfaces__msg__KickCommand__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_human_interfaces
bool
human_interfaces__msg__KickCommand__Sequence__init(human_interfaces__msg__KickCommand__Sequence * array, size_t size);

/// Finalize array of msg/KickCommand messages.
/**
 * It calls
 * human_interfaces__msg__KickCommand__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_human_interfaces
void
human_interfaces__msg__KickCommand__Sequence__fini(human_interfaces__msg__KickCommand__Sequence * array);

/// Create array of msg/KickCommand messages.
/**
 * It allocates the memory for the array and calls
 * human_interfaces__msg__KickCommand__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_human_interfaces
human_interfaces__msg__KickCommand__Sequence *
human_interfaces__msg__KickCommand__Sequence__create(size_t size);

/// Destroy array of msg/KickCommand messages.
/**
 * It calls
 * human_interfaces__msg__KickCommand__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_human_interfaces
void
human_interfaces__msg__KickCommand__Sequence__destroy(human_interfaces__msg__KickCommand__Sequence * array);

/// Check for msg/KickCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_human_interfaces
bool
human_interfaces__msg__KickCommand__Sequence__are_equal(const human_interfaces__msg__KickCommand__Sequence * lhs, const human_interfaces__msg__KickCommand__Sequence * rhs);

/// Copy an array of msg/KickCommand messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_human_interfaces
bool
human_interfaces__msg__KickCommand__Sequence__copy(
  const human_interfaces__msg__KickCommand__Sequence * input,
  human_interfaces__msg__KickCommand__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HUMAN_INTERFACES__MSG__DETAIL__KICK_COMMAND__FUNCTIONS_H_
