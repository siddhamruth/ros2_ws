// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from turtlesim:srv/SetPen.idl
// generated code does not contain a copyright notice
#include "turtlesim/srv/detail/set_pen__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "turtlesim/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "turtlesim/srv/detail/set_pen__struct.h"
#include "turtlesim/srv/detail/set_pen__functions.h"

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


typedef turtlesim__srv__SetPen_Request _SetPen_Request__ros_msg_type;

static bool _SetPen_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _SetPen_Request__ros_msg_type * ros_message = (_SetPen_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: r
  rv = ucdr_serialize_uint8_t(cdr, ros_message->r);
  // Member: g
  rv = ucdr_serialize_uint8_t(cdr, ros_message->g);
  // Member: b
  rv = ucdr_serialize_uint8_t(cdr, ros_message->b);
  // Member: width
  rv = ucdr_serialize_uint8_t(cdr, ros_message->width);
  // Member: off
  rv = ucdr_serialize_uint8_t(cdr, ros_message->off);

  return rv;
}

static bool _SetPen_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _SetPen_Request__ros_msg_type * ros_message = (_SetPen_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: r
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->r);
  // Field name: g
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->g);
  // Field name: b
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->b);
  // Field name: width
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->width);
  // Field name: off
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->off);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_turtlesim
size_t get_serialized_size_turtlesim__srv__SetPen_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _SetPen_Request__ros_msg_type * ros_message = (const _SetPen_Request__ros_msg_type *)(untyped_ros_message);
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
  // Member: width
  {
    const size_t item_size = sizeof(ros_message->width);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: off
  {
    const size_t item_size = sizeof(ros_message->off);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetPen_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_turtlesim__srv__SetPen_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_turtlesim
size_t max_serialized_size_turtlesim__srv__SetPen_Request(
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
  // Member: width
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: off
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);

  return current_alignment - initial_alignment;
}

static size_t _SetPen_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_turtlesim__srv__SetPen_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_SetPen_Request = {
  "turtlesim::srv",
  "SetPen_Request",
  _SetPen_Request__cdr_serialize,
  _SetPen_Request__cdr_deserialize,
  _SetPen_Request__get_serialized_size,
  get_serialized_size_turtlesim__srv__SetPen_Request,
  _SetPen_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetPen_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_SetPen_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, turtlesim, srv, SetPen_Request)() {
  return &_SetPen_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <stdint.h>
// already included above
// #include <stdio.h>
// already included above
// #include <string.h>
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
// already included above
// #include "turtlesim/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
// already included above
// #include "turtlesim/srv/detail/set_pen__struct.h"
// already included above
// #include "turtlesim/srv/detail/set_pen__functions.h"

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


typedef turtlesim__srv__SetPen_Response _SetPen_Response__ros_msg_type;

static bool _SetPen_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _SetPen_Response__ros_msg_type * ros_message = (_SetPen_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: structure_needs_at_least_one_member
  rv = ucdr_serialize_uint8_t(cdr, ros_message->structure_needs_at_least_one_member);

  return rv;
}

static bool _SetPen_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _SetPen_Response__ros_msg_type * ros_message = (_SetPen_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: structure_needs_at_least_one_member
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->structure_needs_at_least_one_member);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_turtlesim
size_t get_serialized_size_turtlesim__srv__SetPen_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _SetPen_Response__ros_msg_type * ros_message = (const _SetPen_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: structure_needs_at_least_one_member
  {
    const size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetPen_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_turtlesim__srv__SetPen_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_turtlesim
size_t max_serialized_size_turtlesim__srv__SetPen_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: structure_needs_at_least_one_member
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);

  return current_alignment - initial_alignment;
}

static size_t _SetPen_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_turtlesim__srv__SetPen_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_SetPen_Response = {
  "turtlesim::srv",
  "SetPen_Response",
  _SetPen_Response__cdr_serialize,
  _SetPen_Response__cdr_deserialize,
  _SetPen_Response__get_serialized_size,
  get_serialized_size_turtlesim__srv__SetPen_Response,
  _SetPen_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetPen_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_SetPen_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, turtlesim, srv, SetPen_Response)() {
  return &_SetPen_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "turtlesim/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "turtlesim/srv/set_pen.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetPen__callbacks = {
  "turtlesim::srv",
  "SetPen",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, turtlesim, srv, SetPen_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, turtlesim, srv, SetPen_Response),
};

static rosidl_service_type_support_t SetPen__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &SetPen__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, turtlesim, srv, SetPen)() {
  return &SetPen__handle;
}

#if defined(__cplusplus)
}
#endif
