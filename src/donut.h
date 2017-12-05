#ifndef DONUT_H
#define DONUT_H

#include "position.h"

class Donut {
	double _radius; // in um
	Position _center;
public:
	Donut(double radius, Position center); // Constructor ;-)
	double getRadius() { return _radius; };
	void setCenter(Position x) { _center = x; };
	Position getCenter() { return _center; };
	double valueAt(Position x);
};

#endif // DONUT_H
