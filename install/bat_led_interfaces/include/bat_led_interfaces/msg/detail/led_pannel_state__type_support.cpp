// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bat_led_interfaces:msg/LedPannelState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bat_led_interfaces/msg/detail/led_pannel_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace bat_led_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LedPannelState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bat_led_interfaces::msg::LedPannelState(_init);
}

void LedPannelState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bat_led_interfaces::msg::LedPannelState *>(message_memory);
  typed_message->~LedPannelState();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LedPannelState_message_member_array[1] = {
  {
    "led_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bat_led_interfaces::msg::LedPannelState, led_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LedPannelState_message_members = {
  "bat_led_interfaces::msg",  // message namespace
  "LedPannelState",  // message name
  1,  // number of fields
  sizeof(bat_led_interfaces::msg::LedPannelState),
  LedPannelState_message_member_array,  // message members
  LedPannelState_init_function,  // function to initialize message memory (memory has to be allocated)
  LedPannelState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LedPannelState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LedPannelState_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace bat_led_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bat_led_interfaces::msg::LedPannelState>()
{
  return &::bat_led_interfaces::msg::rosidl_typesupport_introspection_cpp::LedPannelState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bat_led_interfaces, msg, LedPannelState)() {
  return &::bat_led_interfaces::msg::rosidl_typesupport_introspection_cpp::LedPannelState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
