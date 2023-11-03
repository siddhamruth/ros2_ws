#include "rclcpp/rclcpp.hpp"
#include "bat_led_interfaces/srv/set_led.hpp"
#include "bat_led_interfaces/msg/led_state_array.hpp"


using std::placeholders::_1;
using std::placeholders::_2;

class LedPannelServerNode: public rclcpp::Node
{
public:
    LedPannelServerNode() : Node("led_pannel")
    {
        server_ = this->create_service<bat_led_interfaces::srv::SetLed>(
            "set_led",
            std::bind(&LedPannelServerNode::callbackSetLed, this, _1,_2)
            );
        publisher_ = this->create_publisher<bat_led_interfaces::msg::LedStateArray>("led_states", 10);
        RCLCPP_INFO(this->get_logger(), "set_led service has been started");
        
        timer_ = this->create_wall_timer(std::chrono::seconds(), 
                                        std::bind(&LedPannelServerNode::publishLedStates, this));
    }
private:

    void callbackSetLed(const bat_led_interfaces::srv::SetLed::Request::SharedPtr request,
                            const bat_led_interfaces::srv::SetLed::Response::SharedPtr response)
    {
        // response->sum = request->a + request->b;
        leds[request->led_number ] = request->state;
        response->success = true;
        RCLCPP_INFO(this->get_logger(), "the led number is %d and the led status %d and the op giving is %d", request->led_number, request->state, response->success);

    }

    void publishLedStates()
    {
        auto msg = bat_led_interfaces::msg::LedStateArray();
        msg.led_states[0] = leds[0];
        msg.led_states[1] = leds[1];
        msg.led_states[2] = leds[2];

        publisher_->publish(msg);
    }
    rclcpp::Service<bat_led_interfaces::srv::SetLed>::SharedPtr server_;
    rclcpp::Publisher<bat_led_interfaces::msg::LedStateArray>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    int64_t leds[3] = {20,20,20};

};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<LedPannelServerNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}