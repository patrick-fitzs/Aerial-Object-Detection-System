#include "radar_simulator.h"
#include <iostream>

int main() {
    RadarSimulator simulator;
    
    simulator.simulate();
    simulator.outputToJSON("../data/radar_output.json");
    
    return 0;
}
