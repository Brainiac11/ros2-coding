# generated from rosidl_generator_py/resource/_idl.py.em
# with input from controller_manager_msgs:msg/HardwareInterface.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HardwareInterface(type):
    """Metaclass of message 'HardwareInterface'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('controller_manager_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'controller_manager_msgs.msg.HardwareInterface')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__hardware_interface
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__hardware_interface
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__hardware_interface
            cls._TYPE_SUPPORT = module.type_support_msg__msg__hardware_interface
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__hardware_interface

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HardwareInterface(metaclass=Metaclass_HardwareInterface):
    """Message class 'HardwareInterface'."""

    __slots__ = [
        '_name',
        '_data_type',
        '_is_available',
        '_is_claimed',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'data_type': 'string',
        'is_available': 'boolean',
        'is_claimed': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.name = kwargs.get('name', str())
        self.data_type = kwargs.get('data_type', str())
        self.is_available = kwargs.get('is_available', bool())
        self.is_claimed = kwargs.get('is_claimed', bool())

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
        if self.name != other.name:
            return False
        if self.data_type != other.data_type:
            return False
        if self.is_available != other.is_available:
            return False
        if self.is_claimed != other.is_claimed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def data_type(self):
        """Message field 'data_type'."""
        return self._data_type

    @data_type.setter
    def data_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'data_type' field must be of type 'str'"
        self._data_type = value

    @builtins.property
    def is_available(self):
        """Message field 'is_available'."""
        return self._is_available

    @is_available.setter
    def is_available(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'is_available' field must be of type 'bool'"
        self._is_available = value

    @builtins.property
    def is_claimed(self):
        """Message field 'is_claimed'."""
        return self._is_claimed

    @is_claimed.setter
    def is_claimed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'is_claimed' field must be of type 'bool'"
        self._is_claimed = value
