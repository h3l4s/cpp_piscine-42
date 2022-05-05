#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void){
	std::cout << "WrongAnimal default constructor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(const std::string WrongAnimalType): type(WrongAnimalType){
	std::cout << "WrongAnimal assignation constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src): type(src.type){
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal(void){
	std::cout << "WrongAnimal destructor called" << std::endl;
	return ;
}

std::string WrongAnimal::getType(void)const{
	return this->type;
}

void WrongAnimal::makeSound(void)const{
	std::cout << "random sound you may have already heard" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal & src){
	std::cout << "WrongAnimal operator= function called" << std::endl;
	(void)src;
	return *this;
}