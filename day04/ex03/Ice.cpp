#include "Ice.hpp"

Ice::Ice(void): AMateria("ice"){
	std::cout << "Ice default constructor called" << std::endl;
	return ;
}

Ice::Ice(const Ice & src): AMateria("ice"){
	std::cout << "Ice assignation constructor called" << std::endl;
	this->_type = src._type;
	return;
}

Ice::~Ice(void){
	std::cout << "Ice destructor called" << std::endl;
	return;
}

Ice &Ice::operator=(const Ice &src){
	(void)src;
	return *this;
}

void Ice::use(ICharacter &target){
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
	return;
}

AMateria *Ice::clone(void)const{
	return (new Ice(*this));
}