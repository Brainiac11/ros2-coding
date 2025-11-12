import math
import numpy as np
from numpy.typing import NDArray

class SquareInterpolationPath:
    interpolated_path: NDArray = np.zeros([3, 1000])
    def __init__(self, start_point: NDArray, end_point: NDArray, square_height: float):
        self._start_point:NDArray = start_point
        self._end_point:NDArray = end_point
        self._square_height:float = square_height
    
    def _interpolate(self):
        shape: NDArray = np.array([np.linalg.norm(self._end_point - self._start_point), self._square_height])
        perimeter: float = 2.0*shape[0] + 2.0*shape[1]
        self._step_size = perimeter/self.interpolated_path[1]
        
        