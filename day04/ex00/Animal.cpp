#include "Animal.hpp"

Animal::Animal(void){
	std::cout << "Animal default constructor called" << std::endl;
	return;
}

Animal::Animal(const std::string animalType): type(animalType){
	std::cout << "Animal assignation constructor called" << std::endl;
	return ;
}

Animal::Animal(const Animal &src): type(src.type){
	std::cout << "Animal copy constructor called" << std::endl;
	return ;
}

Animal::~Animal(void){
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

std::string Animal::getType(void)const{
	return this->type;
}

void Animal::makeSound(void)const{
	std::cout << "random sound you may have already heard" << std::endl;
}

Animal &Animal::operator=(const Animal & src){
	std::cout << "Animal operator= function called" << std::endl;
	(void)src;
	return *this;
}