#include "Animal.hpp"

AAnimal::~AAnimal(void){
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

std::string AAnimal::getType(void)const{
	return this->type;
}

void AAnimal::makeSound(void)const{
	std::cout << "random sound you may have already heard" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal & src){
	std::cout << "Animal operator= function called" << std::endl;
	(void)src;
	return *this;
}