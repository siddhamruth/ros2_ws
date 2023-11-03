#!/us

import rclpy
from rclpy.node import Node

from turtlesim.msg import Pose
from geometry_msgs.msg import Twist


class Turtle_Controller(Node):
    def __init__(self):
        super().__init__("turtle_controller")
        self.get_logger().info("turtle controller is started")
        self.pose_subscriber_ = self.create_subscription(Pose,"/turtle1/pose" , self.pose_callback, 10)
        self.cmd_publisher_ = self.create_publisher(Twist , "/turtle1/cmd_vel",10)
        self.cmd = Twist()
        self.cmd.linear.x = 5.0


    def pose_callback(self, pose:Pose):
        self.get_logger().info("received: " + str(pose))
        self.turtle_command(pose)
    
    def turtle_command(self, pose):
        if pose.x < 1:
            self.cmd.linear.x = 5.0
            self.cmd.angular.z = 5.0
        else:
            if pose.x > 9:
                self.cmd.linear.x = -5.0
                self.cmd.angular.z = 5.0
            else:
                self.cmd.linear.x = -5.0
                self.cmd.angular.z = 0.0



        self.cmd_publisher_.publish(self.cmd)


def main(args = None):
    rclpy.init(args = args)
    node = Turtle_Controller()
    rclpy.spin(node)
    rclpy.shutdown()