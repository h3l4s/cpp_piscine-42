#ifndef AMATERIA_H
# define AMATERIA_H

# include "ICharacter.hpp"
# include <iostream>

class ICharacter;

class AMateria
{
	public:

		virtual ~AMateria(void);
		AMateria(std::string const & type);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;
	protected:

		std::string _type;
};

#endif //AMATERIA_H