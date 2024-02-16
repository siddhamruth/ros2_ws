import rclpy
from rclpy.node import Node

from std_msgs.msg import String

class listener_node(Node):

    def __init__(self):
        super().__init__("listener_node")
        min_sub_listener = self.create_subscription(String, "ros",self.sub_callback,10)

    def sub_callback(self, msg):
        self.get_logger().info(msg.data)


def main(args = None):
    print("node started")
    rclpy.init(args=args)
    min_listener =listener_node()
    rclpy.spin(min_listener)
    min_listener.destroy_node()



if __name__ == "__main__":
    main()