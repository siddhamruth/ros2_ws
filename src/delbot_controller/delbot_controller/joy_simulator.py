import rclpy
from rclpy.node import Node
import array

from sensor_msgs.msg import Joy

class joy_sim_node(Node) :

    def __init__ (self):
        super().__init__("joy_simulator")
        self.get_logger().info("joy simulator is started")
        self.publish_joy_ = self.create_publisher(Joy, "/joy", 10)
        self.timer_ = self.create_timer(1.0, self.joy_publish)

    def joy_publish(self):
        joy_data = Joy()
        joy_data.axes = [9000.0, 0.0, 30.0, 40.0]
        joy_data.buttons = [1, 1, 2, 3 ,4]

        self.publish_joy_.publish(joy_data)

    
def main(args = None):
    rclpy.init(args = args)
    node = joy_sim_node()
    rclpy.spin(node)
    rclpy.shutdown()