#ifndef DONUT_H
#define DONUT_H

#include "position.h"

class Donut {
	double radius; // in um
	Position center;
public:
	Donut(double r = 0.0, Position p = Position(0.0, 0.0));
	double getRadius();
	void setCenter(Position x) { center = x; };
	Position getCenter() { return center; };
	double valueAt(Position x);
};

#endif // DONUT_H
