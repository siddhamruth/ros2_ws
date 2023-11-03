#include <iostream>
#include "rclcpp/rclcpp.hpp"

using namespace std;

class MyNode: public rclcpp::Node
{
    public:
        MyNode(std::string name): Node(name)
        {
            RCLCPP_INFO(this->get_logger(), "Hii there from class node");
        }
    private:
    // auto timer_call = this->create_wall_timer(std::chrono::milliseconds(1000), this->publish_data())
    // void publish_data(){std::cout <<"timer is called"<<endl;};

};


int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<MyNode>("node_1");
    rclcpp::spin(node);
    rclcpp::shutdown();

    return 0;
}