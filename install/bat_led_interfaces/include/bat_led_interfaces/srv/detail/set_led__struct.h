// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bat_led_interfaces:srv/SetLed.idl
// generated code does not contain a copyright notice

#ifndef BAT_LED_INTERFACES__SRV__DETAIL__SET_LED__STRUCT_H_
#define BAT_LED_INTERFACES__SRV__DETAIL__SET_LED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/SetLed in the package bat_led_interfaces.
typedef struct bat_led_interfaces__srv__SetLed_Request
{
  int32_t led_number;
  int32_t state;
} bat_led_interfaces__srv__SetLed_Request;

// Struct for a sequence of bat_led_interfaces__srv__SetLed_Request.
typedef struct bat_led_interfaces__srv__SetLed_Request__Sequence
{
  bat_led_interfaces__srv__SetLed_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bat_led_interfaces__srv__SetLed_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SetLed in the package bat_led_interfaces.
typedef struct bat_led_interfaces__srv__SetLed_Response
{
  bool success;
} bat_led_interfaces__srv__SetLed_Response;

// Struct for a sequence of bat_led_interfaces__srv__SetLed_Response.
typedef struct bat_led_interfaces__srv__SetLed_Response__Sequence
{
  bat_led_interfaces__srv__SetLed_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bat_led_interfaces__srv__SetLed_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BAT_LED_INTERFACES__SRV__DETAIL__SET_LED__STRUCT_H_
