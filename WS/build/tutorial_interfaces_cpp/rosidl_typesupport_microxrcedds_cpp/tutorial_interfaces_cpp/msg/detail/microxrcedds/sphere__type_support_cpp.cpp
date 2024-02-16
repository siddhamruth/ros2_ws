// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from tutorial_interfaces_cpp:msg/Sphere.idl
// generated code does not contain a copyright notice
#include "tutorial_interfaces_cpp/msg/detail/sphere__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "tutorial_interfaces_cpp/msg/detail/sphere__struct.hpp"

#include <limits>
#include <algorithm>
#include <stdexcept>
#include <string>
#include <cstring>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
#include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Point &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  geometry_msgs::msg::Point &);

size_t get_serialized_size(
  const geometry_msgs::msg::Point &,
  size_t current_alignment);

size_t
max_serialized_size_Point(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace tutorial_interfaces_cpp
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tutorial_interfaces_cpp
cdr_serialize(
  const tutorial_interfaces_cpp::msg::Sphere & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: center
  rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.center,
    cdr);
  // Member: radius
  rv = ucdr_serialize_double(cdr, ros_message.radius);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tutorial_interfaces_cpp
cdr_deserialize(
  ucdrBuffer * cdr,
  tutorial_interfaces_cpp::msg::Sphere & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: center
  rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.center);
  // Member: radius
  rv = ucdr_deserialize_double(cdr, &ros_message.radius);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tutorial_interfaces_cpp
get_serialized_size(
  const tutorial_interfaces_cpp::msg::Sphere & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: center
  current_alignment += geometry_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.center,
    current_alignment);
  // Member: radius
  {
    const size_t item_size = sizeof(ros_message.radius);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tutorial_interfaces_cpp
max_serialized_size_Sphere(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: center
  current_alignment += geometry_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_Point(
    full_bounded,
    current_alignment);
  // Member: radius
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);

  return current_alignment - initial_alignment;
}

static bool _Sphere__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const tutorial_interfaces_cpp::msg::Sphere *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Sphere__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tutorial_interfaces_cpp::msg::Sphere *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Sphere__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tutorial_interfaces_cpp::msg::Sphere *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Sphere__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const tutorial_interfaces_cpp::msg::Sphere *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Sphere__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Sphere(&full_bounded, 0);
}

static message_type_support_callbacks_t _Sphere__callbacks = {
  "tutorial_interfaces_cpp::msg",
  "Sphere",
  _Sphere__cdr_serialize,
  _Sphere__cdr_deserialize,
  _Sphere__get_serialized_size,
  _Sphere__get_serialized_size_with_initial_alignment,
  _Sphere__max_serialized_size
};

static rosidl_message_type_support_t _Sphere__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Sphere__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace tutorial_interfaces_cpp

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_tutorial_interfaces_cpp
const rosidl_message_type_support_t *
get_message_type_support_handle<tutorial_interfaces_cpp::msg::Sphere>()
{
  return &tutorial_interfaces_cpp::msg::typesupport_microxrcedds_cpp::_Sphere__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, tutorial_interfaces_cpp, msg, Sphere)() {
  return &tutorial_interfaces_cpp::msg::typesupport_microxrcedds_cpp::_Sphere__handle;
}

#ifdef __cplusplus
}
#endif
