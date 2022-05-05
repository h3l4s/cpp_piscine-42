#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void):Form("RobotomyRequestForm", 72, 45), _target(""){
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & src): Form("RobotomyRequestForm", 72, 45),  _target(src._target){
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	*this = src;
	return;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target): Form("RobotomyRequestForm", 72, 45), _target(target){
	std::cout << "RobotomyRequestForm assignation constructor called" << std::endl;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm(void){
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
	return;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm & src){
	std::cout << "RobotomyRequestForm operator= function called" << std::endl;
	if(this->getName() != src.getName())
		*this = src;
	return *this;
}

void RobotomyRequestForm::exec(const Bureaucrat &person){
	if(!this->getSigned())
		throw Form::CantExecute();
	if(person.getNote() <= this->getReqExec() && person.getNote() > 0)
	{
		if (std::rand() % 2)
			std::cout << this->_target << " successfully became a robot" << std::endl;
		else
			std::cout << this->_target << " robot transformation failed" << std::endl;
	}
	else
		std::cout << person.getName() << " cannot execute " << this->getName() << " because he/she hasnt a good enough note" << std::endl;
	return;
}