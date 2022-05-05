#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap:public FragTrap, public ScavTrap{
	public:

		DiamondTrap(const std::string name);
		DiamondTrap(const DiamondTrap &src);
		~DiamondTrap(void);
		DiamondTrap &operator=(const DiamondTrap &src);
		void attack(const std::string &target);
		void whoAmI(void);
		std::string getName(void);
	private:

		std::string _name;
		DiamondTrap(void);
};

#endif //DIAMONDTRAP_H