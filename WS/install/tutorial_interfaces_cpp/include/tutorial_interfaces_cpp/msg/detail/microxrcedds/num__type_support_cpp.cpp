// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from tutorial_interfaces_cpp:msg/Num.idl
// generated code does not contain a copyright notice
#include "tutorial_interfaces_cpp/msg/detail/num__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "tutorial_interfaces_cpp/msg/detail/num__struct.hpp"

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

namespace tutorial_interfaces_cpp
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tutorial_interfaces_cpp
cdr_serialize(
  const tutorial_interfaces_cpp::msg::Num & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: num
  rv = ucdr_serialize_int64_t(cdr, ros_message.num);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tutorial_interfaces_cpp
cdr_deserialize(
  ucdrBuffer * cdr,
  tutorial_interfaces_cpp::msg::Num & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: num
  rv = ucdr_deserialize_int64_t(cdr, &ros_message.num);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tutorial_interfaces_cpp
get_serialized_size(
  const tutorial_interfaces_cpp::msg::Num & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: num
  {
    const size_t item_size = sizeof(ros_message.num);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tutorial_interfaces_cpp
max_serialized_size_Num(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: num
  current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + sizeof(int64_t);

  return current_alignment - initial_alignment;
}

static bool _Num__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const tutorial_interfaces_cpp::msg::Num *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Num__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tutorial_interfaces_cpp::msg::Num *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Num__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tutorial_interfaces_cpp::msg::Num *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Num__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const tutorial_interfaces_cpp::msg::Num *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Num__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Num(&full_bounded, 0);
}

static message_type_support_callbacks_t _Num__callbacks = {
  "tutorial_interfaces_cpp::msg",
  "Num",
  _Num__cdr_serialize,
  _Num__cdr_deserialize,
  _Num__get_serialized_size,
  _Num__get_serialized_size_with_initial_alignment,
  _Num__max_serialized_size
};

static rosidl_message_type_support_t _Num__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Num__callbacks,
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
get_message_type_support_handle<tutorial_interfaces_cpp::msg::Num>()
{
  return &tutorial_interfaces_cpp::msg::typesupport_microxrcedds_cpp::_Num__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, tutorial_interfaces_cpp, msg, Num)() {
  return &tutorial_interfaces_cpp::msg::typesupport_microxrcedds_cpp::_Num__handle;
}

#ifdef __cplusplus
}
#endif
