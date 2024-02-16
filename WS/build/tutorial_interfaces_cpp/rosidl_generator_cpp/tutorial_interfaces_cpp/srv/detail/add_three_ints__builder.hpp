// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces_cpp:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES_CPP__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_
#define TUTORIAL_INTERFACES_CPP__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorial_interfaces_cpp/srv/detail/add_three_ints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorial_interfaces_cpp
{

namespace srv
{

namespace builder
{

class Init_AddThreeInts_Request_c
{
public:
  explicit Init_AddThreeInts_Request_c(::tutorial_interfaces_cpp::srv::AddThreeInts_Request & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces_cpp::srv::AddThreeInts_Request c(::tutorial_interfaces_cpp::srv::AddThreeInts_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces_cpp::srv::AddThreeInts_Request msg_;
};

class Init_AddThreeInts_Request_b
{
public:
  explicit Init_AddThreeInts_Request_b(::tutorial_interfaces_cpp::srv::AddThreeInts_Request & msg)
  : msg_(msg)
  {}
  Init_AddThreeInts_Request_c b(::tutorial_interfaces_cpp::srv::AddThreeInts_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_AddThreeInts_Request_c(msg_);
  }

private:
  ::tutorial_interfaces_cpp::srv::AddThreeInts_Request msg_;
};

class Init_AddThreeInts_Request_a
{
public:
  Init_AddThreeInts_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddThreeInts_Request_b a(::tutorial_interfaces_cpp::srv::AddThreeInts_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_AddThreeInts_Request_b(msg_);
  }

private:
  ::tutorial_interfaces_cpp::srv::AddThreeInts_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces_cpp::srv::AddThreeInts_Request>()
{
  return tutorial_interfaces_cpp::srv::builder::Init_AddThreeInts_Request_a();
}

}  // namespace tutorial_interfaces_cpp


namespace tutorial_interfaces_cpp
{

namespace srv
{

namespace builder
{

class Init_AddThreeInts_Response_sum
{
public:
  Init_AddThreeInts_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces_cpp::srv::AddThreeInts_Response sum(::tutorial_interfaces_cpp::srv::AddThreeInts_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces_cpp::srv::AddThreeInts_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces_cpp::srv::AddThreeInts_Response>()
{
  return tutorial_interfaces_cpp::srv::builder::Init_AddThreeInts_Response_sum();
}

}  // namespace tutorial_interfaces_cpp

#endif  // TUTORIAL_INTERFACES_CPP__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_
