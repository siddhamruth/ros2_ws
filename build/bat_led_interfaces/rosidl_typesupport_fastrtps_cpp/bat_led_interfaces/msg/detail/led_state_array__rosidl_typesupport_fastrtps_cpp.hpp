// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from bat_led_interfaces:msg/LedStateArray.idl
// generated code does not contain a copyright notice

#ifndef BAT_LED_INTERFACES__MSG__DETAIL__LED_STATE_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define BAT_LED_INTERFACES__MSG__DETAIL__LED_STATE_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "bat_led_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "bat_led_interfaces/msg/detail/led_state_array__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace bat_led_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bat_led_interfaces
cdr_serialize(
  const bat_led_interfaces::msg::LedStateArray & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bat_led_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  bat_led_interfaces::msg::LedStateArray & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bat_led_interfaces
get_serialized_size(
  const bat_led_interfaces::msg::LedStateArray & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bat_led_interfaces
max_serialized_size_LedStateArray(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace bat_led_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bat_led_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bat_led_interfaces, msg, LedStateArray)();

#ifdef __cplusplus
}
#endif

#endif  // BAT_LED_INTERFACES__MSG__DETAIL__LED_STATE_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
