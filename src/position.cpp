#include "position.h"
#include <cmath>

Position::Position(double x, double y) : _x(x), _y(y) {};

double Position::distanceTo(const Position& other) {
	double dx = (_x - other.getX());
	double dy = (_y - other.getY());
	return sqrt(dx * dx + dy * dy);
}

bool operator==(const Position& pos1, const Position& pos2) {
	return (pos1._x == pos2._x) && (pos1._y == pos2._y);
}
