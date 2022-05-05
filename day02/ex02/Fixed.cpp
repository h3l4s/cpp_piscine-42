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
	return;
}

Fixed::Fixed(Fixed const & src){
	*this = src;
	return;
}

Fixed::Fixed(const int val){
	this->_a = val << this->_fract;
	return;
}

Fixed::Fixed(const float fVal){
	int temp = power_ten(2, this->_fract);
	this->_a = roundf(fVal * temp);
	return;
}

Fixed::~Fixed(void){
	return;
}

Fixed & Fixed::min(Fixed &n1, Fixed &n2){
	if (n1.getRawBits() > n2.getRawBits())
		return n2;
	else
		return n1;
}

Fixed & Fixed::max(Fixed &n1, Fixed &n2){
	if (n1.getRawBits() > n2.getRawBits())
		return n1;
	else
		return n2;
}

const Fixed & Fixed::max(Fixed const &n1, Fixed const &n2){
	if (n1.getRawBits() > n2.getRawBits())
		return n1;
	else
		return n2;
} 

const Fixed & Fixed::min(Fixed const &n1, Fixed const &n2){
	if (n1.getRawBits() < n2.getRawBits())
		return n1;
	else
		return n2;
} 

Fixed & Fixed::operator=(Fixed const & src){
	this->_a = src.getRawBits();
	return *this;
}

Fixed Fixed::operator+(Fixed const & src){
	Fixed res;
	res.setRawBits(this->getRawBits() + src.getRawBits());
	return res;
}

Fixed Fixed::operator-(Fixed const & src){
	Fixed res;
	res.setRawBits(this->getRawBits() - src.getRawBits());
	return res;
}

Fixed Fixed::operator*(Fixed const & src){
	Fixed res(this->toFloat() * src.toFloat());
	return res;
}

Fixed Fixed::operator/(Fixed const & src){
	if (src.getRawBits() != 0)
	{
		Fixed res(this->toFloat() / src.toFloat());
		return res;
	}	
	return *this;
}

bool Fixed::operator>(Fixed const & src)const{
	return(this->getRawBits() > src.getRawBits());
}

bool Fixed::operator<(Fixed const & src)const{
	return(src.getRawBits() > this->getRawBits());
}

bool Fixed::operator>=(Fixed const & src)const{
	return (!(this->getRawBits() < src.getRawBits()));
}

bool Fixed::operator<=(Fixed const & src)const{
	return (!(this->getRawBits() > src.getRawBits()));
}

bool Fixed::operator==(Fixed const & src)const{
	return(this->getRawBits() == src.getRawBits());
}

bool Fixed::operator!=(Fixed const & src)const{
	return(!(this->getRawBits() == src.getRawBits()));
}

Fixed & Fixed::operator--(void){
	this->_a--;
	return (*this);
}

Fixed & Fixed::operator++(void){
	this->_a++;
	return (*this);
}

Fixed  Fixed::operator++(int){
	Fixed newF(*this);
	++(*this);
	return newF;
}

Fixed Fixed::operator--(int){
	
	Fixed newF(*this);
	--(*this);
	return newF;
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