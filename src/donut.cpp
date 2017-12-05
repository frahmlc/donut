#include "donut.h"
#include <cmath>

Donut::Donut(double radius, Position center) : _radius(radius), _center(center) {};

double Donut::valueAt(Position x) {
	double r = _center.distanceTo(x) / _radius;
	double rsq = r * r;
	return rsq * exp( 1.0 - rsq ); // approximation for 2D donut PSF
}
