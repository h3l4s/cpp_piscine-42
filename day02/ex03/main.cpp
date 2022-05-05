#include "Point.hpp"

int main(void)
{
	Point a(0, 0);
	Point b(20, 0);
	Point c(10, 30);
	Point in(1, 1);
	Point out(30, 50);
	Point in2(2.4f, 3.5f);
	Point out2(25.3f, 53.3434f);

	std::cout << "0 = point out of the triangle | 1 = point inside the triangle" << std::endl << std::endl;
	std::cout << "a: " << "(" << a.getX() << "," << a.getY() << ")"<< std::endl;
	std::cout << "b: " << "(" << b.getX() << "," << b.getY() << ")"<< std::endl;
	std::cout << "c: " << "(" << c.getX() << "," << c.getY() << ")"<< std::endl << std::endl;
	std::cout << "POINT: " << "(" << in.getX() << "," << in.getY() << ")"<< std::endl;
	std::cout << "result: " << bsp(a, b, c, in) << std::endl << std::endl;
	std::cout << "POINT: " << "(" << out.getX() << "," << out.getY() << ")"<< std::endl;
	std::cout << "result: " << bsp(a, b, c, out) << std::endl << std::endl;
	std::cout << "POINT: " << "(" << in2.getX() << "," << in2.getY() << ")"<< std::endl;
	std::cout << "result: " << bsp(a, b, c, in2) << std::endl << std::endl;
	std::cout << "POINT: " << "(" << out2.getX() << "," << out2.getY() << ")"<< std::endl;
	std::cout << "result: " << bsp(a, b, c, out2) << std::endl << std::endl;

	return 0;
}
