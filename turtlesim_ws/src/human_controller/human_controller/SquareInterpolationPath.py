import math
import numpy as np
from numpy.typing import NDArray

class SquareInterpolationPath:
    interpolated_path: list[NDArray]
    def __init__(self, start_point: NDArray, end_point: NDArray, interpolation_time_count:float = 9991, is_reversed:bool = False):
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
        self._negative_orthoganal_vector = self.find_negative_orthoganal_vector()
        self.interpolated_path = []
        
    def find_negative_orthoganal_vector(self)->NDArray:
        return np.array([self._travel_vector[1], -self._travel_vector[0] ])
    
    def find_unit_vector(self, vector: NDArray) -> NDArray:
        return vector / np.linalg.norm(vector)
    
    def interpolate_with_time(self, time_stamp: float, current_position: NDArray, current_vector_step: NDArray) -> NDArray:
        if()
        
        