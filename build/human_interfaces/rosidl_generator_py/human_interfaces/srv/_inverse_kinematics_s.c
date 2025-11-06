// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from human_interfaces:srv/InverseKinematics.idl
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
#include "human_interfaces/srv/detail/inverse_kinematics__struct.h"
#include "human_interfaces/srv/detail/inverse_kinematics__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool human_interfaces__srv__inverse_kinematics__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[67];
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
    assert(strncmp("human_interfaces.srv._inverse_kinematics.InverseKinematics_Request", full_classname_dest, 66) == 0);
  }
  human_interfaces__srv__InverseKinematics_Request * ros_message = _ros_message;
  {  // target_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // link1_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "link1_length");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->link1_length = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // link2_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "link2_length");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->link2_length = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // link3_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "link3_length");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->link3_length = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fix_joint1
    PyObject * field = PyObject_GetAttrString(_pymsg, "fix_joint1");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fix_joint1 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fix_joint2
    PyObject * field = PyObject_GetAttrString(_pymsg, "fix_joint2");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fix_joint2 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fix_joint3
    PyObject * field = PyObject_GetAttrString(_pymsg, "fix_joint3");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fix_joint3 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fixed_joint1_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "fixed_joint1_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fixed_joint1_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fixed_joint2_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "fixed_joint2_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fixed_joint2_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fixed_joint3_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "fixed_joint3_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fixed_joint3_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * human_interfaces__srv__inverse_kinematics__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of InverseKinematics_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("human_interfaces.srv._inverse_kinematics");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "InverseKinematics_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  human_interfaces__srv__InverseKinematics_Request * ros_message = (human_interfaces__srv__InverseKinematics_Request *)raw_ros_message;
  {  // target_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // link1_length
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->link1_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "link1_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // link2_length
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->link2_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "link2_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // link3_length
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->link3_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "link3_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fix_joint1
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fix_joint1 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fix_joint1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fix_joint2
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fix_joint2 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fix_joint2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fix_joint3
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fix_joint3 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fix_joint3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fixed_joint1_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fixed_joint1_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fixed_joint1_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fixed_joint2_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fixed_joint2_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fixed_joint2_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fixed_joint3_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fixed_joint3_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fixed_joint3_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "human_interfaces/srv/detail/inverse_kinematics__struct.h"
// already included above
// #include "human_interfaces/srv/detail/inverse_kinematics__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool human_interfaces__srv__inverse_kinematics__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[68];
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
    assert(strncmp("human_interfaces.srv._inverse_kinematics.InverseKinematics_Response", full_classname_dest, 67) == 0);
  }
  human_interfaces__srv__InverseKinematics_Response * ros_message = _ros_message;
  {  // joint1_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint1_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->joint1_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // joint2_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint2_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->joint2_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // joint3_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint3_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->joint3_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }
  {  // message
    PyObject * field = PyObject_GetAttrString(_pymsg, "message");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->message, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * human_interfaces__srv__inverse_kinematics__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of InverseKinematics_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("human_interfaces.srv._inverse_kinematics");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "InverseKinematics_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  human_interfaces__srv__InverseKinematics_Response * ros_message = (human_interfaces__srv__InverseKinematics_Response *)raw_ros_message;
  {  // joint1_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->joint1_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint1_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint2_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->joint2_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint2_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint3_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->joint3_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint3_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // message
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->message.data,
      strlen(ros_message->message.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "message", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "human_interfaces/srv/detail/inverse_kinematics__struct.h"
// already included above
// #include "human_interfaces/srv/detail/inverse_kinematics__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes


// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool service_msgs__msg__service_event_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * service_msgs__msg__service_event_info__convert_to_py(void * raw_ros_message);
bool human_interfaces__srv__inverse_kinematics__request__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * human_interfaces__srv__inverse_kinematics__request__convert_to_py(void * raw_ros_message);
bool human_interfaces__srv__inverse_kinematics__response__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * human_interfaces__srv__inverse_kinematics__response__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool human_interfaces__srv__inverse_kinematics__event__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
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
    assert(strncmp("human_interfaces.srv._inverse_kinematics.InverseKinematics_Event", full_classname_dest, 64) == 0);
  }
  human_interfaces__srv__InverseKinematics_Event * ros_message = _ros_message;
  {  // info
    PyObject * field = PyObject_GetAttrString(_pymsg, "info");
    if (!field) {
      return false;
    }
    if (!service_msgs__msg__service_event_info__convert_from_py(field, &ros_message->info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // request
    PyObject * field = PyObject_GetAttrString(_pymsg, "request");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'request'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!human_interfaces__srv__InverseKinematics_Request__Sequence__init(&(ros_message->request), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create human_interfaces__srv__InverseKinematics_Request__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    human_interfaces__srv__InverseKinematics_Request * dest = ros_message->request.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!human_interfaces__srv__inverse_kinematics__request__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // response
    PyObject * field = PyObject_GetAttrString(_pymsg, "response");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'response'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!human_interfaces__srv__InverseKinematics_Response__Sequence__init(&(ros_message->response), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create human_interfaces__srv__InverseKinematics_Response__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    human_interfaces__srv__InverseKinematics_Response * dest = ros_message->response.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!human_interfaces__srv__inverse_kinematics__response__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * human_interfaces__srv__inverse_kinematics__event__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of InverseKinematics_Event */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("human_interfaces.srv._inverse_kinematics");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "InverseKinematics_Event");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  human_interfaces__srv__InverseKinematics_Event * ros_message = (human_interfaces__srv__InverseKinematics_Event *)raw_ros_message;
  {  // info
    PyObject * field = NULL;
    field = service_msgs__msg__service_event_info__convert_to_py(&ros_message->info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // request
    PyObject * field = NULL;
    size_t size = ros_message->request.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    human_interfaces__srv__InverseKinematics_Request * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->request.data[i]);
      PyObject * pyitem = human_interfaces__srv__inverse_kinematics__request__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "request", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // response
    PyObject * field = NULL;
    size_t size = ros_message->response.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    human_interfaces__srv__InverseKinematics_Response * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->response.data[i]);
      PyObject * pyitem = human_interfaces__srv__inverse_kinematics__response__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "response", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
