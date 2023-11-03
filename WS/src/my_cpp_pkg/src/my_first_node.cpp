#include <iostream>
#include "rclcpp/rclcpp.hpp"

using namespace std;

class Animal{
    public:
    Animal(int age){};
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = make_shared<rclcpp::Node>("cpp_test");

    rclcpp::Node node_2("cpp_test_2");

    rclcpp::Node  *node_3 = new rclcpp::Node("cpp_test_3");

    auto node_4 = make_shared<rclcpp::Node>("cpp_test_4");

    // auto sub_node = make_shared<rclcpp::Node> (node->create_sub_node("test"));
    // auto subnode = make_shared<rclcpp::Node> ((*node).create_sub_node("test_2"));


    Animal pig(100);

    RCLCPP_INFO(node->get_logger(), "hii from cpp node");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}