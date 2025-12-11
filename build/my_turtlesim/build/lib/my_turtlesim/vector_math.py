from geometry_msgs.msg import Vector3
import math
import numpy as np


class VectorMath:
    UNARY_MINUS_VECTOR = Vector3(x=-1, y=-1, z=-1)

    @staticmethod
    def unaryMinus(v1: Vector3) -> Vector3:
        """
        Multiplies -1 to all components of the Vector
        """
        return VectorMath.multiply(v1=v1, v2=VectorMath.UNARY_MINUS_VECTOR)

    @staticmethod
    def pow(v1: Vector3, x: float) -> Vector3:
        """
        Raises all components of v1 to the power of x
        """
        return Vector3(x=v1.x**x, y=v1.y**x, z=v1.z**x)

    @staticmethod
    def add(v1: Vector3, v2: Vector3) -> Vector3:
        """
        Adds Vector 1 and Vector 2 together
        """
        return Vector3(x=v1.x + v2.x, y=v1.y + v2.y, z=v1.z + v2.z)

    @staticmethod
    def subtract(v1: Vector3, v2: Vector3) -> Vector3:
        """
        Subtracts Vector 2 from Vector 1
        """
        return VectorMath.add(v1=v1, v2=VectorMath.unaryMinus(v2))

    @staticmethod
    def multiply(v1: Vector3, v2: Vector3) -> Vector3:
        """
        Multiplies Vector 1 and Vector 2 together
        """
        return Vector3(x=v2.x * v2.x, y=v1.y * v2.y, z=v1.z *  v2.z)

    @staticmethod
    def divide(v1: Vector3, v2: Vector3) -> Vector3:
        """
        Divides Vector 2 from Vector 1
        """
        return VectorMath.multiply(v1=v1, v2=VectorMath.pow(v2, -1))
    @staticmethod
    def magnitude(v1: Vector3) -> float:
        return (v1.x**2 + v1.y**2 + v1.z**2)**.5
    @staticmethod
    def dot_product(v1: Vector3, v2: Vector3) -> float:
        return v1.x*v2.x + v1.y*v2.y + v1.z*v2.z
    @staticmethod
    def cross_product(v1: Vector3, v2: Vector3) -> Vector3:
        """
        Returns cross product of v1 and v2
        """
        return Vector3(x = v1.y*v2.z - v1.z*v2.y, y = v1.x*v2.z - v1.z*v2.x, z = v1.z*v2.y - v1.y*v2.x)
    @staticmethod
    def normalize(v1: Vector3) -> Vector3:
        """
        Returns a unit vector in the same direction as v1
        """
        mag = VectorMath.magnitude(v1)
        if mag == 0:
            return Vector3()
        return VectorMath.divide(v1=v1, v2=Vector3(x=mag, y=mag, z=mag))
    @staticmethod
    def to_cylindrical(v1: Vector3) -> Vector3:
        """
        Converts rectangular coordinate system Vector to cylindrical coordinates
        """
        r = (v1.x**2 + v1.y**2)**0.5
        theta = math.atan2(v1.y, v1.x)
        return Vector3(x=r, y=theta, z=v1.z)
    @staticmethod
    def to_spherical(v1: Vector3) -> Vector3:
        """
        Converts rectangular coordinate system Vector to spherical coordinates
        """
        r = (v1.x**2 + v1.y**2)**0.5
        theta = math.atan2(v1.y, v1.x)
        return Vector3(x=r, y=theta, z=v1.z)
    # @staticmethod
    # def rotate_by(v1: Vector3, r1: Vector3) -> Vector3:
    #     """
    #     Returns the Vector resulting from the 3d rotation in r1
    #     Assumes that v1 is in rectangular coordinates
    #     Assumes that r1 is in radians
    #     """
        