#include "Point.hpp"

Point::Point() : x(0), y(0){

}

Point::Point(const float _x, const float _y) : x(_x), y(_y){

} 

Point::Point(const Point& p) : x(p.x), y(p.y){

}

Point& Point::operator=(const Point& p){
	(void)p;
	return *this;
}

Point::~Point(){

}

Fixed Point::getX() const{
	return this->x;
}

Fixed Point::getY() const{
	return this->y;
}