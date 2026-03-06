#pragma once
#include "ros/publisher.h"
#include <ros/ros.h>
#include <std_msgs/String.h>
#include <robotinfo_msgs/RobotInfo10Fields.h>

class RobotInfo {

public:
  RobotInfo(ros::NodeHandle *nh, std::string robot_description,
            std::string serial_number, std::string ip_address,
            std::string firmware_version);

  virtual void publish_data(); // topic robot_info

protected:
  std::string robot_description_, serial_number_, ip_address_, firmware_version_;

  ros::Publisher robot_info_pub;
};