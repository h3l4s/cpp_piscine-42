#ifndef CHARACTER_H
# define CHARACTER_H

#include "ICharacter.hpp"

class Character: public ICharacter{
	public:

		Character(const std::string &name);
		Character(const Character & src);
		~Character(void);
		Character &operator=(const Character &src);
		virtual std::string const & getName(void) const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
	protected:

		std::string _name;
		AMateria *_inventory[4];
		AMateria *_on_floor;
		int _already_on_floor;
	private:

		Character(void);
};

#endif //CHARACTER_H//