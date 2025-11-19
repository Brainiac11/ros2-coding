import math
import numpy as np
from numpy.typing import NDArray
import matplotlib.pyplot as plt
import time

class EllipseInterpolationPath:
    interpolated_path: list[NDArray]
    def __init__(self, start_point: NDArray, end_point: NDArray, minor_radius:float, interpolation_time_count:int = 1000, is_reversed:bool = False):
        """Interpolates the given starting and ending end_effector locations in a square pattern.

        Args:
            start_point (NDArray): end effector starting point in 2D
            end_point (NDArray): end effector ending location in 2D
            interpolation_time_count (float, optional): the total interpolation count to complete the square. Defaults to 1000.
            is_reversed (bool, optional): whether to start traveling from the orthogonal vector of the travel vector (False), or travel along the travel_vector first (True). Defaults to False.
        """
        self._start_point:NDArray = start_point
        self._end_point:NDArray = end_point
        self._travel_vector: NDArray = end_point - start_point
        self._minor_radius:np.float64 = np.float64(minor_radius)
        self._major_radius:np.float64 = np.linalg.norm(self._travel_vector)
        h: float = np.power((self._major_radius - self._minor_radius) / (self._major_radius + self._minor_radius), 2)
        self._perimeter:np.float64 = np.pi*(self._major_radius + self._minor_radius) * (1 + (3.0*h)/(10+np.sqrt(4 - 3*h)) + (3*np.power(h, 5) / np.power(2.0, 17))) / 2.0
        print(self._perimeter)
        self._interpolation_time_count = interpolation_time_count
        self._step_distance = self._perimeter / self._interpolation_time_count
        self._is_reversed = is_reversed
        self._negative_orthoganal_vector = self.find_negative_orthoganal_vector(self._travel_vector)
        self.interpolated_path = [self._start_point]
        
    def find_negative_orthoganal_vector(self, vector: NDArray)->NDArray:
        return np.array([vector[1], -vector[0] ])
    def find_positive_orthoganal_vector(self, vector: NDArray)->NDArray:
        return np.array([-vector[1], vector[0] ])
    def find_neutral_orthoganal_vector(self, vector: NDArray)->NDArray:
        return np.array([vector[1], vector[0] ])
    
    def find_unit_vector(self, vector: NDArray) -> NDArray:
        return vector / np.linalg.norm(vector)
    
    def find_positive_derivative_at_ellipse_point(self, x: float, y:float, a:float, b:float) -> np.float64:
        return (-np.power(b, 2.0) * x) / (np.power(a, 2.0) * y)
    def find_negative_derivative_at_ellipse_point(self, x: float, y:float, a:float, b:float) -> np.float64:
        return (-np.power(b, 2.0) * x) / (np.power(a, 2.0) * y)
    
    def interpolate_with_time(self) -> list[NDArray]:
        self.interpolated_path[0] = self._start_point
        current_vector_step: NDArray =  self._step_distance * self.find_positive_derivative_at_ellipse_point(self.interpolated_path[-1][0], self.interpolated_path[1], self._minor_radius, self._major_radius) if not self._is_reversed else self.find_negative_derivative_at_ellipse_point(self.interpolated_path[-1][0], self.interpolated_path[1], self._minor_radius, self._major_radius)
        vertex_point: NDArray = self._start_point
        
        for i in range(1, self._interpolation_time_count+1):
            if np.allclose(self.interpolated_path[-1], self._end_point, rtol=1e-03, atol=1e-03):
                break
            self.interpolated_path.append(self.interpolated_path[i-1] + current_vector_step)
            
            if abs(np.linalg.norm(self.interpolated_path[-1] - vertex_point)) >= shape_length:
                # print(current_vector_step)
                # temp = current_vector_step
                # current_vector_step[0], current_vector_step[1] = np.rot90(np.array([[current_vector_step[0]], [current_vector_step[1]]]), k=1, axes=(0, 1))[0][0],  np.rot90(np.array([[current_vector_step[0]], [current_vector_step[1]]]), k=1, axes=(0, 1))[0][1]
                current_vector_step = self.find_negative_orthoganal_vector(current_vector_step) if not self._is_reversed else self.find_positive_orthoganal_vector(current_vector_step)
                vertex_point = self.interpolated_path[-1]
                shape_length = self._rectangle_height if shape_length==self._rectangle_width else self._rectangle_width
                # print(np.dot(temp, current_vector_step))
                # print(vertex_point)
        
        return self.interpolated_path
        
def main():
    inter: EllipseInterpolationPath = EllipseInterpolationPath(start_point=np.array([0,0]), end_point=np.array([10, 0]), interpolation_time_count=5000, is_reversed=False, minor_radius=5)
    # timer = time.time()
    # path = inter.interpolate_with_time()
    # print(f"Interpolation took {time.time() - timer} seconds")
    # # print(path)
    # plt.plot([p[0] for p in path], [p[1] for p in path])

    # plt.show()
    
    
if __name__ == '__main__':
    main()
    