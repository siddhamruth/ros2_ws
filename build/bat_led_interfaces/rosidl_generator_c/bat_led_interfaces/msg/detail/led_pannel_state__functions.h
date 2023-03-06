// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from bat_led_interfaces:msg/LedPannelState.idl
// generated code does not contain a copyright notice

#ifndef BAT_LED_INTERFACES__MSG__DETAIL__LED_PANNEL_STATE__FUNCTIONS_H_
#define BAT_LED_INTERFACES__MSG__DETAIL__LED_PANNEL_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "bat_led_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "bat_led_interfaces/msg/detail/led_pannel_state__struct.h"

/// Initialize msg/LedPannelState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bat_led_interfaces__msg__LedPannelState
 * )) before or use
 * bat_led_interfaces__msg__LedPannelState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bat_led_interfaces
bool
bat_led_interfaces__msg__LedPannelState__init(bat_led_interfaces__msg__LedPannelState * msg);

/// Finalize msg/LedPannelState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bat_led_interfaces
void
bat_led_interfaces__msg__LedPannelState__fini(bat_led_interfaces__msg__LedPannelState * msg);

/// Create msg/LedPannelState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bat_led_interfaces__msg__LedPannelState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bat_led_interfaces
bat_led_interfaces__msg__LedPannelState *
bat_led_interfaces__msg__LedPannelState__create();

/// Destroy msg/LedPannelState message.
/**
 * It calls
 * bat_led_interfaces__msg__LedPannelState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bat_led_interfaces
void
bat_led_interfaces__msg__LedPannelState__destroy(bat_led_interfaces__msg__LedPannelState * msg);

/// Check for msg/LedPannelState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bat_led_interfaces
bool
bat_led_interfaces__msg__LedPannelState__are_equal(const bat_led_interfaces__msg__LedPannelState * lhs, const bat_led_interfaces__msg__LedPannelState * rhs);

/// Copy a msg/LedPannelState message.
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
ROSIDL_GENERATOR_C_PUBLIC_bat_led_interfaces
bool
bat_led_interfaces__msg__LedPannelState__copy(
  const bat_led_interfaces__msg__LedPannelState * input,
  bat_led_interfaces__msg__LedPannelState * output);

/// Initialize array of msg/LedPannelState messages.
/**
 * It allocates the memory for the number of elements and calls
 * bat_led_interfaces__msg__LedPannelState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bat_led_interfaces
bool
bat_led_interfaces__msg__LedPannelState__Sequence__init(bat_led_interfaces__msg__LedPannelState__Sequence * array, size_t size);

/// Finalize array of msg/LedPannelState messages.
/**
 * It calls
 * bat_led_interfaces__msg__LedPannelState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bat_led_interfaces
void
bat_led_interfaces__msg__LedPannelState__Sequence__fini(bat_led_interfaces__msg__LedPannelState__Sequence * array);

/// Create array of msg/LedPannelState messages.
/**
 * It allocates the memory for the array and calls
 * bat_led_interfaces__msg__LedPannelState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bat_led_interfaces
bat_led_interfaces__msg__LedPannelState__Sequence *
bat_led_interfaces__msg__LedPannelState__Sequence__create(size_t size);

/// Destroy array of msg/LedPannelState messages.
/**
 * It calls
 * bat_led_interfaces__msg__LedPannelState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bat_led_interfaces
void
bat_led_interfaces__msg__LedPannelState__Sequence__destroy(bat_led_interfaces__msg__LedPannelState__Sequence * array);

/// Check for msg/LedPannelState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bat_led_interfaces
bool
bat_led_interfaces__msg__LedPannelState__Sequence__are_equal(const bat_led_interfaces__msg__LedPannelState__Sequence * lhs, const bat_led_interfaces__msg__LedPannelState__Sequence * rhs);

/// Copy an array of msg/LedPannelState messages.
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
ROSIDL_GENERATOR_C_PUBLIC_bat_led_interfaces
bool
bat_led_interfaces__msg__LedPannelState__Sequence__copy(
  const bat_led_interfaces__msg__LedPannelState__Sequence * input,
  bat_led_interfaces__msg__LedPannelState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BAT_LED_INTERFACES__MSG__DETAIL__LED_PANNEL_STATE__FUNCTIONS_H_
