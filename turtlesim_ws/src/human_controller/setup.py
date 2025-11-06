from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'human_controller'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.launch.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='root',
    maintainer_email='saathvikkamma@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    
    entry_points={
        'console_scripts': [
            "hip_control = human_controller.hip_controller:main",
            "left_kick_control = human_controller.left_kick_controller:main",
            "key_input = human_controller.key_input:main",
            "ik_solver = human_controller.InverseKinematicSolver:main",
            "ik_tester = human_controller.ik_tester:main"
        ],
    },
)
