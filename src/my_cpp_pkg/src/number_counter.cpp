#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/int64.hpp"
#include "example_interfaces/srv/set_bool.hpp"


class NumberCounter : public rclcpp::Node
{
public:
    NumberCounter() : Node("number_counter"), number_count_(0)
    {
        publisher_ = this->create_publisher<std_msgs::msg::Int64>("number_count", 10);

        subscriber_ = this->create_subscription<std_msgs::msg::Int64>(
                            "number", 10, 
                            std::bind(&NumberCounter::count_number_publisher, this, std::placeholders::_1));
        service_ = this->create_service<example_interfaces::srv::SetBool>("reset_number_count",
                            std::bind(&NumberCounter::call_reset_service, this, 
                                        std::placeholders::_1, std::placeholders::_2));
    }

private:

void call_reset_service(const example_interfaces::srv::SetBool_Request::SharedPtr request ,const example_interfaces::srv::SetBool_Response::SharedPtr response )
{
    if (true == request->data)
    {
        number_count_ = 0;
        response->success = 1;
        response->set__message("data is received");
    }

}

void count_number_publisher(const std_msgs::msg::Int64::SharedPtr value)
{
    RCLCPP_INFO(this->get_logger(), "%d is the data received from number publisher", value->data);
    number_count_+=2;
    publish_number_count();
}
void publish_number_count()
{
    auto msg = std_msgs::msg::Int64();
    msg.data = number_count_;
    publisher_->publish(msg);
}
rclcpp::Publisher<std_msgs::msg::Int64>::SharedPtr publisher_;
rclcpp::Subscription<std_msgs::msg::Int64>::SharedPtr subscriber_;
rclcpp::Service<example_interfaces::srv::SetBool>::SharedPtr service_;
int number_count_;

};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<NumberCounter>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
