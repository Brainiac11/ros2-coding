// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_message:msg/SampleMsg.idl
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
#include "custom_message/msg/detail/sample_msg__struct.h"
#include "custom_message/msg/detail/sample_msg__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__string__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__string__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool custom_message__msg__sample_msg__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("custom_message.msg._sample_msg.SampleMsg", full_classname_dest, 40) == 0);
  }
  custom_message__msg__SampleMsg * ros_message = _ros_message;
  {  // my_string
    PyObject * field = PyObject_GetAttrString(_pymsg, "my_string");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__string__convert_from_py(field, &ros_message->my_string)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // my_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "my_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->my_num = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_message__msg__sample_msg__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SampleMsg */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_message.msg._sample_msg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SampleMsg");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_message__msg__SampleMsg * ros_message = (custom_message__msg__SampleMsg *)raw_ros_message;
  {  // my_string
    PyObject * field = NULL;
    field = std_msgs__msg__string__convert_to_py(&ros_message->my_string);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "my_string", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // my_num
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->my_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "my_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
