#include "Fixed.hpp"

Fixed::Fixed(void): _a(0){
	std::cout << "default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const & src): _a(src._a){
	std::cout << "copy constructor called" << std::endl;
	return;
}

Fixed::~Fixed(void){
	std::cout << "destructor called" << std::endl;
	return;
}

Fixed & Fixed::operator=(Fixed const & src){
	std::cout << "assignation operator called" << std::endl;
	this->_a = src.getRawBits();
	return *this;
}

std::ostream & operator<<(std::ostream &o, Fixed const & src){
	o << src.getRawBits();
	return o;
}

int Fixed::getRawBits(void)const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_a);
}

void Fixed::setRawBits(const int raw){
	std::cout << "setRawBits member function called" << std::endl;
	this->_a = raw;
	return;
}