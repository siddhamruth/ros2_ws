// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from tutorial_interfaces_cpp:msg/Sphere.idl
// generated code does not contain a copyright notice
#include "tutorial_interfaces_cpp/msg/detail/sphere__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "tutorial_interfaces_cpp/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "tutorial_interfaces_cpp/msg/detail/sphere__struct.h"
#include "tutorial_interfaces_cpp/msg/detail/sphere__functions.h"

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

#include "geometry_msgs/msg/detail/point__functions.h"  // center

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_tutorial_interfaces_cpp
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_tutorial_interfaces_cpp
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_tutorial_interfaces_cpp
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Point)();


typedef tutorial_interfaces_cpp__msg__Sphere _Sphere__ros_msg_type;

static bool _Sphere__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Sphere__ros_msg_type * ros_message = (_Sphere__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: center
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Point
      )()->data))->cdr_serialize(&ros_message->center, cdr);
  // Member: radius
  rv = ucdr_serialize_double(cdr, ros_message->radius);

  return rv;
}

static bool _Sphere__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Sphere__ros_msg_type * ros_message = (_Sphere__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: center
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Point
      )()->data))->cdr_deserialize(cdr, &ros_message->center);
  // Field name: radius
  rv = ucdr_deserialize_double(cdr, &ros_message->radius);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_tutorial_interfaces_cpp
size_t get_serialized_size_tutorial_interfaces_cpp__msg__Sphere(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Sphere__ros_msg_type * ros_message = (const _Sphere__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: center
  current_alignment +=
    get_serialized_size_geometry_msgs__msg__Point(&ros_message->center, current_alignment);
  // Member: radius
  {
    const size_t item_size = sizeof(ros_message->radius);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Sphere__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_tutorial_interfaces_cpp__msg__Sphere(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_tutorial_interfaces_cpp
size_t max_serialized_size_tutorial_interfaces_cpp__msg__Sphere(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: center
  current_alignment +=
    max_serialized_size_geometry_msgs__msg__Point(full_bounded, current_alignment);
  // Member: radius
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);

  return current_alignment - initial_alignment;
}

static size_t _Sphere__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_tutorial_interfaces_cpp__msg__Sphere(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Sphere = {
  "tutorial_interfaces_cpp::msg",
  "Sphere",
  _Sphere__cdr_serialize,
  _Sphere__cdr_deserialize,
  _Sphere__get_serialized_size,
  get_serialized_size_tutorial_interfaces_cpp__msg__Sphere,
  _Sphere__max_serialized_size
};

static rosidl_message_type_support_t _Sphere__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Sphere,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, tutorial_interfaces_cpp, msg, Sphere)() {
  return &_Sphere__type_support;
}

#if defined(__cplusplus)
}
#endif
