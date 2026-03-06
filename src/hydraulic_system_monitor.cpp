#include "robot_info/hydraulic_system_monitor.h"

HydraulicSystemMonitor::HydraulicSystemMonitor(){
    hydraulic_oil_temperature = "45C";
    hydraulic__oil_tank_fill_level = "100%";
    hydraulic_oil_pressure = "250 bar";
}

std::string HydraulicSystemMonitor::get_hydraulic_oil_temperature() const {return hydraulic_oil_temperature;} 

std::string HydraulicSystemMonitor::get_hydraulic_oil_tank_fill_level() const {return hydraulic__oil_tank_fill_level;} 

std::string HydraulicSystemMonitor::get_hydraulic_oil_pressure() const {return hydraulic_oil_pressure;} 