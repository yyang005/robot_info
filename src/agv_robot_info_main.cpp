#include "robot_info/agv_robot_info_class.h"
#include "ros/init.h"

int main(int argc, char** argv) {
    ros::init(argc, argv, "agv_robot_info_node");
    ros::NodeHandle nh;
    
    AGVRobotInfo agv_robot_info(&nh, "Cooper100", "567A359", "169.254.5.180", "3.5.8");

    // publish data every second
    ros::Rate rate(1); // 1 Hz
    while (ros::ok()) {
        agv_robot_info.publish_data();
        rate.sleep();
    }
}