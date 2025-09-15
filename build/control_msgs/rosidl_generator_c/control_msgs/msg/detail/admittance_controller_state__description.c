// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from control_msgs:msg/AdmittanceControllerState.idl
// generated code does not contain a copyright notice

#include "control_msgs/msg/detail/admittance_controller_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_control_msgs
const rosidl_type_hash_t *
control_msgs__msg__AdmittanceControllerState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8a, 0x23, 0xc5, 0x41, 0x84, 0xba, 0x10, 0x1c,
      0x9a, 0x73, 0x3a, 0x0a, 0x88, 0x20, 0x01, 0xed,
      0xae, 0x47, 0x8c, 0x8c, 0x3e, 0xa3, 0x71, 0x32,
      0xf9, 0xaa, 0xe1, 0xd8, 0x2f, 0xad, 0x0b, 0x73,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "geometry_msgs/msg/detail/wrench_stamped__functions.h"
#include "geometry_msgs/msg/detail/vector3__functions.h"
#include "sensor_msgs/msg/detail/joint_state__functions.h"
#include "geometry_msgs/msg/detail/wrench__functions.h"
#include "geometry_msgs/msg/detail/transform__functions.h"
#include "std_msgs/msg/detail/float64_multi_array__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "geometry_msgs/msg/detail/transform_stamped__functions.h"
#include "geometry_msgs/msg/detail/twist__functions.h"
#include "std_msgs/msg/detail/int8_multi_array__functions.h"
#include "geometry_msgs/msg/detail/twist_stamped__functions.h"
#include "std_msgs/msg/detail/multi_array_layout__functions.h"
#include "std_msgs/msg/detail/multi_array_dimension__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/string__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Transform__EXPECTED_HASH = {1, {
    0xbe, 0xb8, 0x3f, 0xbe, 0x69, 0x86, 0x36, 0x35,
    0x14, 0x61, 0xf6, 0xf3, 0x5d, 0x1a, 0xbb, 0x20,
    0x01, 0x0c, 0x43, 0xd5, 0x53, 0x74, 0xd8, 0x1b,
    0xd0, 0x41, 0xf1, 0xba, 0x25, 0x81, 0xfd, 0xdc,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__TransformStamped__EXPECTED_HASH = {1, {
    0x0a, 0x24, 0x1f, 0x87, 0xd0, 0x46, 0x68, 0xd9,
    0x40, 0x99, 0xcb, 0xb5, 0xba, 0x11, 0x69, 0x1d,
    0x5a, 0xd3, 0x2c, 0x2f, 0x29, 0x68, 0x2e, 0x4e,
    0xb5, 0x65, 0x34, 0x24, 0xbd, 0x27, 0x52, 0x06,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Twist__EXPECTED_HASH = {1, {
    0x9c, 0x45, 0xbf, 0x16, 0xfe, 0x09, 0x83, 0xd8,
    0x0e, 0x3c, 0xfe, 0x75, 0x0d, 0x68, 0x35, 0x84,
    0x3d, 0x26, 0x5a, 0x9a, 0x6c, 0x46, 0xbd, 0x2e,
    0x60, 0x9f, 0xcd, 0xdd, 0xe6, 0xfb, 0x8d, 0x2a,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__TwistStamped__EXPECTED_HASH = {1, {
    0x5f, 0x0f, 0xcd, 0x4f, 0x81, 0xd5, 0xd0, 0x6a,
    0xd9, 0xb4, 0xc4, 0xc6, 0x3e, 0x3e, 0xa5, 0x1b,
    0x82, 0xd6, 0xae, 0x4d, 0x05, 0x58, 0xf1, 0xd4,
    0x75, 0x22, 0x9b, 0x11, 0x21, 0xdb, 0x6f, 0x64,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__EXPECTED_HASH = {1, {
    0xcc, 0x12, 0xfe, 0x83, 0xe4, 0xc0, 0x27, 0x19,
    0xf1, 0xce, 0x80, 0x70, 0xbf, 0xd1, 0x4a, 0xec,
    0xd4, 0x0f, 0x75, 0xa9, 0x66, 0x96, 0xa6, 0x7a,
    0x2a, 0x1f, 0x37, 0xf7, 0xdb, 0xb0, 0x76, 0x5d,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Wrench__EXPECTED_HASH = {1, {
    0x01, 0x8e, 0x85, 0x19, 0xd5, 0x7c, 0x16, 0xad,
    0xbe, 0x97, 0xc9, 0xfe, 0x14, 0x60, 0xef, 0x21,
    0xfe, 0xc7, 0xe3, 0x1b, 0xc5, 0x41, 0xde, 0x3d,
    0x65, 0x3a, 0x35, 0x89, 0x56, 0x77, 0xce, 0x52,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__WrenchStamped__EXPECTED_HASH = {1, {
    0x8d, 0xc3, 0xde, 0xaf, 0x06, 0xb2, 0xab, 0x28,
    0x1f, 0x9f, 0x9a, 0x74, 0x2a, 0x89, 0x61, 0xc3,
    0x28, 0xca, 0x7c, 0xec, 0x16, 0xe3, 0xfd, 0x65,
    0x86, 0xd3, 0xa5, 0xc8, 0x3f, 0xa7, 0x8f, 0x77,
  }};
static const rosidl_type_hash_t sensor_msgs__msg__JointState__EXPECTED_HASH = {1, {
    0xa1, 0x3e, 0xe3, 0xa3, 0x30, 0xe3, 0x46, 0xc9,
    0xd8, 0x7b, 0x5a, 0xa1, 0x8d, 0x24, 0xe1, 0x16,
    0x90, 0x75, 0x2b, 0xd3, 0x3a, 0x03, 0x50, 0xf1,
    0x1c, 0x58, 0x82, 0xbc, 0x91, 0x79, 0x26, 0x0e,
  }};
static const rosidl_type_hash_t std_msgs__msg__Float64MultiArray__EXPECTED_HASH = {1, {
    0x10, 0x25, 0xdd, 0xc6, 0xb9, 0x55, 0x2d, 0x19,
    0x1f, 0x89, 0xef, 0x1a, 0x8d, 0x2f, 0x60, 0xf3,
    0xd3, 0x73, 0xe2, 0x8b, 0x28, 0x3d, 0x88, 0x91,
    0xdd, 0xcc, 0x97, 0x4e, 0x8c, 0x55, 0x39, 0x7f,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
static const rosidl_type_hash_t std_msgs__msg__Int8MultiArray__EXPECTED_HASH = {1, {
    0xf2, 0x19, 0x98, 0xd4, 0xb4, 0x92, 0xab, 0xd6,
    0x33, 0x30, 0x76, 0x5d, 0x75, 0xd5, 0x83, 0x12,
    0x38, 0xd4, 0x00, 0x74, 0x03, 0x86, 0xf6, 0x51,
    0xf1, 0x3a, 0x87, 0x2a, 0x4d, 0x21, 0x88, 0xdb,
  }};
static const rosidl_type_hash_t std_msgs__msg__MultiArrayDimension__EXPECTED_HASH = {1, {
    0x5e, 0x77, 0x3a, 0x60, 0xa4, 0xc7, 0xfc, 0x8a,
    0x54, 0x98, 0x5f, 0x30, 0x7c, 0x78, 0x37, 0xaa,
    0x29, 0x94, 0x25, 0x2a, 0x12, 0x6c, 0x30, 0x19,
    0x57, 0xa2, 0x4e, 0x31, 0x28, 0x2c, 0x9c, 0xbe,
  }};
static const rosidl_type_hash_t std_msgs__msg__MultiArrayLayout__EXPECTED_HASH = {1, {
    0x4c, 0x66, 0xe6, 0xf7, 0x8e, 0x74, 0x0a, 0xc1,
    0x03, 0xa9, 0x4c, 0xf6, 0x32, 0x59, 0xf9, 0x68,
    0xe4, 0x8c, 0x61, 0x7e, 0x76, 0x99, 0xe8, 0x29,
    0xb6, 0x3c, 0x21, 0xa5, 0xcb, 0x50, 0xda, 0xc6,
  }};
static const rosidl_type_hash_t std_msgs__msg__String__EXPECTED_HASH = {1, {
    0xdf, 0x66, 0x8c, 0x74, 0x04, 0x82, 0xbb, 0xd4,
    0x8f, 0xb3, 0x9d, 0x76, 0xa7, 0x0d, 0xfd, 0x4b,
    0xd5, 0x9d, 0xb1, 0x28, 0x80, 0x21, 0x74, 0x35,
    0x03, 0x25, 0x9e, 0x94, 0x8f, 0x6b, 0x1a, 0x18,
  }};
#endif

static char control_msgs__msg__AdmittanceControllerState__TYPE_NAME[] = "control_msgs/msg/AdmittanceControllerState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char geometry_msgs__msg__Transform__TYPE_NAME[] = "geometry_msgs/msg/Transform";
static char geometry_msgs__msg__TransformStamped__TYPE_NAME[] = "geometry_msgs/msg/TransformStamped";
static char geometry_msgs__msg__Twist__TYPE_NAME[] = "geometry_msgs/msg/Twist";
static char geometry_msgs__msg__TwistStamped__TYPE_NAME[] = "geometry_msgs/msg/TwistStamped";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";
static char geometry_msgs__msg__Wrench__TYPE_NAME[] = "geometry_msgs/msg/Wrench";
static char geometry_msgs__msg__WrenchStamped__TYPE_NAME[] = "geometry_msgs/msg/WrenchStamped";
static char sensor_msgs__msg__JointState__TYPE_NAME[] = "sensor_msgs/msg/JointState";
static char std_msgs__msg__Float64MultiArray__TYPE_NAME[] = "std_msgs/msg/Float64MultiArray";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";
static char std_msgs__msg__Int8MultiArray__TYPE_NAME[] = "std_msgs/msg/Int8MultiArray";
static char std_msgs__msg__MultiArrayDimension__TYPE_NAME[] = "std_msgs/msg/MultiArrayDimension";
static char std_msgs__msg__MultiArrayLayout__TYPE_NAME[] = "std_msgs/msg/MultiArrayLayout";
static char std_msgs__msg__String__TYPE_NAME[] = "std_msgs/msg/String";

// Define type names, field names, and default values
static char control_msgs__msg__AdmittanceControllerState__FIELD_NAME__mass[] = "mass";
static char control_msgs__msg__AdmittanceControllerState__FIELD_NAME__damping[] = "damping";
static char control_msgs__msg__AdmittanceControllerState__FIELD_NAME__stiffness[] = "stiffness";
static char control_msgs__msg__AdmittanceControllerState__FIELD_NAME__rot_base_control[] = "rot_base_control";
static char control_msgs__msg__AdmittanceControllerState__FIELD_NAME__ref_trans_base_ft[] = "ref_trans_base_ft";
static char control_msgs__msg__AdmittanceControllerState__FIELD_NAME__selected_axes[] = "selected_axes";
static char control_msgs__msg__AdmittanceControllerState__FIELD_NAME__ft_sensor_frame[] = "ft_sensor_frame";
static char control_msgs__msg__AdmittanceControllerState__FIELD_NAME__admittance_position[] = "admittance_position";
static char control_msgs__msg__AdmittanceControllerState__FIELD_NAME__admittance_acceleration[] = "admittance_acceleration";
static char control_msgs__msg__AdmittanceControllerState__FIELD_NAME__admittance_velocity[] = "admittance_velocity";
static char control_msgs__msg__AdmittanceControllerState__FIELD_NAME__wrench_base[] = "wrench_base";
static char control_msgs__msg__AdmittanceControllerState__FIELD_NAME__joint_state[] = "joint_state";

static rosidl_runtime_c__type_description__Field control_msgs__msg__AdmittanceControllerState__FIELDS[] = {
  {
    {control_msgs__msg__AdmittanceControllerState__FIELD_NAME__mass, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Float64MultiArray__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__AdmittanceControllerState__FIELD_NAME__damping, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Float64MultiArray__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__AdmittanceControllerState__FIELD_NAME__stiffness, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Float64MultiArray__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__AdmittanceControllerState__FIELD_NAME__rot_base_control, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__AdmittanceControllerState__FIELD_NAME__ref_trans_base_ft, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__TransformStamped__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__AdmittanceControllerState__FIELD_NAME__selected_axes, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Int8MultiArray__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__AdmittanceControllerState__FIELD_NAME__ft_sensor_frame, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__String__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__AdmittanceControllerState__FIELD_NAME__admittance_position, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__TransformStamped__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__AdmittanceControllerState__FIELD_NAME__admittance_acceleration, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__TwistStamped__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__AdmittanceControllerState__FIELD_NAME__admittance_velocity, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__TwistStamped__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__AdmittanceControllerState__FIELD_NAME__wrench_base, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__WrenchStamped__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__AdmittanceControllerState__FIELD_NAME__joint_state, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sensor_msgs__msg__JointState__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription control_msgs__msg__AdmittanceControllerState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Transform__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__TransformStamped__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Twist__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__TwistStamped__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Wrench__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__WrenchStamped__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__JointState__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Float64MultiArray__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Int8MultiArray__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__MultiArrayDimension__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__MultiArrayLayout__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__String__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
control_msgs__msg__AdmittanceControllerState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_msgs__msg__AdmittanceControllerState__TYPE_NAME, 42, 42},
      {control_msgs__msg__AdmittanceControllerState__FIELDS, 12, 12},
    },
    {control_msgs__msg__AdmittanceControllerState__REFERENCED_TYPE_DESCRIPTIONS, 16, 16},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Transform__EXPECTED_HASH, geometry_msgs__msg__Transform__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Transform__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__TransformStamped__EXPECTED_HASH, geometry_msgs__msg__TransformStamped__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__TransformStamped__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Twist__EXPECTED_HASH, geometry_msgs__msg__Twist__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Twist__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__TwistStamped__EXPECTED_HASH, geometry_msgs__msg__TwistStamped__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__TwistStamped__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Wrench__EXPECTED_HASH, geometry_msgs__msg__Wrench__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = geometry_msgs__msg__Wrench__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__WrenchStamped__EXPECTED_HASH, geometry_msgs__msg__WrenchStamped__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = geometry_msgs__msg__WrenchStamped__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__JointState__EXPECTED_HASH, sensor_msgs__msg__JointState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = sensor_msgs__msg__JointState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Float64MultiArray__EXPECTED_HASH, std_msgs__msg__Float64MultiArray__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = std_msgs__msg__Float64MultiArray__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[11].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Int8MultiArray__EXPECTED_HASH, std_msgs__msg__Int8MultiArray__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[12].fields = std_msgs__msg__Int8MultiArray__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__MultiArrayDimension__EXPECTED_HASH, std_msgs__msg__MultiArrayDimension__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[13].fields = std_msgs__msg__MultiArrayDimension__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__MultiArrayLayout__EXPECTED_HASH, std_msgs__msg__MultiArrayLayout__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[14].fields = std_msgs__msg__MultiArrayLayout__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__String__EXPECTED_HASH, std_msgs__msg__String__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[15].fields = std_msgs__msg__String__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Admittance parameters\n"
  "std_msgs/Float64MultiArray mass  # 6-vector of mass terms used in the admittance calculation\n"
  "std_msgs/Float64MultiArray damping # 6-vector of damping terms used in the admittance calculation\n"
  "std_msgs/Float64MultiArray stiffness # 6-vector of stiffness terms used in the admittance calculation\n"
  "\n"
  "# Frame information\n"
  "geometry_msgs/Quaternion rot_base_control # quaternion describing the orientation of the control frame\n"
  "geometry_msgs/TransformStamped ref_trans_base_ft # force torque sensor transform at the reference joint configuration\n"
  "std_msgs/Int8MultiArray selected_axes # 6-vector of 0/1 describing if admittance is enable in the corresponding control frame axis\n"
  "std_msgs/String ft_sensor_frame # name of the force torque frame\n"
  "\n"
  "# State information\n"
  "geometry_msgs/TransformStamped admittance_position # calculated admittance position in cartesian space\n"
  "geometry_msgs/TwistStamped admittance_acceleration # calculated admittance acceleration in cartesian space\n"
  "geometry_msgs/TwistStamped admittance_velocity # calculated admittance velocity in cartesian space\n"
  "geometry_msgs/WrenchStamped wrench_base # wrench used in the admittance calculation\n"
  "sensor_msgs/JointState joint_state # calculated admittance offsets in joint space";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
control_msgs__msg__AdmittanceControllerState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_msgs__msg__AdmittanceControllerState__TYPE_NAME, 42, 42},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1251, 1251},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_msgs__msg__AdmittanceControllerState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[17];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 17, 17};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_msgs__msg__AdmittanceControllerState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Transform__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__TransformStamped__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Twist__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__TwistStamped__get_individual_type_description_source(NULL);
    sources[7] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[8] = *geometry_msgs__msg__Wrench__get_individual_type_description_source(NULL);
    sources[9] = *geometry_msgs__msg__WrenchStamped__get_individual_type_description_source(NULL);
    sources[10] = *sensor_msgs__msg__JointState__get_individual_type_description_source(NULL);
    sources[11] = *std_msgs__msg__Float64MultiArray__get_individual_type_description_source(NULL);
    sources[12] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[13] = *std_msgs__msg__Int8MultiArray__get_individual_type_description_source(NULL);
    sources[14] = *std_msgs__msg__MultiArrayDimension__get_individual_type_description_source(NULL);
    sources[15] = *std_msgs__msg__MultiArrayLayout__get_individual_type_description_source(NULL);
    sources[16] = *std_msgs__msg__String__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
