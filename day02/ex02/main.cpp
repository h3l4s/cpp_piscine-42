#include "Fixed.hpp"

int main(void) {
	Fixed b(10);
	Fixed c(9);

	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "testing basic comparisons. 1 = true, 0 = false" << std::endl << std::endl;
	std::cout << "b < c: " << (b < c) << std::endl;
	std::cout << "b > c: " << (b > c) << std::endl;
	std::cout << "b <= c: " << (b <= c) << std::endl;
	std::cout << "b >= c: " << (b >= c) << std::endl;
	std::cout << "b == c: " << (b == c) << std::endl;
	std::cout << "b != c: " << (b != c) << std::endl << std::endl << std::endl;
	std::cout << "testing with basic operations, result should be printed" << std::endl << std::endl;
	std::cout << "b * c: " << (b * c) << std::endl;
	std::cout << "b + c: " << (b + c) << std::endl;
	std::cout << "b - c: " << (b - c) << std::endl;
	std::cout << "b / c: " << (b / c) << std::endl << std::endl << std::endl;
	std::cout << "testing incrementation/decrementaion over the class" << std::endl << std::endl;
	std::cout << "(before)b value: " << b << " ++b: " << ++b << " (after) b value: " << b << std::endl;
	std::cout << "(before)b value: " << b << " b++: " << b++ << " (after)b value: " << b << std::endl << std::endl << std::endl;
	std::cout << "testing min() and max(). should return the smaller/bigger one" << std::endl << std::endl;
	std::cout << "b value: " << b << " c value: " << c << " min(b, c): " << Fixed::min(b, c) << std::endl;
	std::cout << "b value: " << b << " c value: " << c << " max(b, c): " << Fixed::max(b, c) << std::endl << std::endl << std::endl << std::endl;
	std::cout << "testing with neg and big values" << std::endl << std::endl;
	Fixed x(-121.343f);
	Fixed y(-6666.3433f);
	std::cout << "x: " << x << std::endl;
	std::cout << "y: " << y << std::endl;
	std::cout << "testing basic comparisons. 1 = true, 0 = false" << std::endl << std::endl;
	std::cout << "x < y: " << (x < y) << std::endl;
	std::cout << "x > y: " << (x > y) << std::endl;
	std::cout << "x <= y: " << (x <= y) << std::endl;
	std::cout << "x >= y: " << (x >= y) << std::endl;
	std::cout << "x == y: " << (x == y) << std::endl;
	std::cout << "x != y: " << (x != y) << std::endl << std::endl << std::endl;
	std::cout << "testing with basic operations, result should be printed" << std::endl << std::endl;
	std::cout << "x * y: " << (x * y) << std::endl;
	std::cout << "x + y: " << (x + y) << std::endl;
	std::cout << "x - y: " << (x - y) << std::endl;
	std::cout << "x / y: " << (x / y) << std::endl << std::endl << std::endl;
	std::cout << "testing incrementation/decrementaion over the class" << std::endl << std::endl;
	std::cout << "(before)x value: " << x << " ++x: " << ++x << " (after) x value: " << x << std::endl;
	std::cout << "(before)x value: " << x << " x++: " << x++ << " (after)x value: " << x << std::endl << std::endl << std::endl;
	std::cout << "testing min() and max(). should return the smaller/bigger one" << std::endl << std::endl;
	std::cout << "x value: " << x << " y value: " << y << " min(x, y): " << Fixed::min(x, y) << std::endl;
	std::cout << "x value: " << x << " y value: " << y << " max(x, y): " << Fixed::max(x, y) << std::endl << std::endl << std::endl << std::endl;
	
return 0;
}
