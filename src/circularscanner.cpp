#include "circularscanner.h"

CircularScanner::CircularScanner(double radius, int steps) : _radius(radius), _steps(steps) { }

Position CircularScanner::nextPosition() {
	Position p(0.0, 0.0);
	return p;
}
