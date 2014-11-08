#ifndef __MATH_H
#define __MATH_H

#include <cmath>

namespace s8 {
	namespace utils {

		/**
		 * Returns true if the given value is relatively close to zero. Otherwise false.
		 * The relative treshold can be set as second parameter.
		 */
		bool is_zero(double value, double treshold = 0.000001) {
			return std::abs(value) < 0.000001;
		}
	}
}

#endif
