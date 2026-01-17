#pragma once

#include <string>
#include <vector>

struct RadarDetection {
    double range;
    double velocity;
    double signal_strength;
};

class RadarSimulator {
public:
    RadarSimulator();
    ~RadarSimulator();
    
    void simulate();
    std::vector<RadarDetection> getDetections() const;
    void outputToJSON(const std::string& filename) const;

private:
    std::vector<RadarDetection> detections_;
};
