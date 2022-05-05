#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{
	public:

		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap & src);
		~ScavTrap(void);

		ScavTrap &operator=(const ScavTrap &src);

		void attack(const std::string &target);
		void guardGate(void);
	private:

		ScavTrap(void);
};

#endif // SCAVTRAP_H