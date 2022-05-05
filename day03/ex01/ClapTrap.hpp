#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap{
	public:

		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap(void);

		ClapTrap & operator=(ClapTrap const &src);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int getHitPoints(void);
		int getEnergyPoints(void);
		int getAttackDamage(void);
		std::string getName(void);
	protected:

		std::string _name;
		int _hitPoints;
		int _energyPoints;
		int _attackDamage;
};

std::ostream	&operator<<( std::ostream &ostream, ClapTrap &myClass );

#endif //CLAPTRAP_H