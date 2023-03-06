// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bat_led_interfaces:msg/LedStateArray.idl
// generated code does not contain a copyright notice

#ifndef BAT_LED_INTERFACES__MSG__DETAIL__LED_STATE_ARRAY__STRUCT_H_
#define BAT_LED_INTERFACES__MSG__DETAIL__LED_STATE_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/LedStateArray in the package bat_led_interfaces.
typedef struct bat_led_interfaces__msg__LedStateArray
{
  int64_t led_states[3];
} bat_led_interfaces__msg__LedStateArray;

// Struct for a sequence of bat_led_interfaces__msg__LedStateArray.
typedef struct bat_led_interfaces__msg__LedStateArray__Sequence
{
  bat_led_interfaces__msg__LedStateArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bat_led_interfaces__msg__LedStateArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BAT_LED_INTERFACES__MSG__DETAIL__LED_STATE_ARRAY__STRUCT_H_
