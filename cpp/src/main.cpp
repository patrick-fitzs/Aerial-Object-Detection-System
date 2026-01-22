#include "radar_simulator.h"
#include <iostream>

int main() {
    RadarSimulator simulator;
    
    simulator.simulate();
    simulator.outputToJSON("../data/radar_output.json");
    
    return 0;
}
// create the flying objecs , can make it turn directions and stuff
// initiate the radar and world
// cout to console steps and export json data
// run sim loop
//can print plane or missile status at rendom intervals