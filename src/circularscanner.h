#ifndef CIRCULARSCANNER_H
#define CIRCULARSCANNER_H

#include <vector>
#include "position.h"

class CircularScanner {
	double _radius;
	int _steps;
	std::vector<Position> _scanningPositions;
public:
	CircularScanner(double radius, int steps);
	Position nextPosition();
};

#endif // CIRCULARSCANNER_H
