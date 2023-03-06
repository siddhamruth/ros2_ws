// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bat_led_interfaces:msg/LedPannelState.idl
// generated code does not contain a copyright notice

#ifndef BAT_LED_INTERFACES__MSG__DETAIL__LED_PANNEL_STATE__TRAITS_HPP_
#define BAT_LED_INTERFACES__MSG__DETAIL__LED_PANNEL_STATE__TRAITS_HPP_

#include "bat_led_interfaces/msg/detail/led_pannel_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bat_led_interfaces::msg::LedPannelState>()
{
  return "bat_led_interfaces::msg::LedPannelState";
}

template<>
inline const char * name<bat_led_interfaces::msg::LedPannelState>()
{
  return "bat_led_interfaces/msg/LedPannelState";
}

template<>
struct has_fixed_size<bat_led_interfaces::msg::LedPannelState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bat_led_interfaces::msg::LedPannelState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bat_led_interfaces::msg::LedPannelState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BAT_LED_INTERFACES__MSG__DETAIL__LED_PANNEL_STATE__TRAITS_HPP_
