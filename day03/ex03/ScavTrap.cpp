#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void){
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_name = "";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap(const std::string name){
	std::cout << "ScavTrap assignation constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap & src){
	std::cout << "ScavTrap copy constructor called" << std::endl;
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return ;
}

ScavTrap::~ScavTrap(void){
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &src){
	std::cout << "ScavTrap operator= function called" << std::endl;
	(void)src;
	return *this;
}

void ScavTrap::attack(const std::string &target){
	if(this->getEnergyPoints() > 0 && this->getHitPoints() > 0)
	{
		this->_energyPoints--;
		std::cout << "ScavTrap " << this->getName() << " attacked " << target << ", causing " << this->_attackDamage << " damages with his laser" << std::endl;
	}
	else if (this->getHitPoints() == 0)
		std::cout << this->getName() << " cannot attack, not enough hitPoints left" << std::endl;
	else if (this->getEnergyPoints() == 0)
		std::cout << this->getName() << " cannot attack, not enough energyPoints left" << std::endl;
}

void ScavTrap::guardGate(void){
	std::cout << "ScavTrap " << this->getName() << " now guarding the gate" << std::endl;
}