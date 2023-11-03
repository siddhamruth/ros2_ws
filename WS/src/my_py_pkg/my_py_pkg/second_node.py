#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

class My_Node(Node):

    def __init__(self, name):
        super().__init__(name)
        self.counter = 0
        self.get_logger().info("log from a class")
        self.get_logger().log("this is from the log",rclpy.logging.LoggingSeverity.ERROR)
        self.create_timer(1.0,self.timer_callback)
    
    def timer_callback(self):
        self.counter+=1
        self.get_logger().info("hello " + str(self.counter))


def main(args = None):
    rclpy.init(args = args)
    
    node = My_Node("Raja")
    
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == ("__main__"):
    main()
