#include "robot_info/robot_info_class.h"

RobotInfo::RobotInfo(ros::NodeHandle *nh, std::string robot_description,
                     std::string serial_number, std::string ip_address,
                     std::string firmware_version) {

  robot_description_ = robot_description;
  serial_number_ = serial_number;
  ip_address_ = ip_address;
  firmware_version_ = firmware_version;

  robot_info_pub = nh->advertise< robotinfo_msgs::RobotInfo10Fields>("robot_info", 10);
}

void RobotInfo::publish_data() {

    robotinfo_msgs::RobotInfo10Fields msg;
    msg.data_field_01 = "robot_description: "+ robot_description_;
    msg.data_field_02 = "Serial_number: "+ serial_number_;
    msg.data_field_03 = "ip_address: "+ ip_address_;
    msg.data_field_04 = "firmware_version: "+ firmware_version_;

    // Publish message
    robot_info_pub.publish(msg);
}