#ifndef HUMANB_H
# define HUMANB_H

# include <string>
# include "Weapon.hpp"

class HumanB{
	public:

		HumanB(std::string name);
		~HumanB(void);
		void attack(void)const;
		bool setWeapon(Weapon &wep);
	private:

		Weapon *_weapon;
		std::string _name;
};

#endif //HUMANB_H