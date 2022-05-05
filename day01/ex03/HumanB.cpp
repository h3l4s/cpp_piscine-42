#include "HumanB.hpp"

HumanB::HumanB(std::string name): _weapon(NULL), _name(name){
	return;
}

HumanB::~HumanB(void){
	return;
}

bool HumanB::setWeapon(Weapon &wep){
	if (wep.getType() == "")
	{
		std::cout << "weapon wasn't set" << std::endl;
		return 1;
	}
	this->_weapon = &wep;
	return 0;
}

void HumanB::attack(void)const{
	if(this->_weapon->getType() == "")
		std::cout << "cannot attack without weapon" << std::endl;
	std::cout << this->_name << " attacks whith his " << this->_weapon->getType() << std::endl;
}