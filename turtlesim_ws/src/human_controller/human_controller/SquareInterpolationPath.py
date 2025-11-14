import math
import numpy as np
from numpy.typing import NDArray

class SquareInterpolationPath:
    interpolated_path: list[NDArray]
    def __init__(self, start_point: NDArray, end_point: NDArray, interpolation_time_count:int = 9991, is_reversed:bool = False):
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
        self._perimeter:np.float64 = self._square_height*4.0
        self._interpolation_time_count = interpolation_time_count
        self._step_distance = self._perimeter / self._interpolation_time_count
        self._is_reversed = is_reversed
        self._negative_orthoganal_vector = self.find_negative_orthoganal_vector(self._travel_vector)
        self.interpolated_path = [self._start_point]
        
    def find_negative_orthoganal_vector(self, vector: NDArray)->NDArray:
        return np.array([vector[1], -vector[0] ])
    def find_positive_orthoganal_vector(self, vector: NDArray)->NDArray:
        return np.array([-vector[1], vector[0] ])
    
    def find_unit_vector(self, vector: NDArray) -> NDArray:
        return vector / np.linalg.norm(vector)
    
    def interpolate_with_time(self) -> list[NDArray]:
        current_vector_step: NDArray = self.find_unit_vector(self.find_negative_orthoganal_vector(self._travel_vector)) 
        self.interpolated_path[0] = self._start_point
        vertex_point: NDArray = self._start_point
        for i in range(1, self._interpolation_time_count+1):
            self.interpolated_path.append(self.interpolated_path[i-1] + current_vector_step)
            if np.linalg.norm(self.interpolated_path[-1] - vertex_point) >= self._square_height:
                # print(current_vector_step)
                # current_vector_step[0], current_vector_step[1] = np.rot90(np.array([[current_vector_step[0]], [current_vector_step[1]]]), k=1, axes=(0, 1))[0][0],  np.rot90(np.array([[current_vector_step[0]], [current_vector_step[1]]]), k=1, axes=(0, 1))[0][1]
                current_vector_step = self.find_positive_orthoganal_vector(current_vector_step)
                vertex_point = self.interpolated_path[-1]
        
        return self.interpolated_path
        
def main():
    inter: SquareInterpolationPath = SquareInterpolationPath(start_point=np.array([0,0]), end_point=np.array([100, 0]), interpolation_time_count=10, is_reversed=False)
    print(inter.interpolate_with_time())
    
if __name__ == '__main__':
    main()
    