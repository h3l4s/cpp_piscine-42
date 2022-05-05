#ifndef WEAPON_H
# define WEAPON_H

# include <string>
# include <iostream>

class Weapon{
	public:
		
		Weapon(std::string type);
		~Weapon(void);
		const std::string &getType(void)const;
		bool setType(std::string nType);
	private:
		std::string _type;
};

#endif //WEAPON_H