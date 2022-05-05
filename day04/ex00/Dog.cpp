#include "Dog.hpp"

Dog::Dog(void){
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	return;
}

Dog::Dog(const Dog &src){
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = src.type;
	return ;
}

Dog::~Dog(void){
	std::cout << "Dog destructor called" << std::endl;
	return ;
}

Dog &Dog::operator=(const Dog & src){
	std::cout << "Dog operator= function called" << std::endl;
	(void)src;
	return *this;
}

void Dog::makeSound(void)const{
	std::cout << "Grrrr" << std::endl;
	return ;
}