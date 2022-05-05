#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void):Form("PresidentialPardonForm", 25, 5), _target(""){
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & src): Form("PresidentialPardonForm", 25, 5), _target(src._target){
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	*this = src;
	return;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target): Form("PresidentialPardonForm", 25, 5), _target(target){
	std::cout << "PresidentialPardonForm assignation constructor called" << std::endl;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm(void){
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
	return;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm & src){
	std::cout << "PresidentialPardonForm operator= function called" << std::endl;
	if(this->getName() != src.getName())
		*this = src;
	return *this;
}

void PresidentialPardonForm::exec(const Bureaucrat &person){
	if(!this->getSigned())
		throw Form::CantExecute();
	if(person.getNote() <= this->getReqExec() && person.getNote() > 0)
		std::cout << this->_target << " has been forgiven by Zafod Beeblebrox." << std::endl;
	else
		std::cout << person.getName() << " cannot execute " << this->getName() << " because he/she hasnt a good enough note" << std::endl;
	return;
}