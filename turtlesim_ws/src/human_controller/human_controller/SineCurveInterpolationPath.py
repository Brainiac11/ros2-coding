import math
import numpy as np
from numpy.typing import NDArray
import matplotlib.pyplot as plt
import time
from scipy.integrate import quad
from scipy.spatial.transform import Rotation as R
from numpy import float64


class SineInterpolationPath:
    interpolated_path: list[NDArray]

    def __init__(
        self,
        start_point: NDArray,
        end_point: NDArray,
        height: float,
        interpolation_time_count: int = 1000,
        is_reversed: bool = False,
    ):
        """Interpolates the given starting and ending end_effector locations in a square pattern.

        Args:
            start_point (NDArray): end effector starting point in 2D
            end_point (NDArray): end effector ending location in 2D
            interpolation_time_count (float, optional): the total interpolation count to complete the square. Defaults to 1000.
            is_reversed (bool, optional): whether to start traveling from the orthogonal vector of the travel vector (False), or travel along the travel_vector first (True). Defaults to False.
        """
        self._start_point: NDArray = start_point
        self._end_point: NDArray = end_point
        self._travel_vector: NDArray = end_point - start_point
        self._sin_height: np.float64 = np.float64(height)
        self._sin_width: float64 = float64(np.linalg.norm(self._travel_vector))
        self._perimeter: np.float64 = float64(
            self.arc_length_sine(a=0, b=self._sin_width)
        )
        self._interpolation_time_count = interpolation_time_count
        self._step_distance = self._perimeter / self._interpolation_time_count
        self._is_reversed = is_reversed
        self.interpolated_path = [self._start_point]

    def f(self, x):
        return self._sin_height * np.sin(x * (np.pi / self._sin_width))

    def f_prime(self, x):
        return (
            self._sin_height
            * (np.pi / self._sin_width)
            * np.cos(x * (math.pi / self._sin_width))
        )

    def arc_length_integrand(self, x):
        return np.sqrt(1 + (self.f_prime(x)) ** 2)

    def arc_length_sine(self, a: float, b: float) -> float:
        arc_length = quad(self.arc_length_integrand, a, b)
        return arc_length[0]

    def _invert_arc_length(
        self, s_target: float, tol: float = 1e-6, max_iter: int = 60
    ) -> float:
        """Find x in [0, width] such that arc_length(0, x) == s_target using bisection.

        Args:
            s_target: target arc length from 0.
            tol: tolerance for convergence in x.
            max_iter: maximum iterations for bisection.

        Returns:
            x coordinate corresponding to the target arc length.
        """
        low = 0.0
        high = float(self._sin_width)
        # Clamp target within achievable range
        s_target = max(0.0, min(float(self._perimeter), float(s_target)))
        for _ in range(max_iter):
            mid = 0.5 * (low + high)
            s_mid = self.arc_length_sine(0.0, mid)
            if abs(s_mid - s_target) < tol:
                return mid
            if s_mid < s_target:
                low = mid
            else:
                high = mid
        return 0.5 * (low + high)

    def rotate_point_by_theta_around_origin(
        self, point: NDArray, theta: float
    ) -> NDArray:
        """_summary_

        Args:
            point (NDArray): point in space
            theta (float): angle to rotate in radians

        Returns:
            NDArray: a 2d point in space that is transformed by the given theta
        """
        three_d_point = np.array([point[0], point[1], 0])
        r = R.from_euler("z", theta, degrees=False)
        return r.apply(three_d_point)[:2]

    def rotate_point_list_by_theta_around_origin(
        self, points: list[NDArray], theta: float
    ) -> list[NDArray]:
        """_summary_

        Args:
            point (NDArray): point in space
            theta (float): angle to rotate in radians

        Returns:
            NDArray: a 2d point in space that is transformed by the given theta
        """
        three_d_points: list[NDArray] = []
        for p in points:
            three_d_points.append(np.array([p[0], p[1], 0]))
        r = R.from_euler("z", theta, degrees=False)
        ps = r.apply(three_d_points)
        pst: list[NDArray] = []
        for p in ps:
            pst.append(np.array([p[0], p[1]]))
        return pst

    def find_unit_vector(self, vector: NDArray) -> NDArray:
        return vector / np.linalg.norm(vector)

    def interpolate_with_time(self) -> list[NDArray]:
        """Generate points along a sine curve with equal arc-length spacing.

        The local sine is defined over x in [0, width] with y = height * sin(pi*x/width).
        Points are then rotated to align with the travel vector and translated to start_point.
        """
        direction = -1.0 if self._is_reversed else 1.0

        travel_vec = self._travel_vector
        if np.linalg.norm(travel_vec) == 0:
            self.interpolated_path = [self._start_point.copy()]
            return self.interpolated_path
        theta = np.atan2(travel_vec[1], travel_vec[0])

        points_local: list[NDArray] = []
        s = 0.0
        x = self._invert_arc_length(s_target=s)
        y = self.f(x)
        points_local.append(np.array([x, y], dtype=float))
        for i in range(1, self._interpolation_time_count):
            s = i * float(self._step_distance)
            x = self._invert_arc_length(s_target=s)
            y = self.f(x)
            points_local.append(np.array([x, y], dtype=float))

        points_local.append(np.array([float(self._sin_width), self.f(self._sin_width)]))

        rotated_points = self.rotate_point_list_by_theta_around_origin(
            points_local, theta
        )
        origin = self._start_point if direction > 0 else self._end_point
        if direction < 0:
            points_local_rev = [
                np.array([float(self._sin_width) - p[0], p[1]]) for p in points_local
            ]
            rotated_points = self.rotate_point_list_by_theta_around_origin(
                points_local_rev, theta
            )
        translated_points = [origin + p for p in rotated_points]
        self.interpolated_path = translated_points
        return self.interpolated_path


def main():
    inter: SineInterpolationPath = SineInterpolationPath(
        start_point=np.array([0.0, 0.0]),
        end_point=np.array([40, 0]),
        interpolation_time_count=30,
        is_reversed=False,
        height=5.0,
    )
    timer = time.time()
    path: list[NDArray] = inter.interpolate_with_time()
    print(f"Interpolation took {time.time() - timer} seconds")
    print(len(path))
    # print(path[:-3])
    # plt.xlim(0, 20)
    # plt.ylim(0, 20)
    plt.plot([p[0] for p in path], [p[1] for p in path])
    # Plot spacing along the curve visually
    # path = inter.rotate_point_list_by_theta_around_origin(points=path, theta = np.pi/4.0)
    # plt.plot([p[0] for p in path], [p[1] for p in path])

    # plt.plot([p for p in range(len(path))], [p[0] for p in path])

    x = np.linspace(start=0, stop=float(inter._end_point[0]), num=1000)
    # plt.plot(x,4*np.sin(x/10))

    plt.show()
    print("Hello")


if __name__ == "__main__":
    main()
