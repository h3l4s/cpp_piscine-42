#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void){
	for(int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
	std::cout << "MateriaSource default constructor called" << std::endl;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource & src){
	for(int i = 0; i < 4;i++)
	{
		if(this->_materias[i])
			delete this->_materias[i];
	}
	*this = src;
	std::cout << "MateriaSource assignation constructor called" << std::endl;
	return;
}

MateriaSource::~MateriaSource(void){
	std::cout << "MateriaSource destructor called" << std::endl;
	for(int i = 0; i < 4;i++)
	{
		if(this->_materias[i])
			delete this->_materias[i];
	}
	return;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src){
	(void)src;
	return *this;
}

void MateriaSource::learnMateria(AMateria* to_learn){
	int i = 0;
	while (this->_materias[i] && i < 4)
		i++;
	if (i == 4)
	{
		std::cout << "cannot learn another materia, no slot left" << std::endl;
		return;
	}
	this->_materias[i] = to_learn;
	std::cout << "just learning " << to_learn->getType() << std::endl;
	return;
}

AMateria *MateriaSource::createMateria(std::string const & type){
	for(int i = 0;i < 4; i++)
	{
		if(this->_materias[i])
		{
			if(type == this->_materias[i]->getType())
				return this->_materias[i]->clone();
		}
	}
	return NULL;
}
