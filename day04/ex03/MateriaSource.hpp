#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	public:
	
		MateriaSource(void);
		MateriaSource(const MateriaSource & src);
		~MateriaSource();
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
		MateriaSource &operator=(const MateriaSource & src);
	private:
		
		AMateria *_materias[4];
};

#endif //MATERIASOURCE_H