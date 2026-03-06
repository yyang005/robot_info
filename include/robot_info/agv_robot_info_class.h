#pragma once
#include "robot_info/robot_info_class.h"
class AGVRobotInfo: public RobotInfo{
    public:
        AGVRobotInfo(ros::NodeHandle *nh, std::string robot_description,
                     std::string serial_number, std::string ip_address,
                     std::string firmware_version);
        void publish_data() override;

    private:
        int maximum_payload;
};