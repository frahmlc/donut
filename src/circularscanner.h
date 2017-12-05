#ifndef CIRCULARSCANNER_H
#define CIRCULARSCANNER_H

#include "position.h"

class CircularScanner {
	double _radius;
	int _steps;
public:
	CircularScanner(double radius, int steps);
	Position nextPosition();
};

#endif // CIRCULARSCANNER_H
