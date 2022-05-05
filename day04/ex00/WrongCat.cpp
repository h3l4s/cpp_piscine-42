#include "WrongCat.hpp"

WrongCat::WrongCat(void){
	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = "WrongCat";
	return;
}

WrongCat::WrongCat(const WrongCat &src){
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->type = src.type;
	return ;
}

WrongCat::~WrongCat(void){
	std::cout << "WrongCat destructor called" << std::endl;
	return ;
}

WrongCat &WrongCat::operator=(const WrongCat & src){
	std::cout << "WrongCat operator= function called" << std::endl;
	(void)src;
	return *this;
}

void WrongCat::makeSound(void)const{
	std::cout << "Meow" << std::endl;
	return ;
}