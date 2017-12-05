#ifndef POSITION_H
#define POSITION_H

class Position {
private:
	double _x, _y;
public:
	Position(double x, double y);
	double distanceTo(const Position& other);
	double getX() const { return _x; }
	double getY() const { return _y; }
	friend bool operator==(const Position& pos1, const Position& pos2);
};

#endif // POSITION_H
