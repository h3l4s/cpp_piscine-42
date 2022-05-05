#include "Brain.hpp"

Brain::Brain(void){
	std::cout << "Brain default constructor called" << std::endl;
	return ;
}

Brain::Brain(const Brain &src){
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
	return;
}

Brain::~Brain(void){
	std::cout << "Brain destructor called" << std::endl;
	return ;
}

Brain &Brain::operator=(const Brain &src){
	std::cout << "Brain operator= function called" << std::endl;
	(void)src;
	return *this;
}