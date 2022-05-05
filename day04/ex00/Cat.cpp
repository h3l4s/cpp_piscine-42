#include "Cat.hpp"

Cat::Cat(void){
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	return;
}

Cat::Cat(const Cat &src){
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = src.type;
	return ;
}

Cat::~Cat(void){
	std::cout << "Cat destructor called" << std::endl;
	return ;
}

Cat &Cat::operator=(const Cat & src){
	std::cout << "Cat operator= function called" << std::endl;
	(void)src;
	return *this;
}

void Cat::makeSound(void)const{
	std::cout << "Meow" << std::endl;
	return ;
}