from example_interfaces.srv import AddTwoInts

import rclpy
from rclpy.node import Node

class MinimalService(Node):
    def __init__(self):
        super().__init__("minimal_node")
        self.serv_ = self.create_service(AddTwoInts, "addd", self.addition_callback)
    def addition_callback(self, request, response):
        response.sum = request.a + request.b
        return response



def main(Args = None):
    rclpy.init()
    minimal_Service = MinimalService()
    rclpy.spin(minimal_Service)
    rclpy.shutdown()



if __name__ == "__main__":
    main()