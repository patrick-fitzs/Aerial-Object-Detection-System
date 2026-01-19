#include "radar_simulator.h"
#include <fstream>
#include <iostream>

RadarSimulator::RadarSimulator() {
}

RadarSimulator::~RadarSimulator() {
}

void RadarSimulator::simulate() {
    // Boilerplate: Add simulation logic here
}

std::vector<RadarDetection> RadarSimulator::getDetections() const {
    return detections_;
}

void RadarSimulator::outputToJSON(const std::string& filename) const {
    // Boilerplate: Add JSON output logic here
    std::cout << "test" << std::endl;
}
