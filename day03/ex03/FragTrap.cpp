#include "FragTrap.hpp"

FragTrap::FragTrap(void){
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_name = "";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return ;
}

FragTrap::FragTrap(const std::string name){
	std::cout << "FragTrap assignation constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return ;
}

FragTrap::FragTrap(const FragTrap & src){
	std::cout << "FragTrap copy constructor called" << std::endl;
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return ;
}

FragTrap::~FragTrap(void){
	std::cout << "FragTrap destructor called" << std::endl;
	return ;
}

FragTrap & FragTrap::operator=(const FragTrap &src){
	std::cout << "FragTrap operator= function called" << std::endl;
	(void)src;
	return *this;
}

void FragTrap::attack(const std::string &target){
	if(this->getEnergyPoints() > 0 && this->getHitPoints() > 0)
	{
		this->_energyPoints--;
		std::cout << "FragTrap " << this->getName() << " attacked " << target << ", causing " << this->_attackDamage << " damages with his riffle" << std::endl;
	}
	else if (this->getHitPoints() == 0)
		std::cout << this->getName() << " cannot attack, not enough hitPoints left" << std::endl;
	else if (this->getEnergyPoints() == 0)
		std::cout << this->getName() << " cannot attack, not enough energyPoints left" << std::endl;
}

void FragTrap::highFivesGuys(void){
	std::cout << "FragTrap " << this->getName() << " said: gimme a high five" << std::endl;
}