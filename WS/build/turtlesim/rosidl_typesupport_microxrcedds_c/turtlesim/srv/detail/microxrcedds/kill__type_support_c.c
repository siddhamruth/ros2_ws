// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from turtlesim:srv/Kill.idl
// generated code does not contain a copyright notice
#include "turtlesim/srv/detail/kill__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "turtlesim/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "turtlesim/srv/detail/kill__struct.h"
#include "turtlesim/srv/detail/kill__functions.h"

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

#include "rosidl_runtime_c/string.h"  // name
#include "rosidl_runtime_c/string_functions.h"  // name

// forward declare type support functions


typedef turtlesim__srv__Kill_Request _Kill_Request__ros_msg_type;

static bool _Kill_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Kill_Request__ros_msg_type * ros_message = (_Kill_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: name
 {
    uint32_t string_len = (ros_message->name.data == NULL) ? 0 : (uint32_t)strlen(ros_message->name.data) + 1;
    ros_message->name.size = (ros_message->name.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->name.data, string_len);
  }

  return rv;
}

static bool _Kill_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Kill_Request__ros_msg_type * ros_message = (_Kill_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: name
  {
    size_t capacity = ros_message->name.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->name.data, capacity, &string_size);
    if (rv) {
      ros_message->name.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->name.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_turtlesim
size_t get_serialized_size_turtlesim__srv__Kill_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Kill_Request__ros_msg_type * ros_message = (const _Kill_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->name.size + 1;

  return current_alignment - initial_alignment;
}

static uint32_t _Kill_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_turtlesim__srv__Kill_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_turtlesim
size_t max_serialized_size_turtlesim__srv__Kill_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: name
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static size_t _Kill_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_turtlesim__srv__Kill_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Kill_Request = {
  "turtlesim::srv",
  "Kill_Request",
  _Kill_Request__cdr_serialize,
  _Kill_Request__cdr_deserialize,
  _Kill_Request__get_serialized_size,
  get_serialized_size_turtlesim__srv__Kill_Request,
  _Kill_Request__max_serialized_size
};

static rosidl_message_type_support_t _Kill_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Kill_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, turtlesim, srv, Kill_Request)() {
  return &_Kill_Request__type_support;
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
// #include "turtlesim/srv/detail/kill__struct.h"
// already included above
// #include "turtlesim/srv/detail/kill__functions.h"

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


typedef turtlesim__srv__Kill_Response _Kill_Response__ros_msg_type;

static bool _Kill_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Kill_Response__ros_msg_type * ros_message = (_Kill_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: structure_needs_at_least_one_member
  rv = ucdr_serialize_uint8_t(cdr, ros_message->structure_needs_at_least_one_member);

  return rv;
}

static bool _Kill_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Kill_Response__ros_msg_type * ros_message = (_Kill_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: structure_needs_at_least_one_member
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->structure_needs_at_least_one_member);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_turtlesim
size_t get_serialized_size_turtlesim__srv__Kill_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Kill_Response__ros_msg_type * ros_message = (const _Kill_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: structure_needs_at_least_one_member
  {
    const size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Kill_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_turtlesim__srv__Kill_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_turtlesim
size_t max_serialized_size_turtlesim__srv__Kill_Response(
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

static size_t _Kill_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_turtlesim__srv__Kill_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Kill_Response = {
  "turtlesim::srv",
  "Kill_Response",
  _Kill_Response__cdr_serialize,
  _Kill_Response__cdr_deserialize,
  _Kill_Response__get_serialized_size,
  get_serialized_size_turtlesim__srv__Kill_Response,
  _Kill_Response__max_serialized_size
};

static rosidl_message_type_support_t _Kill_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Kill_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, turtlesim, srv, Kill_Response)() {
  return &_Kill_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "turtlesim/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "turtlesim/srv/kill.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Kill__callbacks = {
  "turtlesim::srv",
  "Kill",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, turtlesim, srv, Kill_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, turtlesim, srv, Kill_Response),
};

static rosidl_service_type_support_t Kill__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &Kill__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, turtlesim, srv, Kill)() {
  return &Kill__handle;
}

#if defined(__cplusplus)
}
#endif
