#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	Fixed bx = b.getX() - a.getX();
	Fixed by = b.getY() - a.getY();
	Fixed cx = c.getX() - a.getX();
	Fixed cy = c.getY() - a.getY();
	Fixed x = point.getX() - a.getX();
	Fixed y = point.getY() - a.getY();

	Fixed d = (Fixed)((bx * cy) - (cx * by));
	Fixed wa;
	wa = (Fixed)((x * (by - cy)) + (y * (cx - bx)) + (bx * cy) - (cx * by)) / d;
	Fixed wb;
	wb = (Fixed)((x * cy) - (y * cx)) / d;
	Fixed wc;
	wc = (Fixed)((y * bx) - (x * by)) /d ;
	
	return (wa > 0 && wa < 1) && (wb > 0 && wb < 1) && (wc > 0 && wc < 1) ;
}