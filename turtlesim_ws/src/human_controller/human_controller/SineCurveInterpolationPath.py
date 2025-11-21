import math
import numpy as np
from numpy.typing import NDArray
import matplotlib.pyplot as plt
import time
from scipy.integrate import quad
from numpy import float64

class SineInterpolationPath:
    interpolated_path: list[NDArray]
    def __init__(self, start_point: NDArray, end_point: NDArray, height:float, interpolation_time_count:int = 1000, is_reversed:bool = False):
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
        self._sin_height:np.float64 = np.float64(height)
        self._sin_width:float64 = float64( np.linalg.norm(self._travel_vector))
        self._perimeter:np.float64 = float64(self.arc_length_sine(a=0, b=self._sin_width))
        self._interpolation_time_count = interpolation_time_count
        self._step_distance = self._perimeter / self._interpolation_time_count
        self._is_reversed = is_reversed
        self.interpolated_path = [self._start_point]
        
    def f(self,x):        
        return self._sin_height * np.sin(x * (np.pi / self._sin_width))    
    def f_prime(self,x):        
        return  self._sin_height * (np.pi / self._sin_width) * np.cos(x * (math.pi / self._sin_width))
    def arc_length_integrand(self,x): 
        return np.sqrt(1 + (self.f_prime(x))**2)    
    
    def arc_length_sine(self, a:float, b:float) -> float:
        arc_length = quad(self.arc_length_integrand, a, b)
        return arc_length[0]
        
    def rotate_point_by_theta_around_origin(self, point: NDArray, theta: float) -> NDArray:
        rotation_matrix: NDArray = np.array([[np.cos(theta), -np.sin(theta)] , [np.sin(theta), np.cos(theta)]])
        transformed_point: NDArray = np.array([[point[1], point[0]], [point[0], point[1]]])
        final_matrix: NDArray = transformed_point * rotation_matrix
        return np.array([final_matrix[1][0], final_matrix[1][1] ])

    
    def find_unit_vector(self, vector: NDArray) -> NDArray:
        return vector / np.linalg.norm(vector)
    
    
    def interpolate_with_time(self) -> list[NDArray]:
        print(self.rotate_point_by_theta_around_origin(point=self._end_point, theta = np.pi/3.0))
        
        return self.interpolated_path
        
def main():
    inter: SineInterpolationPath = SineInterpolationPath(start_point=np.array([0,0]), end_point=np.array([10, 0]), interpolation_time_count=5000, is_reversed=False, height=2   )
    timer = time.time()
    path = inter.interpolate_with_time()
    print(f"Interpolation took {time.time() - timer} seconds")
    # print(path)
    plt.plot([p[0] for p in path], [p[1] for p in path])

    plt.show()
    
    
if __name__ == '__main__':
    main()
    