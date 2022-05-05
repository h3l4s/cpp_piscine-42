#ifndef ICE_H
# define ICE_H

#include "AMateria.hpp"

class Ice: public AMateria{
	public:

		Ice(void);
		Ice(const Ice &src);
		~Ice(void);

		Ice &operator=(const Ice &src);
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

};

#endif //ICE_H//