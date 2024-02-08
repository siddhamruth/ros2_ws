// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from tutorial_interfaces_cpp:srv/AddThreeInts.idl
// generated code does not contain a copyright notice
#include "tutorial_interfaces_cpp/srv/detail/add_three_ints__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "tutorial_interfaces_cpp/srv/detail/add_three_ints__struct.hpp"

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

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tutorial_interfaces_cpp
cdr_serialize(
  const tutorial_interfaces_cpp::srv::AddThreeInts_Request & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: a
  rv = ucdr_serialize_int64_t(cdr, ros_message.a);
  // Member: b
  rv = ucdr_serialize_int64_t(cdr, ros_message.b);
  // Member: c
  rv = ucdr_serialize_int64_t(cdr, ros_message.c);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tutorial_interfaces_cpp
cdr_deserialize(
  ucdrBuffer * cdr,
  tutorial_interfaces_cpp::srv::AddThreeInts_Request & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: a
  rv = ucdr_deserialize_int64_t(cdr, &ros_message.a);
  // Member: b
  rv = ucdr_deserialize_int64_t(cdr, &ros_message.b);
  // Member: c
  rv = ucdr_deserialize_int64_t(cdr, &ros_message.c);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tutorial_interfaces_cpp
get_serialized_size(
  const tutorial_interfaces_cpp::srv::AddThreeInts_Request & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: a
  {
    const size_t item_size = sizeof(ros_message.a);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: b
  {
    const size_t item_size = sizeof(ros_message.b);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: c
  {
    const size_t item_size = sizeof(ros_message.c);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tutorial_interfaces_cpp
max_serialized_size_AddThreeInts_Request(
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

static bool _AddThreeInts_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const tutorial_interfaces_cpp::srv::AddThreeInts_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AddThreeInts_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tutorial_interfaces_cpp::srv::AddThreeInts_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AddThreeInts_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tutorial_interfaces_cpp::srv::AddThreeInts_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AddThreeInts_Request__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const tutorial_interfaces_cpp::srv::AddThreeInts_Request *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _AddThreeInts_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_AddThreeInts_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t _AddThreeInts_Request__callbacks = {
  "tutorial_interfaces_cpp::srv",
  "AddThreeInts_Request",
  _AddThreeInts_Request__cdr_serialize,
  _AddThreeInts_Request__cdr_deserialize,
  _AddThreeInts_Request__get_serialized_size,
  _AddThreeInts_Request__get_serialized_size_with_initial_alignment,
  _AddThreeInts_Request__max_serialized_size
};

static rosidl_message_type_support_t _AddThreeInts_Request__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_AddThreeInts_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace tutorial_interfaces_cpp

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_tutorial_interfaces_cpp
const rosidl_message_type_support_t *
get_message_type_support_handle<tutorial_interfaces_cpp::srv::AddThreeInts_Request>()
{
  return &tutorial_interfaces_cpp::srv::typesupport_microxrcedds_cpp::_AddThreeInts_Request__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, tutorial_interfaces_cpp, srv, AddThreeInts_Request)() {
  return &tutorial_interfaces_cpp::srv::typesupport_microxrcedds_cpp::_AddThreeInts_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <algorithm>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include <cstring>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
// already included above
// #include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions

namespace tutorial_interfaces_cpp
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tutorial_interfaces_cpp
cdr_serialize(
  const tutorial_interfaces_cpp::srv::AddThreeInts_Response & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: sum
  rv = ucdr_serialize_int64_t(cdr, ros_message.sum);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tutorial_interfaces_cpp
cdr_deserialize(
  ucdrBuffer * cdr,
  tutorial_interfaces_cpp::srv::AddThreeInts_Response & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: sum
  rv = ucdr_deserialize_int64_t(cdr, &ros_message.sum);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tutorial_interfaces_cpp
get_serialized_size(
  const tutorial_interfaces_cpp::srv::AddThreeInts_Response & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: sum
  {
    const size_t item_size = sizeof(ros_message.sum);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_tutorial_interfaces_cpp
max_serialized_size_AddThreeInts_Response(
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

static bool _AddThreeInts_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const tutorial_interfaces_cpp::srv::AddThreeInts_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AddThreeInts_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tutorial_interfaces_cpp::srv::AddThreeInts_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AddThreeInts_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tutorial_interfaces_cpp::srv::AddThreeInts_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AddThreeInts_Response__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const tutorial_interfaces_cpp::srv::AddThreeInts_Response *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _AddThreeInts_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_AddThreeInts_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t _AddThreeInts_Response__callbacks = {
  "tutorial_interfaces_cpp::srv",
  "AddThreeInts_Response",
  _AddThreeInts_Response__cdr_serialize,
  _AddThreeInts_Response__cdr_deserialize,
  _AddThreeInts_Response__get_serialized_size,
  _AddThreeInts_Response__get_serialized_size_with_initial_alignment,
  _AddThreeInts_Response__max_serialized_size
};

static rosidl_message_type_support_t _AddThreeInts_Response__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_AddThreeInts_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace tutorial_interfaces_cpp

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_tutorial_interfaces_cpp
const rosidl_message_type_support_t *
get_message_type_support_handle<tutorial_interfaces_cpp::srv::AddThreeInts_Response>()
{
  return &tutorial_interfaces_cpp::srv::typesupport_microxrcedds_cpp::_AddThreeInts_Response__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, tutorial_interfaces_cpp, srv, AddThreeInts_Response)() {
  return &tutorial_interfaces_cpp::srv::typesupport_microxrcedds_cpp::_AddThreeInts_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/service_type_support_decl.hpp"

namespace tutorial_interfaces_cpp
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

static service_type_support_callbacks_t _AddThreeInts__callbacks = {
  "tutorial_interfaces_cpp::srv",
  "AddThreeInts",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, tutorial_interfaces_cpp, srv, AddThreeInts_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, tutorial_interfaces_cpp, srv, AddThreeInts_Response),
};

static rosidl_service_type_support_t _AddThreeInts__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_AddThreeInts__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace tutorial_interfaces_cpp

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_tutorial_interfaces_cpp
const rosidl_service_type_support_t *
get_service_type_support_handle<tutorial_interfaces_cpp::srv::AddThreeInts>()
{
  return &tutorial_interfaces_cpp::srv::typesupport_microxrcedds_cpp::_AddThreeInts__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, tutorial_interfaces_cpp, srv, AddThreeInts)() {
  return &tutorial_interfaces_cpp::srv::typesupport_microxrcedds_cpp::_AddThreeInts__handle;
}

#ifdef __cplusplus
}
#endif
