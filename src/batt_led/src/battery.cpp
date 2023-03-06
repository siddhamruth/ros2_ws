#include "rclcpp/rclcpp.hpp"
#include "bat_led_interfaces/srv/set_led.hpp"

class Battery : public rclcpp::Node
{
    public:
    Battery(): Node("battery")
    {
        timer_ = this->create_wall_timer(std::chrono::seconds(1), 
                                        std::bind(&Battery::run_timer_thread, this));

    }

    void run_timer_thread()
    {
        RCLCPP_INFO(this->get_logger(), "thread is starting");
        led_number++;
        led_number = led_number % 3;
        led_state ^= 1;
        std::thread thread1;
        thread1 = std::thread(std::bind(&Battery::callSetLedService, this));
        thread1.detach();

    }

    void callSetLedService()
    {
        auto client = this->create_client<bat_led_interfaces::srv::SetLed>("set_led");
        while (!client->wait_for_service(std::chrono::seconds (1)))
        {
            RCLCPP_WARN(this->get_logger(), "waiting for server to be up");
        }
        auto request = std::make_shared<bat_led_interfaces::srv::SetLed::Request>();
        request->led_number = led_number;
        request->state = led_state;

        auto future = client->async_send_request(request);

        try{
            auto response = future.get();
            RCLCPP_INFO(this->get_logger(), "led number %d is set to a value %d and this is 0 or 1?  %d", request->led_number ,request->state, response->success);
        }
        catch(const std::exception &e)
        {
            RCLCPP_ERROR(this->get_logger(), "Service call failed %s", e);
        }
    }
    private:
    rclcpp::TimerBase::SharedPtr timer_;
    int led_number = 0;
    int led_state = 0;


};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<Battery>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;

}