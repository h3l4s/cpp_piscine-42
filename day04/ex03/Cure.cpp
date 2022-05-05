#include "Cure.hpp"

Cure::Cure(void): AMateria("cure"){
	std::cout << "Cure default constructor called" << std::endl;
	return ;
}

Cure::Cure(const Cure & src): AMateria("cure"){
	std::cout << "Cure assignation constructor called" << std::endl;
	this->_type = src._type;
	return;
}

Cure::~Cure(void){
	std::cout << "Cure destructor called" << std::endl;
	return;
}

Cure &Cure::operator=(const Cure &src){
	(void)src;
	return *this;
}

void Cure::use(ICharacter &target){
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	return;
}

AMateria *Cure::clone(void)const{
	return (new Cure(*this));
}