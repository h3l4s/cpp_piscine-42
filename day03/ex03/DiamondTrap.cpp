#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string name){
	std::cout << "DiamondTrap assignation constructor called" << std::endl;
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	return;
}

DiamondTrap::DiamondTrap(void){
	std::cout << "DiamondTrap default constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src){
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return;
}

DiamondTrap::~DiamondTrap(void){
	std::cout << "DiamondTrap destructor called" << std::endl;
	return;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src){
	std::cout << "DiamondTrap operator= function called" << std::endl;
	(void)src;
	return *this;
}

void DiamondTrap::attack(const std::string &target){
	std::cout << "DiamondTrap attack function called" << std::endl;
	this->_attackDamage = FragTrap::_attackDamage;
	ScavTrap::attack(target);
	return;
}

std::string DiamondTrap::getName(void){
	return this->_name;
}

void DiamondTrap::whoAmI(void){
	std::cout << "my claptrap name is: " << ClapTrap::_name << " and my real one is: " << this->getName() << std::endl;
}