import numpy as np
from numpy.typing import NDArray
import math


class JacobianPsuedoInverseSolver:
    D_THETA_STARTING = 0.01

    def __init__(
        self, target: NDArray, link_lengths: NDArray, link_global_angles: NDArray
    ):
        """Meant to solve IK with Jacobian Psuedo Inverse Gradient Descent

        Args:
            target (NDArray): the target end effector location in cartesian
            link_lengths (NDArray): the lengths of each link, starting from the fixed frame to the end effector
            link_global_angles (NDArray): the global angles in radians relative to the fixed frame of each link to the end effector
        """
        self._target_point = np.array([target[0], target[1], target[2]])
        self._link_lengths = link_lengths
        self._link_global_angles = link_global_angles
        self._end_effector_location = np.array([])

    def find_end_effector_location_polar(self) -> NDArray:
        r: NDArray = np.sum(self._link_lengths)
        theta: NDArray = np.sum(self._link_global_angles)
        return np.array([r, theta])

    def find_end_effector_location_cartesian(self) -> NDArray:
        polar: NDArray = self.find_end_effector_location_polar()
        return np.array([polar[0] * np.cos(polar[1]), polar[0] * np.sin(polar[1])])

    def find_error_vector(self) -> NDArray:
        return np.subtract(
            self._target_point, self.find_end_effector_location_cartesian()
        )

    def find_error_squared_magnitude(self):
        return np.power(np.linalg.norm(self.find_error_vector()), 2)


def main():
    solver: JacobianPsuedoInverseSolver = JacobianPsuedoInverseSolver(
        target=np.array([1, 2, 3]),
        link_lengths=np.array([3, 2, 1]),
        link_global_angles=np.array([math.pi / 1.5, math.pi / 3.0, math.pi / 4.0]),
    )
    print(solver.find_end_effector_location_cartesian())
    print("hello")


main()
