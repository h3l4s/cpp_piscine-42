#include "AMateria.hpp"

AMateria::~AMateria(void){
	std::cout << "AMateria destructor called" << std::endl;
	return;
}

AMateria::AMateria(std::string const & type): _type(type){
	std::cout << "AMateria assignation constructor called" << std::endl;
	return;
}
const std::string &AMateria::getType(void)const{
	return this->_type;
}