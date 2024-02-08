// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces_cpp:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES_CPP__MSG__DETAIL__NUM__BUILDER_HPP_
#define TUTORIAL_INTERFACES_CPP__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorial_interfaces_cpp/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorial_interfaces_cpp
{

namespace msg
{

namespace builder
{

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces_cpp::msg::Num num(::tutorial_interfaces_cpp::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces_cpp::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces_cpp::msg::Num>()
{
  return tutorial_interfaces_cpp::msg::builder::Init_Num_num();
}

}  // namespace tutorial_interfaces_cpp

#endif  // TUTORIAL_INTERFACES_CPP__MSG__DETAIL__NUM__BUILDER_HPP_
