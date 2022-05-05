#include <iostream>
#include <iomanip>
#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name){
	return;
}

Zombie::~Zombie(){
	std::cout << this->_name << " has been slain" << std::endl;
	return;
}

void Zombie::announce()const{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}