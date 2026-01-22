/* 3d vectors*/
// for positions and velocities, use add sub dot product and normalisation with magnitude
//shows where things are and how fast they ar moving

#pragma once

#include <cmath>

namespace radar_sim {
    // The 3d vector structure
    struct vectors3D {
        // the vectors in 3d space
        double x, y, z;
        // create a vector at the origin
        vectors3D(): x(0), y(0), z(0) {}

        // double vector
        vectors3D(double x, double y, double z): x(x), y(y), z(z) {}

        // ########## Vector Maths ##########
        //vector add
        // usings the second const so it we dont change these vectors
        vectors3D operator+(const vectors3D & otherVec) const {
            return vectors3D(x + otherVec.x, y + otherVec.y, z + otherVec.z);
        }

        //vector sub
        vectors3D operator-(const vectors3D & otherVec) const {
        return vectors3D(x - otherVec.x, y-otherVec.y, z-otherVec.z);
        }

        //vector multip
        vectors3D operator*(const vectors3D & otherVec)const {
            return vectors3D(x*otherVec.x, y*otherVec.y, z*otherVec.z);
        }

        //vector div
        vectors3D operator/(const vectors3D & otherVec)const {
            return vectors3D(x/otherVec.x, y/otherVec.y, z/otherVec.z);
        }

        //properties for vectors, using pythagorean but 3d
        double magnitude() const {
            return std::sqrt(x*x + y*y + z*z);
        }

        //normalise
        vectors3D normalise() {
            double mag = magnitude();
            if (mag > 0) {
                return *this / mag;
            }
            // if below 0, return 0,0,0
            return vectors3D();
        }

        // dot product for vectors
        double dot(const vectors3D & otherVec) const {
            return x*otherVec.x + y*otherVec.y + z*otherVec.z;
        }

    };

}