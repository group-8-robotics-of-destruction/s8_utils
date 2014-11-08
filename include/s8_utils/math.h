#ifndef __MATH_H
#define __MATH_H

#include <cmath>

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
		}
	}
}

#endif
