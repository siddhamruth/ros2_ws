// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces_cpp:msg/Sphere.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES_CPP__MSG__DETAIL__SPHERE__BUILDER_HPP_
#define TUTORIAL_INTERFACES_CPP__MSG__DETAIL__SPHERE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorial_interfaces_cpp/msg/detail/sphere__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorial_interfaces_cpp
{

namespace msg
{

namespace builder
{

class Init_Sphere_radius
{
public:
  explicit Init_Sphere_radius(::tutorial_interfaces_cpp::msg::Sphere & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces_cpp::msg::Sphere radius(::tutorial_interfaces_cpp::msg::Sphere::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces_cpp::msg::Sphere msg_;
};

class Init_Sphere_center
{
public:
  Init_Sphere_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sphere_radius center(::tutorial_interfaces_cpp::msg::Sphere::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_Sphere_radius(msg_);
  }

private:
  ::tutorial_interfaces_cpp::msg::Sphere msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces_cpp::msg::Sphere>()
{
  return tutorial_interfaces_cpp::msg::builder::Init_Sphere_center();
}

}  // namespace tutorial_interfaces_cpp

#endif  // TUTORIAL_INTERFACES_CPP__MSG__DETAIL__SPHERE__BUILDER_HPP_
