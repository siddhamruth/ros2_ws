from setuptools import find_packages
from setuptools import setup

setup(
    name='tutorial_interfaces_cpp',
    version='0.0.0',
    packages=find_packages(
        include=('tutorial_interfaces_cpp', 'tutorial_interfaces_cpp.*')),
)
