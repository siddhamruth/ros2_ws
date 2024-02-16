import sys
from example_interfaces.srv import AddTwoInts

import rclpy
from rclpy.node import Node

class MinClient(Node):
    def __init__ (self):
        super().__init__("add_two_num_client")
        self.client_add_ = self.create_client(AddTwoInts, "addd")
        while not self.client_add_.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("server is unavailable")
        self.req_ = AddTwoInts.Request()

    def send_req(self, a, b):
        self.req_.a = a
        self.req_.b = b
        self.future = self.client_add_.call_async(self.req_)
        rclpy.spin_until_future_complete(self,self.future)
        return self.future.result()



def main():
    rclpy.init()
    min_client = MinClient()
    response = min_client.send_req(int(sys.argv[1]), int(sys.argv[2]))
    min_client.get_logger().info("%d" %(response.sum))
    min_client.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()