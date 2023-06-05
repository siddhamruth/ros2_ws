#!/us

import rclpy
from rclpy.node import Node

from sensor_msgs.msg import Joy
import json
import serial



serial_port = serial.Serial(
    port="/dev/tty",
    baudrate=9600,
    bytesize=serial.EIGHTBITS,
    parity=serial.PARITY_NONE,
    stopbits=serial.STOPBITS_ONE,
)

# x:input value; 
# a,b:input range
# c,d:output range
# y:return value
def mapFromTo(x,a,b,c,d):
   y=(x-a)/(b-a)*(d-c)+c
   return y


class JoyController(Node):
    def __init__(self):
        super().__init__("joy_controller")
        self.get_logger().info("joy controller is started")
        self.pose_subscriber_ = self.create_subscription(Joy,"/joy" , self.send_serial_data, 10)
        self.l_motor_rpm = 0
        self.r_motor_rpm = 0


    def send_serial_data(self, joy:Joy):
        # map the values from +255 to -255
        self.fr_control = mapFromTo( int(joy.axes[0]) , -9000, +9000, -255, +255)
        self.lr_control = mapFromTo( int(joy.axes[1]) , -9000, +9000, -255, +255)

        self.l_motor_rpm = self.fr_control - self.lr_control
        self.r_motor_rpm = self.fr_control + self.lr_control
        
        serial_string = str(self.l_motor_rpm) + " "+str(self.r_motor_rpm) + " "
        try:
             serial_port.write(serial_string.encode())
             
        
        except KeyboardInterrupt:
            self.get_logger().info("joy controlleris terminated due to keyboard interrupt")
        except Exception as exception_error:
            print("Error occurred. Exiting Program")
            print("Error: " + str(exception_error))
    
    

def main(args = None):
    rclpy.init(args = args)
    node = JoyController()
    rclpy.spin(node)
    rclpy.shutdown()