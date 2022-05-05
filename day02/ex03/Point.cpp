#include "Point.hpp"

Point::Point(void): _x(0), _y(0){
	std::cout << "test" << std::endl;
	return;
}

Point::Point(Fixed const w, Fixed const z): _x(w), _y(z){
	return;
}

Point::Point( Point const & src ) : _x(src._x), _y(src._y)
{
        return ;
}

Point::~Point(void){
	return;
}

Point & Point::operator=(Point const & src){
	(void)src;
	return *this;
}

Fixed Point::getX(void)const{
	return this->_x;
}

Fixed Point::getY(void)const{
	return this->_y;
}