# generated from rosidl_generator_py/resource/_idl.py.em
# with input from human_interfaces:srv/InverseKinematics.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InverseKinematics_Request(type):
    """Metaclass of message 'InverseKinematics_Request'."""

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
            module = import_type_support('human_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'human_interfaces.srv.InverseKinematics_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__inverse_kinematics__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__inverse_kinematics__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__inverse_kinematics__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__inverse_kinematics__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__inverse_kinematics__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InverseKinematics_Request(metaclass=Metaclass_InverseKinematics_Request):
    """Message class 'InverseKinematics_Request'."""

    __slots__ = [
        '_target_x',
        '_target_y',
        '_target_z',
        '_link1_length',
        '_link2_length',
        '_link3_length',
        '_fix_joint1',
        '_fix_joint2',
        '_fix_joint3',
        '_fixed_joint1_angle',
        '_fixed_joint2_angle',
        '_fixed_joint3_angle',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'target_x': 'double',
        'target_y': 'double',
        'target_z': 'double',
        'link1_length': 'double',
        'link2_length': 'double',
        'link3_length': 'double',
        'fix_joint1': 'boolean',
        'fix_joint2': 'boolean',
        'fix_joint3': 'boolean',
        'fixed_joint1_angle': 'double',
        'fixed_joint2_angle': 'double',
        'fixed_joint3_angle': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.target_x = kwargs.get('target_x', float())
        self.target_y = kwargs.get('target_y', float())
        self.target_z = kwargs.get('target_z', float())
        self.link1_length = kwargs.get('link1_length', float())
        self.link2_length = kwargs.get('link2_length', float())
        self.link3_length = kwargs.get('link3_length', float())
        self.fix_joint1 = kwargs.get('fix_joint1', bool())
        self.fix_joint2 = kwargs.get('fix_joint2', bool())
        self.fix_joint3 = kwargs.get('fix_joint3', bool())
        self.fixed_joint1_angle = kwargs.get('fixed_joint1_angle', float())
        self.fixed_joint2_angle = kwargs.get('fixed_joint2_angle', float())
        self.fixed_joint3_angle = kwargs.get('fixed_joint3_angle', float())

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
        if self.target_x != other.target_x:
            return False
        if self.target_y != other.target_y:
            return False
        if self.target_z != other.target_z:
            return False
        if self.link1_length != other.link1_length:
            return False
        if self.link2_length != other.link2_length:
            return False
        if self.link3_length != other.link3_length:
            return False
        if self.fix_joint1 != other.fix_joint1:
            return False
        if self.fix_joint2 != other.fix_joint2:
            return False
        if self.fix_joint3 != other.fix_joint3:
            return False
        if self.fixed_joint1_angle != other.fixed_joint1_angle:
            return False
        if self.fixed_joint2_angle != other.fixed_joint2_angle:
            return False
        if self.fixed_joint3_angle != other.fixed_joint3_angle:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def target_x(self):
        """Message field 'target_x'."""
        return self._target_x

    @target_x.setter
    def target_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'target_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_x = value

    @builtins.property
    def target_y(self):
        """Message field 'target_y'."""
        return self._target_y

    @target_y.setter
    def target_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'target_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_y = value

    @builtins.property
    def target_z(self):
        """Message field 'target_z'."""
        return self._target_z

    @target_z.setter
    def target_z(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'target_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_z = value

    @builtins.property
    def link1_length(self):
        """Message field 'link1_length'."""
        return self._link1_length

    @link1_length.setter
    def link1_length(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'link1_length' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'link1_length' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._link1_length = value

    @builtins.property
    def link2_length(self):
        """Message field 'link2_length'."""
        return self._link2_length

    @link2_length.setter
    def link2_length(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'link2_length' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'link2_length' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._link2_length = value

    @builtins.property
    def link3_length(self):
        """Message field 'link3_length'."""
        return self._link3_length

    @link3_length.setter
    def link3_length(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'link3_length' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'link3_length' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._link3_length = value

    @builtins.property
    def fix_joint1(self):
        """Message field 'fix_joint1'."""
        return self._fix_joint1

    @fix_joint1.setter
    def fix_joint1(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'fix_joint1' field must be of type 'bool'"
        self._fix_joint1 = value

    @builtins.property
    def fix_joint2(self):
        """Message field 'fix_joint2'."""
        return self._fix_joint2

    @fix_joint2.setter
    def fix_joint2(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'fix_joint2' field must be of type 'bool'"
        self._fix_joint2 = value

    @builtins.property
    def fix_joint3(self):
        """Message field 'fix_joint3'."""
        return self._fix_joint3

    @fix_joint3.setter
    def fix_joint3(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'fix_joint3' field must be of type 'bool'"
        self._fix_joint3 = value

    @builtins.property
    def fixed_joint1_angle(self):
        """Message field 'fixed_joint1_angle'."""
        return self._fixed_joint1_angle

    @fixed_joint1_angle.setter
    def fixed_joint1_angle(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'fixed_joint1_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'fixed_joint1_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._fixed_joint1_angle = value

    @builtins.property
    def fixed_joint2_angle(self):
        """Message field 'fixed_joint2_angle'."""
        return self._fixed_joint2_angle

    @fixed_joint2_angle.setter
    def fixed_joint2_angle(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'fixed_joint2_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'fixed_joint2_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._fixed_joint2_angle = value

    @builtins.property
    def fixed_joint3_angle(self):
        """Message field 'fixed_joint3_angle'."""
        return self._fixed_joint3_angle

    @fixed_joint3_angle.setter
    def fixed_joint3_angle(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'fixed_joint3_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'fixed_joint3_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._fixed_joint3_angle = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_InverseKinematics_Response(type):
    """Metaclass of message 'InverseKinematics_Response'."""

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
            module = import_type_support('human_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'human_interfaces.srv.InverseKinematics_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__inverse_kinematics__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__inverse_kinematics__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__inverse_kinematics__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__inverse_kinematics__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__inverse_kinematics__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InverseKinematics_Response(metaclass=Metaclass_InverseKinematics_Response):
    """Message class 'InverseKinematics_Response'."""

    __slots__ = [
        '_joint1_angle',
        '_joint2_angle',
        '_joint3_angle',
        '_success',
        '_message',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'joint1_angle': 'double',
        'joint2_angle': 'double',
        'joint3_angle': 'double',
        'success': 'boolean',
        'message': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        self.joint1_angle = kwargs.get('joint1_angle', float())
        self.joint2_angle = kwargs.get('joint2_angle', float())
        self.joint3_angle = kwargs.get('joint3_angle', float())
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

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
        if self.joint1_angle != other.joint1_angle:
            return False
        if self.joint2_angle != other.joint2_angle:
            return False
        if self.joint3_angle != other.joint3_angle:
            return False
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def joint1_angle(self):
        """Message field 'joint1_angle'."""
        return self._joint1_angle

    @joint1_angle.setter
    def joint1_angle(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'joint1_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'joint1_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._joint1_angle = value

    @builtins.property
    def joint2_angle(self):
        """Message field 'joint2_angle'."""
        return self._joint2_angle

    @joint2_angle.setter
    def joint2_angle(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'joint2_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'joint2_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._joint2_angle = value

    @builtins.property
    def joint3_angle(self):
        """Message field 'joint3_angle'."""
        return self._joint3_angle

    @joint3_angle.setter
    def joint3_angle(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'joint3_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'joint3_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._joint3_angle = value

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_InverseKinematics_Event(type):
    """Metaclass of message 'InverseKinematics_Event'."""

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
            module = import_type_support('human_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'human_interfaces.srv.InverseKinematics_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__inverse_kinematics__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__inverse_kinematics__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__inverse_kinematics__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__inverse_kinematics__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__inverse_kinematics__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InverseKinematics_Event(metaclass=Metaclass_InverseKinematics_Event):
    """Message class 'InverseKinematics_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<human_interfaces/InverseKinematics_Request, 1>',
        'response': 'sequence<human_interfaces/InverseKinematics_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['human_interfaces', 'srv'], 'InverseKinematics_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['human_interfaces', 'srv'], 'InverseKinematics_Response'), 1),  # noqa: E501
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
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

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
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from human_interfaces.srv import InverseKinematics_Request
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
                 len(value) <= 1 and
                 all(isinstance(v, InverseKinematics_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'InverseKinematics_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from human_interfaces.srv import InverseKinematics_Response
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
                 len(value) <= 1 and
                 all(isinstance(v, InverseKinematics_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'InverseKinematics_Response'"
        self._response = value


class Metaclass_InverseKinematics(type):
    """Metaclass of service 'InverseKinematics'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('human_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'human_interfaces.srv.InverseKinematics')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__inverse_kinematics

            from human_interfaces.srv import _inverse_kinematics
            if _inverse_kinematics.Metaclass_InverseKinematics_Request._TYPE_SUPPORT is None:
                _inverse_kinematics.Metaclass_InverseKinematics_Request.__import_type_support__()
            if _inverse_kinematics.Metaclass_InverseKinematics_Response._TYPE_SUPPORT is None:
                _inverse_kinematics.Metaclass_InverseKinematics_Response.__import_type_support__()
            if _inverse_kinematics.Metaclass_InverseKinematics_Event._TYPE_SUPPORT is None:
                _inverse_kinematics.Metaclass_InverseKinematics_Event.__import_type_support__()


class InverseKinematics(metaclass=Metaclass_InverseKinematics):
    from human_interfaces.srv._inverse_kinematics import InverseKinematics_Request as Request
    from human_interfaces.srv._inverse_kinematics import InverseKinematics_Response as Response
    from human_interfaces.srv._inverse_kinematics import InverseKinematics_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
