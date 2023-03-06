// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bat_led_interfaces:msg/LedStateArray.idl
// generated code does not contain a copyright notice

#ifndef BAT_LED_INTERFACES__MSG__DETAIL__LED_STATE_ARRAY__BUILDER_HPP_
#define BAT_LED_INTERFACES__MSG__DETAIL__LED_STATE_ARRAY__BUILDER_HPP_

#include "bat_led_interfaces/msg/detail/led_state_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace bat_led_interfaces
{

namespace msg
{

namespace builder
{

class Init_LedStateArray_led_states
{
public:
  Init_LedStateArray_led_states()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bat_led_interfaces::msg::LedStateArray led_states(::bat_led_interfaces::msg::LedStateArray::_led_states_type arg)
  {
    msg_.led_states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bat_led_interfaces::msg::LedStateArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bat_led_interfaces::msg::LedStateArray>()
{
  return bat_led_interfaces::msg::builder::Init_LedStateArray_led_states();
}

}  // namespace bat_led_interfaces

#endif  // BAT_LED_INTERFACES__MSG__DETAIL__LED_STATE_ARRAY__BUILDER_HPP_
