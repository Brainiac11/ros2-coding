from setuptools import find_packages
from setuptools import setup

setup(
    name='human_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('human_interfaces', 'human_interfaces.*')),
)
