#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type){
	return;
}

Weapon::~Weapon(void){
	return;
}

const std::string &Weapon::getType(void) const{
	return(this->_type);
}

bool Weapon::setType(std::string nType){
	if(nType == "")
		return 0;
	this->_type = nType;
	return 1;
}