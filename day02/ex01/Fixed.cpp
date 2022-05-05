#include "Fixed.hpp"

int power_ten(int value, int power)
{
	int i = 0;
	int ret = 1;
	while(i < power)
	{
		ret *= value;
		i++;
	}
	return (ret);
}

Fixed::Fixed(void): _a(0){
	std::cout << "default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const & src): _a(src._a){
	std::cout << "copy constructor called" << std::endl;
	return;
}

Fixed::Fixed(const int val){
	std::cout << "const int val constructor called" << std::endl;
	this->_a = val << this->_fract;
	return;
}

Fixed::Fixed(const float fVal){
	std::cout << "const float val constructor called" << std::endl;
	int temp = power_ten(2, this->_fract);
	this->_a = roundf(fVal * temp);
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
	o << src.toFloat();
	return o;
}

int Fixed::toInt(void)const{
	return(this->_a >> this->_fract);
}

float Fixed::toFloat(void)const{
	int temp = power_ten(2, this->_fract);
	return ((float)this->_a / temp);
}

int Fixed::getRawBits(void)const{
	return (this->_a);
}

void Fixed::setRawBits(const int raw){
	this->_a = raw;
	return;
}