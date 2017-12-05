#include "circularscanner.h"
#include <cmath>
const double TWOPI = 2 * 3.14159265358979323846264338327950288;

CircularScanner::CircularScanner(double radius, int steps) :_radius(radius), _steps(steps) {
	// initialize list of scanning positions along the circle
	for(int i = 0; i < steps; i++) {
		double ratio = double(i) / double(_steps);
		double x = _radius * cos(ratio * TWOPI);
		double y = _radius * sin(ratio * TWOPI);
		Position p(x, y);
		scanningPositions.push_back(p);
	}
}

Position CircularScanner::nextPosition() {
	static std::vector<Position>::iterator iterator = scanningPositions.begin();
	if(iterator == scanningPositions.end()) {
		iterator = scanningPositions.begin();
	}
	return *iterator++;
}
