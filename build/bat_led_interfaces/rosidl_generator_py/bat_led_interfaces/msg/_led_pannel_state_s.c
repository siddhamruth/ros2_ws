// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from bat_led_interfaces:msg/LedPannelState.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "bat_led_interfaces/msg/detail/led_pannel_state__struct.h"
#include "bat_led_interfaces/msg/detail/led_pannel_state__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool bat_led_interfaces__msg__led_pannel_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("bat_led_interfaces.msg._led_pannel_state.LedPannelState", full_classname_dest, 55) == 0);
  }
  bat_led_interfaces__msg__LedPannelState * ros_message = _ros_message;
  {  // led_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "led_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->led_state = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * bat_led_interfaces__msg__led_pannel_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LedPannelState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("bat_led_interfaces.msg._led_pannel_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LedPannelState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  bat_led_interfaces__msg__LedPannelState * ros_message = (bat_led_interfaces__msg__LedPannelState *)raw_ros_message;
  {  // led_state
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->led_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "led_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
