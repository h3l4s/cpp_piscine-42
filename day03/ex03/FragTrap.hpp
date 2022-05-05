#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap{
	public:

		FragTrap(const std::string name);
		FragTrap(const FragTrap & src);
		~FragTrap(void);

		FragTrap &operator=(const FragTrap &src);

		void attack(const std::string &target);
		void highFivesGuys(void);
	protected:

		FragTrap(void);
};

#endif // FRAGTRAP_H