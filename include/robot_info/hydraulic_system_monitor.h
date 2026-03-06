#pragma once
#include "ros/publisher.h"
#include <ros/ros.h>
#include <std_msgs/String.h>
#include <robotinfo_msgs/RobotInfo10Fields.h>

class HydraulicSystemMonitor {

public:
  HydraulicSystemMonitor();

  std::string get_hydraulic_oil_temperature() const;
  std::string get_hydraulic_oil_tank_fill_level() const;
  std::string get_hydraulic_oil_pressure() const;

private:
  std::string hydraulic_oil_temperature, hydraulic__oil_tank_fill_level, hydraulic_oil_pressure;
};