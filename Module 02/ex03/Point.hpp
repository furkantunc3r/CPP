#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {

private:
	Fixed const x;
	Fixed const y;

public:
	Point();
	Point(const float _x, const float _y);
	Point(const Point& p);
	Point& operator=(const Point& p);
	~Point();
	Fixed getX() const;
	Fixed getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif