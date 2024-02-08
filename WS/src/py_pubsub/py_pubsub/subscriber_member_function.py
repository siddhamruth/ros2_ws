import rclpy
from rclpy.node import Node

from std_msgs.msg import String

class MinSubscriber(Node):
    
    def __init__(self):
        super().__init__("minimal_subscriber")
        self.subscriber_ = self.create_subscription(String, "topic", self.callback, 10)
        self.subscriber_ #prevent the warning
    
    def callback(self, msg):
        self.get_logger().info('listened to "%s"' %msg.data)



def main(args = None):
    rclpy.init(args=args)
    minimal_subscriber = MinSubscriber()
    rclpy.spin(minimal_subscriber)

    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()