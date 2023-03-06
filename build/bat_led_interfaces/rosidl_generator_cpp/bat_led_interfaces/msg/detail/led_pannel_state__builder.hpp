// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bat_led_interfaces:msg/LedPannelState.idl
// generated code does not contain a copyright notice

#ifndef BAT_LED_INTERFACES__MSG__DETAIL__LED_PANNEL_STATE__BUILDER_HPP_
#define BAT_LED_INTERFACES__MSG__DETAIL__LED_PANNEL_STATE__BUILDER_HPP_

#include "bat_led_interfaces/msg/detail/led_pannel_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace bat_led_interfaces
{

namespace msg
{

namespace builder
{

class Init_LedPannelState_led_state
{
public:
  Init_LedPannelState_led_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bat_led_interfaces::msg::LedPannelState led_state(::bat_led_interfaces::msg::LedPannelState::_led_state_type arg)
  {
    msg_.led_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bat_led_interfaces::msg::LedPannelState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bat_led_interfaces::msg::LedPannelState>()
{
  return bat_led_interfaces::msg::builder::Init_LedPannelState_led_state();
}

}  // namespace bat_led_interfaces

#endif  // BAT_LED_INTERFACES__MSG__DETAIL__LED_PANNEL_STATE__BUILDER_HPP_
