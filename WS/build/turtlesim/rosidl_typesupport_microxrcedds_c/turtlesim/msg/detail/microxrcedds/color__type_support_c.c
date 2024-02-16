// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from turtlesim:msg/Color.idl
// generated code does not contain a copyright notice
#include "turtlesim/msg/detail/color__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "turtlesim/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "turtlesim/msg/detail/color__struct.h"
#include "turtlesim/msg/detail/color__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


typedef turtlesim__msg__Color _Color__ros_msg_type;

static bool _Color__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Color__ros_msg_type * ros_message = (_Color__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: r
  rv = ucdr_serialize_uint8_t(cdr, ros_message->r);
  // Member: g
  rv = ucdr_serialize_uint8_t(cdr, ros_message->g);
  // Member: b
  rv = ucdr_serialize_uint8_t(cdr, ros_message->b);

  return rv;
}

static bool _Color__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Color__ros_msg_type * ros_message = (_Color__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: r
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->r);
  // Field name: g
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->g);
  // Field name: b
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->b);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_turtlesim
size_t get_serialized_size_turtlesim__msg__Color(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Color__ros_msg_type * ros_message = (const _Color__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: r
  {
    const size_t item_size = sizeof(ros_message->r);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: g
  {
    const size_t item_size = sizeof(ros_message->g);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: b
  {
    const size_t item_size = sizeof(ros_message->b);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Color__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_turtlesim__msg__Color(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_turtlesim
size_t max_serialized_size_turtlesim__msg__Color(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: r
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: g
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: b
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);

  return current_alignment - initial_alignment;
}

static size_t _Color__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_turtlesim__msg__Color(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Color = {
  "turtlesim::msg",
  "Color",
  _Color__cdr_serialize,
  _Color__cdr_deserialize,
  _Color__get_serialized_size,
  get_serialized_size_turtlesim__msg__Color,
  _Color__max_serialized_size
};

static rosidl_message_type_support_t _Color__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Color,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, turtlesim, msg, Color)() {
  return &_Color__type_support;
}

#if defined(__cplusplus)
}
#endif
