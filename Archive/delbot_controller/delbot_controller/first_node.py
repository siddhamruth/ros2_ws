#!/usr/bin/env python3

import rclpy
from rclpy.node import Node



class MyNode(Node):
    def __init__(self):  #constructor
        super().__init__("this_is_node_name_first_node")
        self.counter_ = 0
        # self.get_logger().info("Hello from ros2")
        self.create_timer(1.0, self.timer_callback)
    def timer_callback(self):
        self.get_logger().info("hello  " + str( self.counter_))
        self.counter_ += 1


def main(args=None):
    rclpy.init(args=args)

    node = MyNode() # this is the created node 
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()

