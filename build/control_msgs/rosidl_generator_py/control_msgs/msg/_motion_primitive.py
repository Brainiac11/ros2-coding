# generated from rosidl_generator_py/resource/_idl.py.em
# with input from control_msgs:msg/MotionPrimitive.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'joint_positions'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotionPrimitive(type):
    """Metaclass of message 'MotionPrimitive'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': -1,
        'LINEAR_JOINT': 0,
        'LINEAR_CARTESIAN': 50,
        'CIRCULAR_CARTESIAN': 51,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('control_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'control_msgs.msg.MotionPrimitive')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motion_primitive
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motion_primitive
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motion_primitive
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motion_primitive
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motion_primitive

            from control_msgs.msg import MotionArgument
            if MotionArgument.__class__._TYPE_SUPPORT is None:
                MotionArgument.__class__.__import_type_support__()

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'LINEAR_JOINT': cls.__constants['LINEAR_JOINT'],
            'LINEAR_CARTESIAN': cls.__constants['LINEAR_CARTESIAN'],
            'CIRCULAR_CARTESIAN': cls.__constants['CIRCULAR_CARTESIAN'],
            'TYPE__DEFAULT': -1,
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_MotionPrimitive.__constants['UNKNOWN']

    @property
    def LINEAR_JOINT(self):
        """Message constant 'LINEAR_JOINT'."""
        return Metaclass_MotionPrimitive.__constants['LINEAR_JOINT']

    @property
    def LINEAR_CARTESIAN(self):
        """Message constant 'LINEAR_CARTESIAN'."""
        return Metaclass_MotionPrimitive.__constants['LINEAR_CARTESIAN']

    @property
    def CIRCULAR_CARTESIAN(self):
        """Message constant 'CIRCULAR_CARTESIAN'."""
        return Metaclass_MotionPrimitive.__constants['CIRCULAR_CARTESIAN']

    @property
    def TYPE__DEFAULT(cls):
        """Return default value for message field 'type'."""
        return -1


class MotionPrimitive(metaclass=Metaclass_MotionPrimitive):
    """
    Message class 'MotionPrimitive'.

    Constants:
      UNKNOWN
      LINEAR_JOINT
      LINEAR_CARTESIAN
      CIRCULAR_CARTESIAN
    """

    __slots__ = [
        '_type',
        '_blend_radius',
        '_additional_arguments',
        '_poses',
        '_joint_positions',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'type': 'int8',
        'blend_radius': 'double',
        'additional_arguments': 'sequence<control_msgs/MotionArgument>',
        'poses': 'sequence<geometry_msgs/PoseStamped>',
        'joint_positions': 'sequence<double>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['control_msgs', 'msg'], 'MotionArgument')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get(
            'type', MotionPrimitive.TYPE__DEFAULT)
        self.blend_radius = kwargs.get('blend_radius', float())
        self.additional_arguments = kwargs.get('additional_arguments', [])
        self.poses = kwargs.get('poses', [])
        self.joint_positions = array.array('d', kwargs.get('joint_positions', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.type != other.type:
            return False
        if self.blend_radius != other.blend_radius:
            return False
        if self.additional_arguments != other.additional_arguments:
            return False
        if self.poses != other.poses:
            return False
        if self.joint_positions != other.joint_positions:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'type' field must be an integer in [-128, 127]"
        self._type = value

    @builtins.property
    def blend_radius(self):
        """Message field 'blend_radius'."""
        return self._blend_radius

    @blend_radius.setter
    def blend_radius(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'blend_radius' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'blend_radius' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._blend_radius = value

    @builtins.property
    def additional_arguments(self):
        """Message field 'additional_arguments'."""
        return self._additional_arguments

    @additional_arguments.setter
    def additional_arguments(self, value):
        if self._check_fields:
            from control_msgs.msg import MotionArgument
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, MotionArgument) for v in value) and
                 True), \
                "The 'additional_arguments' field must be a set or sequence and each value of type 'MotionArgument'"
        self._additional_arguments = value

    @builtins.property
    def poses(self):
        """Message field 'poses'."""
        return self._poses

    @poses.setter
    def poses(self, value):
        if self._check_fields:
            from geometry_msgs.msg import PoseStamped
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, PoseStamped) for v in value) and
                 True), \
                "The 'poses' field must be a set or sequence and each value of type 'PoseStamped'"
        self._poses = value

    @builtins.property
    def joint_positions(self):
        """Message field 'joint_positions'."""
        return self._joint_positions

    @joint_positions.setter
    def joint_positions(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'joint_positions' array.array() must have the type code of 'd'"
                self._joint_positions = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'joint_positions' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._joint_positions = array.array('d', value)
