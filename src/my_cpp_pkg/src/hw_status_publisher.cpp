#include "rclcpp/rclcpp.hpp"
#include "my_robot_interfaces/msg/hardware_status.hpp"

class HardwareStatusPublisher : public rclcpp::Node
{
public:
    HardwareStatusPublisher() : Node("hardwaare_status_publisher")
    {
        publisher_ = this->create_publisher<my_robot_interfaces::msg::HardwareStatus>("hardware_status", 10);
        timer_ = this->create_wall_timer(std::chrono::seconds(1), 
                                        std::bind(&HardwareStatusPublisher::publishHardwareStatus, this));


    }

private:

void publishHardwareStatus()
{
    auto msg = my_robot_interfaces::msg::HardwareStatus();
    msg.are_motors_ready= true;
    msg.debug_msg = "conencted to HW";
    msg.temprature = 50;

    publisher_->publish(msg);
}
rclcpp::Publisher<my_robot_interfaces::msg::HardwareStatus>::SharedPtr publisher_;
rclcpp::TimerBase::SharedPtr timer_;

};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<HardwareStatusPublisher>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
