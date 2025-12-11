import math
import numpy as np
from numpy.typing import NDArray
import matplotlib.pyplot as plt

class SquareInterpolationPath:
    interpolated_path: list[NDArray]
    def __init__(self, start_point: NDArray, end_point: NDArray, interpolation_time_count:int = 1000, is_reversed:bool = False):
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
        self._square_height:np.float64 = np.linalg.norm(self._travel_vector)
        self._perimeter:np.float64 = self._square_height*3.0
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
    
    def interpolate_with_time(self) -> list[NDArray]:
        current_vector_step: NDArray =  4.0 * (self.find_positive_orthoganal_vector(self._travel_vector / self._interpolation_time_count) if not self._is_reversed else self.find_negative_orthoganal_vector(self._travel_vector / self._interpolation_time_count))
        self.interpolated_path[0] = self._start_point
        vertex_point: NDArray = self._start_point
        for i in range(1, self._interpolation_time_count+1):
            self.interpolated_path.append(self.interpolated_path[i-1] + current_vector_step)
            if np.allclose(self.interpolated_path[-1], self._end_point, rtol=1e-03, atol=1e-03):
                break
            if abs(np.linalg.norm(self.interpolated_path[-1] - vertex_point)) >= self._square_height:
                # print(current_vector_step)
                # current_vector_step[0], current_vector_step[1] = np.rot90(np.array([[current_vector_step[0]], [current_vector_step[1]]]), k=1, axes=(0, 1))[0][0],  np.rot90(np.array([[current_vector_step[0]], [current_vector_step[1]]]), k=1, axes=(0, 1))[0][1]
                current_vector_step = self.find_negative_orthoganal_vector(current_vector_step) if not self._is_reversed else self.find_positive_orthoganal_vector(current_vector_step)
                vertex_point = self.interpolated_path[-1]
                print(vertex_point)
        
        return self.interpolated_path
        
def main():
    inter: SquareInterpolationPath = SquareInterpolationPath(start_point=np.array([1,1]), end_point=np.array([2.82842712475, 2.82842712475]), interpolation_time_count=10000, is_reversed=False)
    path = inter.interpolate_with_time()
    print(path)
    plt.plot([p[0] for p in path], [p[1] for p in path])
    plt.show()
    
    
if __name__ == '__main__':
    main()
    