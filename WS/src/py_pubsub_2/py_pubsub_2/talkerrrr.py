import rclpy
from rclpy.node import Node

from std_msgs.msg import String

class talker_node(Node):

    def __init__(self):
        super().__init__("Talker")
        self.pub_ = self.create_publisher(String, "ros", 10)
        self.timer_period = 0.5
        self.create_timer(self.timer_period, self.pub_callback)
        self.number=0
    
    def pub_callback(self):
        msg=String()
        msg.data = 'the number is %d' %self.number
        self.pub_.publish(msg)
        self.get_logger().info("published %s" %msg.data )
        self.number += 1

    
def main(args = None):
    print('Hi from py_pubsub_2.')
    rclpy.init(args=args)
    talker = talker_node()
    
    rclpy.spin(talker)
    talker.destroy_node()
    rclpy.shutdown()



if __name__ == '__main__':
    main()
