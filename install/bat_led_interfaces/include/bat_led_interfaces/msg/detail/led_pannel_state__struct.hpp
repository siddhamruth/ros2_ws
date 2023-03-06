// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bat_led_interfaces:msg/LedPannelState.idl
// generated code does not contain a copyright notice

#ifndef BAT_LED_INTERFACES__MSG__DETAIL__LED_PANNEL_STATE__STRUCT_HPP_
#define BAT_LED_INTERFACES__MSG__DETAIL__LED_PANNEL_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__bat_led_interfaces__msg__LedPannelState __attribute__((deprecated))
#else
# define DEPRECATED__bat_led_interfaces__msg__LedPannelState __declspec(deprecated)
#endif

namespace bat_led_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LedPannelState_
{
  using Type = LedPannelState_<ContainerAllocator>;

  explicit LedPannelState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led_state = 0l;
    }
  }

  explicit LedPannelState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led_state = 0l;
    }
  }

  // field types and members
  using _led_state_type =
    int32_t;
  _led_state_type led_state;

  // setters for named parameter idiom
  Type & set__led_state(
    const int32_t & _arg)
  {
    this->led_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bat_led_interfaces::msg::LedPannelState_<ContainerAllocator> *;
  using ConstRawPtr =
    const bat_led_interfaces::msg::LedPannelState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bat_led_interfaces::msg::LedPannelState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bat_led_interfaces::msg::LedPannelState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bat_led_interfaces::msg::LedPannelState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bat_led_interfaces::msg::LedPannelState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bat_led_interfaces::msg::LedPannelState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bat_led_interfaces::msg::LedPannelState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bat_led_interfaces::msg::LedPannelState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bat_led_interfaces::msg::LedPannelState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bat_led_interfaces__msg__LedPannelState
    std::shared_ptr<bat_led_interfaces::msg::LedPannelState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bat_led_interfaces__msg__LedPannelState
    std::shared_ptr<bat_led_interfaces::msg::LedPannelState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedPannelState_ & other) const
  {
    if (this->led_state != other.led_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedPannelState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedPannelState_

// alias to use template instance with default allocator
using LedPannelState =
  bat_led_interfaces::msg::LedPannelState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bat_led_interfaces

#endif  // BAT_LED_INTERFACES__MSG__DETAIL__LED_PANNEL_STATE__STRUCT_HPP_
