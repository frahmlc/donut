#include "donut.h"
#include <cmath>

Donut::Donut(double r, Position p) : radius(r), center(p) {};

double Donut::getRadius() {
	return radius;
}

double Donut::valueAt(Position x) {
	double r = center.distanceTo(x) / radius;
	double rsq = r * r;
	return rsq * exp( 1.0 - rsq ); // approximation for 2D donut PSF
}
