# generated from rosidl_generator_py/resource/_idl.py.em
# with input from controller_manager_msgs:srv/SwitchController.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SwitchController_Request(type):
    """Metaclass of message 'SwitchController_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BEST_EFFORT': 1,
        'STRICT': 2,
        'AUTO': 3,
        'FORCE_AUTO': 4,
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
                'controller_manager_msgs.srv.SwitchController_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__switch_controller__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__switch_controller__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__switch_controller__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__switch_controller__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__switch_controller__request

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BEST_EFFORT': cls.__constants['BEST_EFFORT'],
            'STRICT': cls.__constants['STRICT'],
            'AUTO': cls.__constants['AUTO'],
            'FORCE_AUTO': cls.__constants['FORCE_AUTO'],
        }

    @property
    def BEST_EFFORT(self):
        """Message constant 'BEST_EFFORT'."""
        return Metaclass_SwitchController_Request.__constants['BEST_EFFORT']

    @property
    def STRICT(self):
        """Message constant 'STRICT'."""
        return Metaclass_SwitchController_Request.__constants['STRICT']

    @property
    def AUTO(self):
        """Message constant 'AUTO'."""
        return Metaclass_SwitchController_Request.__constants['AUTO']

    @property
    def FORCE_AUTO(self):
        """Message constant 'FORCE_AUTO'."""
        return Metaclass_SwitchController_Request.__constants['FORCE_AUTO']


class SwitchController_Request(metaclass=Metaclass_SwitchController_Request):
    """
    Message class 'SwitchController_Request'.

    Constants:
      BEST_EFFORT
      STRICT
      AUTO
      FORCE_AUTO
    """

    __slots__ = [
        '_activate_controllers',
        '_deactivate_controllers',
        '_strictness',
        '_activate_asap',
        '_timeout',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'activate_controllers': 'sequence<string>',
        'deactivate_controllers': 'sequence<string>',
        'strictness': 'int32',
        'activate_asap': 'boolean',
        'timeout': 'builtin_interfaces/Duration',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
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
        self.activate_controllers = kwargs.get('activate_controllers', [])
        self.deactivate_controllers = kwargs.get('deactivate_controllers', [])
        self.strictness = kwargs.get('strictness', int())
        self.activate_asap = kwargs.get('activate_asap', bool())
        from builtin_interfaces.msg import Duration
        self.timeout = kwargs.get('timeout', Duration())

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
        if self.activate_controllers != other.activate_controllers:
            return False
        if self.deactivate_controllers != other.deactivate_controllers:
            return False
        if self.strictness != other.strictness:
            return False
        if self.activate_asap != other.activate_asap:
            return False
        if self.timeout != other.timeout:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def activate_controllers(self):
        """Message field 'activate_controllers'."""
        return self._activate_controllers

    @activate_controllers.setter
    def activate_controllers(self, value):
        if self._check_fields:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'activate_controllers' field must be a set or sequence and each value of type 'str'"
        self._activate_controllers = value

    @builtins.property
    def deactivate_controllers(self):
        """Message field 'deactivate_controllers'."""
        return self._deactivate_controllers

    @deactivate_controllers.setter
    def deactivate_controllers(self, value):
        if self._check_fields:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'deactivate_controllers' field must be a set or sequence and each value of type 'str'"
        self._deactivate_controllers = value

    @builtins.property
    def strictness(self):
        """Message field 'strictness'."""
        return self._strictness

    @strictness.setter
    def strictness(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'strictness' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'strictness' field must be an integer in [-2147483648, 2147483647]"
        self._strictness = value

    @builtins.property
    def activate_asap(self):
        """Message field 'activate_asap'."""
        return self._activate_asap

    @activate_asap.setter
    def activate_asap(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'activate_asap' field must be of type 'bool'"
        self._activate_asap = value

    @builtins.property
    def timeout(self):
        """Message field 'timeout'."""
        return self._timeout

    @timeout.setter
    def timeout(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'timeout' field must be a sub message of type 'Duration'"
        self._timeout = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SwitchController_Response(type):
    """Metaclass of message 'SwitchController_Response'."""

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
                'controller_manager_msgs.srv.SwitchController_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__switch_controller__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__switch_controller__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__switch_controller__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__switch_controller__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__switch_controller__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SwitchController_Response(metaclass=Metaclass_SwitchController_Response):
    """Message class 'SwitchController_Response'."""

    __slots__ = [
        '_ok',
        '_message',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'ok': 'boolean',
        'message': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
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
        self.ok = kwargs.get('ok', bool())
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
        if self.ok != other.ok:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ok(self):
        """Message field 'ok'."""
        return self._ok

    @ok.setter
    def ok(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'ok' field must be of type 'bool'"
        self._ok = value

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


class Metaclass_SwitchController_Event(type):
    """Metaclass of message 'SwitchController_Event'."""

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
                'controller_manager_msgs.srv.SwitchController_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__switch_controller__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__switch_controller__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__switch_controller__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__switch_controller__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__switch_controller__event

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


class SwitchController_Event(metaclass=Metaclass_SwitchController_Event):
    """Message class 'SwitchController_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<controller_manager_msgs/SwitchController_Request, 1>',
        'response': 'sequence<controller_manager_msgs/SwitchController_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['controller_manager_msgs', 'srv'], 'SwitchController_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['controller_manager_msgs', 'srv'], 'SwitchController_Response'), 1),  # noqa: E501
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
            from controller_manager_msgs.srv import SwitchController_Request
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
                 all(isinstance(v, SwitchController_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'SwitchController_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from controller_manager_msgs.srv import SwitchController_Response
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
                 all(isinstance(v, SwitchController_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'SwitchController_Response'"
        self._response = value


class Metaclass_SwitchController(type):
    """Metaclass of service 'SwitchController'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('controller_manager_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'controller_manager_msgs.srv.SwitchController')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__switch_controller

            from controller_manager_msgs.srv import _switch_controller
            if _switch_controller.Metaclass_SwitchController_Request._TYPE_SUPPORT is None:
                _switch_controller.Metaclass_SwitchController_Request.__import_type_support__()
            if _switch_controller.Metaclass_SwitchController_Response._TYPE_SUPPORT is None:
                _switch_controller.Metaclass_SwitchController_Response.__import_type_support__()
            if _switch_controller.Metaclass_SwitchController_Event._TYPE_SUPPORT is None:
                _switch_controller.Metaclass_SwitchController_Event.__import_type_support__()


class SwitchController(metaclass=Metaclass_SwitchController):
    from controller_manager_msgs.srv._switch_controller import SwitchController_Request as Request
    from controller_manager_msgs.srv._switch_controller import SwitchController_Response as Response
    from controller_manager_msgs.srv._switch_controller import SwitchController_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
