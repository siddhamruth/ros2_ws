#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

class RobotNewsStation(Node):
    def __init__(self):
        super().__init__("robot_news_station")
        self.publisher_ = self.create_publisher()

def main(args = None):
    rclpy.init(args=args)
    node = RobotNewsStation()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "main":
    main()