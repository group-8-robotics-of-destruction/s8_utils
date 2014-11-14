#ifndef __MATH_H
#define __MATH_H

#include <cmath>
#include <geometry_msgs/Quaternion.h>

namespace s8 {
    namespace utils {
        namespace math {
            /**
             * Returns true if the given value is relatively close to zero. Otherwise false.
             * The relative treshold can be set as second parameter.
             */
            bool is_zero(double value, double treshold = 0.000001) {
                return std::abs(value) < 0.000001;
            }

            /**
             * Returns the sign of the given value. Will return -1 for negative values. Will return 1 for positive values. Will return 0 for 0.
             */
            template <typename T>
            int sign(T val) {
                return (T(0) < val) - (val < T(0));
            }

            /**
             * Converts degrees from radians.
             */
            double degrees_to_radians(double degrees) {
                return degrees * (2 * M_PI / 360);
            }

            /**
             * Converts radians to degrees.
             */
            double radians_to_degrees(double radians) {
                return radians * (360 / (2 * M_PI));
            }

            /**
             * Returns a geometry_msgs::Quaternion rotation around the z-axis (the one pointing up) by the radians given.
             */
            geometry_msgs::Quaternion radians_to_quaternion(double radians) {
                geometry_msgs::Quaternion q;
                q.x = 0;
                q.y = 0;
                q.z = sin(radians / 2);
                q.w = cos(radians / 2);
                return q;
            }

            /**
             * Returns a geometry_msgs::Quaternion rotation around the z-axis (the one pointing up) by the degrees given.
             */
            geometry_msgs::Quaternion degrees_to_quaternion(double degrees) {
                return radians_to_quaternion(degrees_to_radians(degrees));
            }
        }
    }
}

#endif
