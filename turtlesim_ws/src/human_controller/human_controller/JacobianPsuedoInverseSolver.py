import numpy as np
from numpy.typing import NDArray
import math


class JacobianPsuedoInverseSolver:
    D_THETA_STARTING = 0.001
    EPSILON_CONSTANT = 0.1
    MAX_ALLOWABLE_ERROR = 0.01

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
        self._link_local_angles = convert_to_local_angles(link_global_angles)
        self._end_effector_location_cartesian = (
            self.find_end_effector_location_cartesian()
        )

    def jacobian_gradient_descent(self) -> NDArray:
        """Jacobian Psuedoinverse

        Returns:
            NDArray: Array of the global angles for each of the joints
        """
        J: NDArray
        for i in range(100000):
            J = self._compute_jacobian()
            if self.find_error_squared_magnitude() < self.MAX_ALLOWABLE_ERROR:
                print(f"TS COnvereged in {i} iterations")
                break
            error_vector: NDArray = self.find_error_vector()[
                :2
            ]  # only x and y are needed in the entire thing

            dq = self.EPSILON_CONSTANT * np.dot(np.linalg.pinv(J), error_vector)
            self._link_local_angles += dq
            self._end_effector_location_cartesian = (
                self.find_end_effector_location_cartesian()
            )

        return self._link_local_angles

    def _compute_jacobian(self) -> NDArray:
        link_num = len(self._link_lengths)
        J = np.zeros((2, link_num))
        # basically we calcaute the partials for each joint, kinda making a gradient
        # j is like the link number we are computing on
        for j in range(link_num):
            dx_dtheta = 0.0
            dy_dtheta = 0.0
            for i in range(j, link_num):
                angle_sum = np.sum(
                    self._link_local_angles[: i + 1]
                )  # final angle after ading up all the global angels
                dx_dtheta -= self._link_lengths[i] * np.sin(
                    angle_sum
                )  # derivative of cos is -sin
                dy_dtheta += self._link_lengths[i] * np.cos(
                    angle_sum
                )  # derivative of sin is cos
            J[0, j] = dx_dtheta
            J[1, j] = dy_dtheta
        return J

    def find_end_effector_location_cartesian(self) -> NDArray:
        x = 0.0
        y = 0.0
        angles_sum = 0.0
        for L, q in zip(self._link_lengths, self._link_local_angles):
            angles_sum += q
            x += L * np.cos(angles_sum)
            y += L * np.sin(angles_sum)
        return np.array([x, y, 0.0])

    def find_error_vector(self) -> NDArray:
        return np.subtract(
            self._target_point, self.find_end_effector_location_cartesian()
        )

    def find_error_squared_magnitude(self):
        return np.power(np.linalg.norm(self.find_error_vector()), 2)


# def main():
#     solver: JacobianPsuedoInverseSolver = JacobianPsuedoInverseSolver(
#         target=np.array([2, 1, 0]),
#         link_lengths=np.array([3, 2, 1]),
#         link_global_angles=np.array([math.pi / 4, math.pi / 4, math.pi / 4.0]),
#     )
#     print(solver.find_end_effector_location_cartesian())
#     x = solver.jacobian_gradient_descent()
#     print("Global", convert_to_global_angles(x))
#     print("local,", x)
#     print("Reduced Radians:", reduce_radians(convert_to_global_angles(x)))
#     print(solver.find_end_effector_location_cartesian())
#     print("Error", solver.find_error_squared_magnitude())


def convert_to_local_angles(global_angles: NDArray) -> NDArray:
    local_angles: NDArray = np.zeros_like(global_angles)
    local_angles[0] = global_angles[0]
    local_angles[1:] = global_angles[1:] - global_angles[:-1]
    return local_angles


def convert_to_global_angles(local_angles: NDArray) -> NDArray:
    return np.cumsum(local_angles)


def reduce_radians(angle: NDArray) -> NDArray:
    return angle % (2.0 * math.pi)
