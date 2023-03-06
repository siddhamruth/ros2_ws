// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bat_led_interfaces:msg/LedPannelState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bat_led_interfaces/msg/detail/led_pannel_state__rosidl_typesupport_introspection_c.h"
#include "bat_led_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bat_led_interfaces/msg/detail/led_pannel_state__functions.h"
#include "bat_led_interfaces/msg/detail/led_pannel_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void LedPannelState__rosidl_typesupport_introspection_c__LedPannelState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bat_led_interfaces__msg__LedPannelState__init(message_memory);
}

void LedPannelState__rosidl_typesupport_introspection_c__LedPannelState_fini_function(void * message_memory)
{
  bat_led_interfaces__msg__LedPannelState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LedPannelState__rosidl_typesupport_introspection_c__LedPannelState_message_member_array[1] = {
  {
    "led_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bat_led_interfaces__msg__LedPannelState, led_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LedPannelState__rosidl_typesupport_introspection_c__LedPannelState_message_members = {
  "bat_led_interfaces__msg",  // message namespace
  "LedPannelState",  // message name
  1,  // number of fields
  sizeof(bat_led_interfaces__msg__LedPannelState),
  LedPannelState__rosidl_typesupport_introspection_c__LedPannelState_message_member_array,  // message members
  LedPannelState__rosidl_typesupport_introspection_c__LedPannelState_init_function,  // function to initialize message memory (memory has to be allocated)
  LedPannelState__rosidl_typesupport_introspection_c__LedPannelState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LedPannelState__rosidl_typesupport_introspection_c__LedPannelState_message_type_support_handle = {
  0,
  &LedPannelState__rosidl_typesupport_introspection_c__LedPannelState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bat_led_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bat_led_interfaces, msg, LedPannelState)() {
  if (!LedPannelState__rosidl_typesupport_introspection_c__LedPannelState_message_type_support_handle.typesupport_identifier) {
    LedPannelState__rosidl_typesupport_introspection_c__LedPannelState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LedPannelState__rosidl_typesupport_introspection_c__LedPannelState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
