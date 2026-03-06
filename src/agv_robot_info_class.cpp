#include "robot_info/agv_robot_info_class.h"
#include <robotinfo_msgs/RobotInfo10Fields.h>
#include <string>

AGVRobotInfo::AGVRobotInfo(ros::NodeHandle *nh, std::string robot_description,
                     std::string serial_number, std::string ip_address,
                     std::string firmware_version) : RobotInfo(nh,robot_description,serial_number,ip_address,firmware_version),maximum_payload(100)
{
}

void AGVRobotInfo::publish_data(){
    robotinfo_msgs::RobotInfo10Fields msg;
    msg.data_field_01 = "robot_description: "+ robot_description_;
    msg.data_field_02 = "Serial_number: "+ serial_number_;
    msg.data_field_03 = "ip_address: "+ ip_address_;
    msg.data_field_04 = "firmware_version: "+ firmware_version_;
    msg.data_field_05 = "maximum_payload: "+std::to_string(maximum_payload)+" Kg";
    msg.data_field_06 = "hydraulic_oil_temperature: " + monitor.get_hydraulic_oil_temperature();
    msg.data_field_07 = "hydraulic_oil_tank_fill_level: " + monitor.get_hydraulic_oil_tank_fill_level();
    msg.data_field_08 = "hydraulic_oil_pressure: " + monitor.get_hydraulic_oil_pressure();

    robot_info_pub.publish(msg);
}