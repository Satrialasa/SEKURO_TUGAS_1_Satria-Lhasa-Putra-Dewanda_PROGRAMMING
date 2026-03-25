#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

class AutoPublisher : public rclcpp::Node
{
public:
    // daftarkan node "auro_publisher"
    AutoPublisher() : Node("auto_publisher"), count(0)
    { 
        //membuat publisher
        publisher_ = this->create_publisher<std_msgs::msg::String>("/chat", 10);

        timer_ = this->create_wall_timer(
            std::chrono::seconds(1), std::bind(&AutoPublisher::publish_message, this)
        );
    }

private:
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    int count;

    void publish_message()
    {
    auto msg = std_msgs::msg::String();
    
    //logika 
    if (count % 2 == 0) {
        msg.data = "(genap)" + std::to_string(count);
    } else {
        msg.data = "(ganjil)" + std::to_string(count);
    }

    publisher_->publish(msg);

    RCLCPP_INFO(this->get_logger(), "kirim: %s", msg.data.c_str());

    count++;
    }
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<AutoPublisher>());
    rclcpp::shutdown();
    return 0;
}