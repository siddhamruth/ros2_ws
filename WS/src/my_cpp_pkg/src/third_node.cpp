#include <iostream>
#include "rclcpp/rclcpp.hpp"


class MyNode: public rclcpp::Node
{
    public:
        MyNode(): Node("node_1")
        {
            RCLCPP_INFO(this->get_logger(), "Hii");
            timer_ = this->create_wall_timer(std::chrono::milliseconds(1000),
            std::bind(&MyNode::timer_callback, this));
        }

    private:

    void timer_callback()
    {
        RCLCPP_INFO(this->get_logger(), "this is from timer");
    }
    rclcpp::TimerBase::SharedPtr timer_;

};

int main(int argc, char **argv)
{
    rclcpp::init(argc,argv);
    auto node =  std::make_shared<MyNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}