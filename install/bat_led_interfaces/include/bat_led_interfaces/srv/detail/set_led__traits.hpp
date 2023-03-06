// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bat_led_interfaces:srv/SetLed.idl
// generated code does not contain a copyright notice

#ifndef BAT_LED_INTERFACES__SRV__DETAIL__SET_LED__TRAITS_HPP_
#define BAT_LED_INTERFACES__SRV__DETAIL__SET_LED__TRAITS_HPP_

#include "bat_led_interfaces/srv/detail/set_led__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bat_led_interfaces::srv::SetLed_Request>()
{
  return "bat_led_interfaces::srv::SetLed_Request";
}

template<>
inline const char * name<bat_led_interfaces::srv::SetLed_Request>()
{
  return "bat_led_interfaces/srv/SetLed_Request";
}

template<>
struct has_fixed_size<bat_led_interfaces::srv::SetLed_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bat_led_interfaces::srv::SetLed_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bat_led_interfaces::srv::SetLed_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bat_led_interfaces::srv::SetLed_Response>()
{
  return "bat_led_interfaces::srv::SetLed_Response";
}

template<>
inline const char * name<bat_led_interfaces::srv::SetLed_Response>()
{
  return "bat_led_interfaces/srv/SetLed_Response";
}

template<>
struct has_fixed_size<bat_led_interfaces::srv::SetLed_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bat_led_interfaces::srv::SetLed_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bat_led_interfaces::srv::SetLed_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bat_led_interfaces::srv::SetLed>()
{
  return "bat_led_interfaces::srv::SetLed";
}

template<>
inline const char * name<bat_led_interfaces::srv::SetLed>()
{
  return "bat_led_interfaces/srv/SetLed";
}

template<>
struct has_fixed_size<bat_led_interfaces::srv::SetLed>
  : std::integral_constant<
    bool,
    has_fixed_size<bat_led_interfaces::srv::SetLed_Request>::value &&
    has_fixed_size<bat_led_interfaces::srv::SetLed_Response>::value
  >
{
};

template<>
struct has_bounded_size<bat_led_interfaces::srv::SetLed>
  : std::integral_constant<
    bool,
    has_bounded_size<bat_led_interfaces::srv::SetLed_Request>::value &&
    has_bounded_size<bat_led_interfaces::srv::SetLed_Response>::value
  >
{
};

template<>
struct is_service<bat_led_interfaces::srv::SetLed>
  : std::true_type
{
};

template<>
struct is_service_request<bat_led_interfaces::srv::SetLed_Request>
  : std::true_type
{
};

template<>
struct is_service_response<bat_led_interfaces::srv::SetLed_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BAT_LED_INTERFACES__SRV__DETAIL__SET_LED__TRAITS_HPP_
