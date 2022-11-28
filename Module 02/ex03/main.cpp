#include "Point.hpp"

int main(void)
{
	int res1;
	int res2;
	int res3;
	Point a(0, 25);
	Point b(-30, 0);
	Point c(-5, 0);
	Point mPoint(-9.27, 10.7);
	Point mPoint2(-28.26, 25);
	Point mPoint3(1.13 , 25);
	res1 = bsp(a, b, c, mPoint);
	res2 = bsp(a, b, c, mPoint2);
	res3 = bsp(a, b, c, mPoint3);
	std::cout << "res " << res1 << std::endl;
	std::cout << "res " << res2 << std::endl;
	std::cout << "res " << res3 << std::endl;
	return 0;
}