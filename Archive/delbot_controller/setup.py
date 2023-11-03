from setuptools import setup

package_name = 'delbot_controller'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='root',
    maintainer_email='89376660+amruthks@users.noreply.github.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "test_node = delbot_controller.first_node:main",
            "draw_circle = delbot_controller.draw_circle:main",
            "pose_subscriber = delbot_controller.pose_subscriber:main",
            "turtle_controller = delbot_controller.turtle_controller:main",
            "joy_simulator = delbot_controller.joy_simulator:main",
            "joy_controller = delbot_controller.joy_control:main"

        ],
    },
)
