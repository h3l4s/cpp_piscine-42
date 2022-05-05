#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void){
	return;
}

Zombie::~Zombie(){
	std::cout << this->_name << " has been slain" << std::endl;
	return;
}

void Zombie::announce()const{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}

std::string Zombie::getName(void)const{
	return(this->_name);
}

bool Zombie::setName(std::string newName){
	if(newName == "")
		return 1;
	else
		this->_name = newName;
	return 0;
}
