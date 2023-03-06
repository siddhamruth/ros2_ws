// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bat_led_interfaces:msg/LedStateArray.idl
// generated code does not contain a copyright notice
#include "bat_led_interfaces/msg/detail/led_state_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
bat_led_interfaces__msg__LedStateArray__init(bat_led_interfaces__msg__LedStateArray * msg)
{
  if (!msg) {
    return false;
  }
  // led_states
  return true;
}

void
bat_led_interfaces__msg__LedStateArray__fini(bat_led_interfaces__msg__LedStateArray * msg)
{
  if (!msg) {
    return;
  }
  // led_states
}

bool
bat_led_interfaces__msg__LedStateArray__are_equal(const bat_led_interfaces__msg__LedStateArray * lhs, const bat_led_interfaces__msg__LedStateArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // led_states
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->led_states[i] != rhs->led_states[i]) {
      return false;
    }
  }
  return true;
}

bool
bat_led_interfaces__msg__LedStateArray__copy(
  const bat_led_interfaces__msg__LedStateArray * input,
  bat_led_interfaces__msg__LedStateArray * output)
{
  if (!input || !output) {
    return false;
  }
  // led_states
  for (size_t i = 0; i < 3; ++i) {
    output->led_states[i] = input->led_states[i];
  }
  return true;
}

bat_led_interfaces__msg__LedStateArray *
bat_led_interfaces__msg__LedStateArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bat_led_interfaces__msg__LedStateArray * msg = (bat_led_interfaces__msg__LedStateArray *)allocator.allocate(sizeof(bat_led_interfaces__msg__LedStateArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bat_led_interfaces__msg__LedStateArray));
  bool success = bat_led_interfaces__msg__LedStateArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bat_led_interfaces__msg__LedStateArray__destroy(bat_led_interfaces__msg__LedStateArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bat_led_interfaces__msg__LedStateArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bat_led_interfaces__msg__LedStateArray__Sequence__init(bat_led_interfaces__msg__LedStateArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bat_led_interfaces__msg__LedStateArray * data = NULL;

  if (size) {
    data = (bat_led_interfaces__msg__LedStateArray *)allocator.zero_allocate(size, sizeof(bat_led_interfaces__msg__LedStateArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bat_led_interfaces__msg__LedStateArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bat_led_interfaces__msg__LedStateArray__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
bat_led_interfaces__msg__LedStateArray__Sequence__fini(bat_led_interfaces__msg__LedStateArray__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      bat_led_interfaces__msg__LedStateArray__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

bat_led_interfaces__msg__LedStateArray__Sequence *
bat_led_interfaces__msg__LedStateArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bat_led_interfaces__msg__LedStateArray__Sequence * array = (bat_led_interfaces__msg__LedStateArray__Sequence *)allocator.allocate(sizeof(bat_led_interfaces__msg__LedStateArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bat_led_interfaces__msg__LedStateArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bat_led_interfaces__msg__LedStateArray__Sequence__destroy(bat_led_interfaces__msg__LedStateArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bat_led_interfaces__msg__LedStateArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bat_led_interfaces__msg__LedStateArray__Sequence__are_equal(const bat_led_interfaces__msg__LedStateArray__Sequence * lhs, const bat_led_interfaces__msg__LedStateArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bat_led_interfaces__msg__LedStateArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bat_led_interfaces__msg__LedStateArray__Sequence__copy(
  const bat_led_interfaces__msg__LedStateArray__Sequence * input,
  bat_led_interfaces__msg__LedStateArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bat_led_interfaces__msg__LedStateArray);
    bat_led_interfaces__msg__LedStateArray * data =
      (bat_led_interfaces__msg__LedStateArray *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bat_led_interfaces__msg__LedStateArray__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          bat_led_interfaces__msg__LedStateArray__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bat_led_interfaces__msg__LedStateArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
