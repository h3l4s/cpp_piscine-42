#include "Form.hpp"

Form::Form(const std::string name, const int required_sign, const int required_exec): _name(name), _signed(0), _required_sign(required_sign), _required_exec(required_exec){
	std::cout << "Form assignation constructor called" << std::endl;
	if(this->_required_exec > 150 || this->_required_sign > 150)
		throw Form::GradeTooLowException();
	if(this->_required_exec < 1 || this->_required_sign < 1)
		throw Form::GradeTooHighException();
	return;
}

Form::Form(const Form & src): _name(src._name), _signed(src._signed), _required_sign(src._required_sign), _required_exec(src._required_exec){
	std::cout << "Form assignation constructor called" << std::endl;
	return;
}

Form::~Form(void){
	std::cout << "Form desctructor called" << std::endl;
	return;
}

void Form::beSigned(const Bureaucrat & person){
	if(person.getNote() <= this->_required_sign)
		this->_signed = 1;
	else
		throw Form::GradeTooLowException();
	return;
}

Form &Form::operator=(const Form &src){
	if(this->getName() != src.getName())
		*this = src;
	return *this;
}

std::string Form::getName(void)const{
	return this->_name;
}

bool Form::getSigned(void)const{
	return this->_signed;
}

int Form::getReqSigned(void)const{
	return this->_required_sign;
}

int Form::getReqExec(void)const{
	return this->_required_exec;
}

std::ostream &operator<<(std::ostream &ostr, const Form &disForm){
	ostr << disForm.getName() << ": signed ? " << disForm.getSigned() << " grade required to sign ? " << disForm.getReqSigned() << " grade required to Exec ? " << disForm.getReqExec() << std::endl;
	return (ostr);
}