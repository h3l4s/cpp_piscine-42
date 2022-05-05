#include "Character.hpp"

Character::Character(void){
	std::cout << "Character default constructor called" << std::endl;
	for(int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	this->_already_on_floor = 0;
	this->_name = "";
	return;
}

Character::Character(const std::string &name){
	std::cout << "Character assignation constructor called" << std::endl;
	for(int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	this->_already_on_floor = 0;
	this->_name = name;
	return;
}

Character::Character( Character const & src )
{
	std::cout << "Copy constructor for Character called" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		if(this->_inventory[i])
			delete(this->_inventory[i]);
	}
	if(this->_on_floor)
		delete _on_floor;
	*this = src;
	return;
}

Character::~Character(void){
	std::cout << "Character destructor called" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		if(this->_inventory[i])
			delete(this->_inventory[i]);
	}
	if(this->_on_floor)
		delete _on_floor;
	return ;
}

Character &Character::operator=(const Character &src){
	std::cout << "Character operator= function called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		this->_inventory[i] = src._inventory[i];
	}
	if(this->_on_floor)
		delete _on_floor;
	this->_name = src.getName();
	this->_on_floor = src._on_floor;
	return *this;
}

const std::string &Character::getName(void) const{
	return this->_name;
}

void Character::equip(AMateria* m){
	int i = 0;
	while(this->_inventory[i] && i < 4)
		i++;
	if (i < 4)
	{
		if(m == _on_floor)
			this->_already_on_floor--;
		std::cout << m->getType() << " equiped on " << this->getName() << std::endl;
		this->_inventory[i] = m;
	}
	else
		std::cout << m->getType() << " cannot be equiped on " << this->getName() << ", no slot left" << std::endl;
	return;
}

void Character::unequip(int idx){
	if(!this->_inventory[idx])
	{
		std::cout << this->getName() << " cannot unequip " << idx << " object, it doesnt exist" << std::endl;
		return;
	}
	if (!this->_already_on_floor)
	{
		this->_on_floor = this->_inventory[idx];
		std::cout << this->_on_floor->getType() << " was dropped on the floor by " << this->getName() << std::endl;
		this->_inventory[idx] = NULL;
		this->_already_on_floor++;
	}
	else
		std::cout << this->getName() << " cannot drop his item, one is already on floor" << std::endl;
	return;
}

void Character::use(int idx, ICharacter& target){
	if(this->_inventory[idx])
	{
		this->_inventory[idx]->use(target);
		this->unequip(idx);
	}
	else
		std::cout << idx << " item does not exist" << std::endl;
	return;
}