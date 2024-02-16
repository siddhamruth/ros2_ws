// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from tutorial_interfaces_cpp:srv/AddThreeInts.idl
// generated code does not contain a copyright notice
#include "tutorial_interfaces_cpp/srv/detail/add_three_ints__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "tutorial_interfaces_cpp/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "tutorial_interfaces_cpp/srv/detail/add_three_ints__struct.h"
#include "tutorial_interfaces_cpp/srv/detail/add_three_ints__functions.h"

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


typedef tutorial_interfaces_cpp__srv__AddThreeInts_Request _AddThreeInts_Request__ros_msg_type;

static bool _AddThreeInts_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _AddThreeInts_Request__ros_msg_type * ros_message = (_AddThreeInts_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: a
  rv = ucdr_serialize_int64_t(cdr, ros_message->a);
  // Member: b
  rv = ucdr_serialize_int64_t(cdr, ros_message->b);
  // Member: c
  rv = ucdr_serialize_int64_t(cdr, ros_message->c);

  return rv;
}

static bool _AddThreeInts_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _AddThreeInts_Request__ros_msg_type * ros_message = (_AddThreeInts_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: a
  rv = ucdr_deserialize_int64_t(cdr, &ros_message->a);
  // Field name: b
  rv = ucdr_deserialize_int64_t(cdr, &ros_message->b);
  // Field name: c
  rv = ucdr_deserialize_int64_t(cdr, &ros_message->c);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_tutorial_interfaces_cpp
size_t get_serialized_size_tutorial_interfaces_cpp__srv__AddThreeInts_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _AddThreeInts_Request__ros_msg_type * ros_message = (const _AddThreeInts_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: a
  {
    const size_t item_size = sizeof(ros_message->a);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: b
  {
    const size_t item_size = sizeof(ros_message->b);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: c
  {
    const size_t item_size = sizeof(ros_message->c);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AddThreeInts_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_tutorial_interfaces_cpp__srv__AddThreeInts_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_tutorial_interfaces_cpp
size_t max_serialized_size_tutorial_interfaces_cpp__srv__AddThreeInts_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: a
  current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + sizeof(int64_t);
  // Member: b
  current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + sizeof(int64_t);
  // Member: c
  current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + sizeof(int64_t);

  return current_alignment - initial_alignment;
}

static size_t _AddThreeInts_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_tutorial_interfaces_cpp__srv__AddThreeInts_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_AddThreeInts_Request = {
  "tutorial_interfaces_cpp::srv",
  "AddThreeInts_Request",
  _AddThreeInts_Request__cdr_serialize,
  _AddThreeInts_Request__cdr_deserialize,
  _AddThreeInts_Request__get_serialized_size,
  get_serialized_size_tutorial_interfaces_cpp__srv__AddThreeInts_Request,
  _AddThreeInts_Request__max_serialized_size
};

static rosidl_message_type_support_t _AddThreeInts_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_AddThreeInts_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, tutorial_interfaces_cpp, srv, AddThreeInts_Request)() {
  return &_AddThreeInts_Request__type_support;
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
// #include "tutorial_interfaces_cpp/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
// already included above
// #include "tutorial_interfaces_cpp/srv/detail/add_three_ints__struct.h"
// already included above
// #include "tutorial_interfaces_cpp/srv/detail/add_three_ints__functions.h"

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


typedef tutorial_interfaces_cpp__srv__AddThreeInts_Response _AddThreeInts_Response__ros_msg_type;

static bool _AddThreeInts_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _AddThreeInts_Response__ros_msg_type * ros_message = (_AddThreeInts_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: sum
  rv = ucdr_serialize_int64_t(cdr, ros_message->sum);

  return rv;
}

static bool _AddThreeInts_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _AddThreeInts_Response__ros_msg_type * ros_message = (_AddThreeInts_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: sum
  rv = ucdr_deserialize_int64_t(cdr, &ros_message->sum);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_tutorial_interfaces_cpp
size_t get_serialized_size_tutorial_interfaces_cpp__srv__AddThreeInts_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _AddThreeInts_Response__ros_msg_type * ros_message = (const _AddThreeInts_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: sum
  {
    const size_t item_size = sizeof(ros_message->sum);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AddThreeInts_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_tutorial_interfaces_cpp__srv__AddThreeInts_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_tutorial_interfaces_cpp
size_t max_serialized_size_tutorial_interfaces_cpp__srv__AddThreeInts_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: sum
  current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + sizeof(int64_t);

  return current_alignment - initial_alignment;
}

static size_t _AddThreeInts_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_tutorial_interfaces_cpp__srv__AddThreeInts_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_AddThreeInts_Response = {
  "tutorial_interfaces_cpp::srv",
  "AddThreeInts_Response",
  _AddThreeInts_Response__cdr_serialize,
  _AddThreeInts_Response__cdr_deserialize,
  _AddThreeInts_Response__get_serialized_size,
  get_serialized_size_tutorial_interfaces_cpp__srv__AddThreeInts_Response,
  _AddThreeInts_Response__max_serialized_size
};

static rosidl_message_type_support_t _AddThreeInts_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_AddThreeInts_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, tutorial_interfaces_cpp, srv, AddThreeInts_Response)() {
  return &_AddThreeInts_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "tutorial_interfaces_cpp/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "tutorial_interfaces_cpp/srv/add_three_ints.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t AddThreeInts__callbacks = {
  "tutorial_interfaces_cpp::srv",
  "AddThreeInts",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, tutorial_interfaces_cpp, srv, AddThreeInts_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, tutorial_interfaces_cpp, srv, AddThreeInts_Response),
};

static rosidl_service_type_support_t AddThreeInts__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &AddThreeInts__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, tutorial_interfaces_cpp, srv, AddThreeInts)() {
  return &AddThreeInts__handle;
}

#if defined(__cplusplus)
}
#endif
