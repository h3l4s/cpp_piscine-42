#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "ClapTrap default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "ClapTrap assignation constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src): _name(src._name), _hitPoints(src._hitPoints), _energyPoints(src._energyPoints), _attackDamage(src._attackDamage){
	std::cout << "ClapTrap copy constructor called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void){
	std::cout << "ClapTrap destructor called" << std::endl;
	return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & src){
	std::cout << "ClapTrap operator= function called" << std::endl;
	(void)src;
	return *this;
}

void ClapTrap::attack(const std::string& target){
	if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0)
	{
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damgage!" << std::endl;
	}
	else if (this->getHitPoints() == 0)
		std::cout << this->getName() << " cannot attack, not enough hitPoints left" << std::endl;
	else if (this->getEnergyPoints() == 0)
		std::cout << this->getName() << " cannot attack, not enough energyPoints left" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout << "ClapTrap takeDamage function called, amount: " << amount << std::endl;
	if(getHitPoints() > 0)
	{
		if (getHitPoints() >= (int)amount)
			this->_hitPoints -= amount;
		else
			this->_hitPoints = 0;
	}
	else
		std::cout << this->getName() << " already dead" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	std::cout << "ClapTrap beRepaired function called, amount: " << amount << std::endl;
	if (this->getEnergyPoints() > 0)
	{
		this->_hitPoints += amount;
		this->_energyPoints--;
	}
	else
		std::cout << "cannot repair " << this->getName() << ", not enough energyPoints left" << std::endl;
}

int ClapTrap::getHitPoints(void){
	return this->_hitPoints;
}

int ClapTrap::getEnergyPoints(void){
	return this->_energyPoints;
}

int ClapTrap::getAttackDamage(void){
	return this->_attackDamage;
}

std::string ClapTrap::getName(void){
	return this->_name;
}

std::ostream &	operator<<( std::ostream & ostr, ClapTrap & instance)
{
	ostr << "ClapTrap " << instance.getName();
	return ostr;
}