#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/int64.hpp"

class NumberPublisher : public rclcpp::Node
{
public:
    NumberPublisher() : Node("number_publisher"), number_(0)
    {
        publisher_ = this->create_publisher<std_msgs::msg::Int64>("number", 10);
        timer_ = this->create_wall_timer(std::chrono::seconds(1), 
                                        std::bind(&NumberPublisher::publish_number, this));
        this->declare_parameter("test_parameter");
        std::string name = "amruth";

    }

private:

void publish_number()
{
    auto msg = std_msgs::msg::Int64();
    msg.data = number_;
    publisher_->publish(msg);
    number_++;
}
rclcpp::Publisher<std_msgs::msg::Int64>::SharedPtr publisher_;
rclcpp::TimerBase::SharedPtr timer_;
int number_;
int test_parameter;

};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<NumberPublisher>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
