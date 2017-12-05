#include "donut.h"
#include <cmath>

Donut::Donut(double r, Position p) : radius(r), center(p) {};

double Donut::getRadius() {
	return radius;
}

double Donut::valueAt(Position x) {
	double r = center.distanceTo(x) / radius;
	return r * r * exp( 1.0 - r * r );
}
