// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from turtlesim:srv/Spawn.idl
// generated code does not contain a copyright notice
#include "turtlesim/srv/detail/spawn__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "turtlesim/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "turtlesim/srv/detail/spawn__struct.h"
#include "turtlesim/srv/detail/spawn__functions.h"

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


typedef turtlesim__srv__Spawn_Request _Spawn_Request__ros_msg_type;

static bool _Spawn_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Spawn_Request__ros_msg_type * ros_message = (_Spawn_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: x
  rv = ucdr_serialize_float(cdr, ros_message->x);
  // Member: y
  rv = ucdr_serialize_float(cdr, ros_message->y);
  // Member: theta
  rv = ucdr_serialize_float(cdr, ros_message->theta);
  // Member: name
 {
    uint32_t string_len = (ros_message->name.data == NULL) ? 0 : (uint32_t)strlen(ros_message->name.data) + 1;
    ros_message->name.size = (ros_message->name.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->name.data, string_len);
  }

  return rv;
}

static bool _Spawn_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Spawn_Request__ros_msg_type * ros_message = (_Spawn_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: x
  rv = ucdr_deserialize_float(cdr, &ros_message->x);
  // Field name: y
  rv = ucdr_deserialize_float(cdr, &ros_message->y);
  // Field name: theta
  rv = ucdr_deserialize_float(cdr, &ros_message->theta);
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
size_t get_serialized_size_turtlesim__srv__Spawn_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Spawn_Request__ros_msg_type * ros_message = (const _Spawn_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: x
  {
    const size_t item_size = sizeof(ros_message->x);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: y
  {
    const size_t item_size = sizeof(ros_message->y);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: theta
  {
    const size_t item_size = sizeof(ros_message->theta);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->name.size + 1;

  return current_alignment - initial_alignment;
}

static uint32_t _Spawn_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_turtlesim__srv__Spawn_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_turtlesim
size_t max_serialized_size_turtlesim__srv__Spawn_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: x
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: y
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: theta
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: name
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static size_t _Spawn_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_turtlesim__srv__Spawn_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Spawn_Request = {
  "turtlesim::srv",
  "Spawn_Request",
  _Spawn_Request__cdr_serialize,
  _Spawn_Request__cdr_deserialize,
  _Spawn_Request__get_serialized_size,
  get_serialized_size_turtlesim__srv__Spawn_Request,
  _Spawn_Request__max_serialized_size
};

static rosidl_message_type_support_t _Spawn_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Spawn_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, turtlesim, srv, Spawn_Request)() {
  return &_Spawn_Request__type_support;
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
// #include "turtlesim/srv/detail/spawn__struct.h"
// already included above
// #include "turtlesim/srv/detail/spawn__functions.h"

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

// already included above
// #include "rosidl_runtime_c/string.h"  // name
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // name

// forward declare type support functions


typedef turtlesim__srv__Spawn_Response _Spawn_Response__ros_msg_type;

static bool _Spawn_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Spawn_Response__ros_msg_type * ros_message = (_Spawn_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: name
 {
    uint32_t string_len = (ros_message->name.data == NULL) ? 0 : (uint32_t)strlen(ros_message->name.data) + 1;
    ros_message->name.size = (ros_message->name.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->name.data, string_len);
  }

  return rv;
}

static bool _Spawn_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Spawn_Response__ros_msg_type * ros_message = (_Spawn_Response__ros_msg_type *)(untyped_ros_message);
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
size_t get_serialized_size_turtlesim__srv__Spawn_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Spawn_Response__ros_msg_type * ros_message = (const _Spawn_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->name.size + 1;

  return current_alignment - initial_alignment;
}

static uint32_t _Spawn_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_turtlesim__srv__Spawn_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_turtlesim
size_t max_serialized_size_turtlesim__srv__Spawn_Response(
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

static size_t _Spawn_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_turtlesim__srv__Spawn_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Spawn_Response = {
  "turtlesim::srv",
  "Spawn_Response",
  _Spawn_Response__cdr_serialize,
  _Spawn_Response__cdr_deserialize,
  _Spawn_Response__get_serialized_size,
  get_serialized_size_turtlesim__srv__Spawn_Response,
  _Spawn_Response__max_serialized_size
};

static rosidl_message_type_support_t _Spawn_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Spawn_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, turtlesim, srv, Spawn_Response)() {
  return &_Spawn_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "turtlesim/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "turtlesim/srv/spawn.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Spawn__callbacks = {
  "turtlesim::srv",
  "Spawn",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, turtlesim, srv, Spawn_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, turtlesim, srv, Spawn_Response),
};

static rosidl_service_type_support_t Spawn__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &Spawn__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, turtlesim, srv, Spawn)() {
  return &Spawn__handle;
}

#if defined(__cplusplus)
}
#endif
