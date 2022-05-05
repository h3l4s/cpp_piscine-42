#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name(""), _note(150){
	std::cout << "Bureaucrat default constructor called" << std::endl;
	return;
}

Bureaucrat::Bureaucrat(const std::string name, const int note): _name(name){
	std::cout << "Bureaucrat assignation constructor called" << std::endl;
	if(note < 151 && note > 0)
		this->_note = note;
	else
	{
		if (note > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			throw Bureaucrat::GradeTooHighException();
	}
	return;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src): _name(src._name), _note(src._note){
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	return; 
}

Bureaucrat::~Bureaucrat(void){
	std::cout << "Bureaucrat destructor called" << std::endl;
	return;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src){
	if(this->_name != src._name)
		*this = src;
	return *this;
}

bool Bureaucrat::executeForm(Form & form)const{
	try{
		std::cout << this->getName() << " executs " << form.getName() << std::endl;
		form.exec(*this);
	}
	catch(Form::CantExecute temp){
		temp.what();
		return 1;
	}
	return 0;
}

void Bureaucrat::signForm(Form & formu){
	if(formu.getSigned() == 1)
	{
		std::cout << "person: " << this->getName() << " can't sign " << formu.getName() <<" because the form is already signed" << std::endl;
		return;
	}
	formu.beSigned(*this);
	if(formu.getSigned() == 1)
		std::cout << "person: " << this->getName() << " signs " << formu.getName() << std::endl;
	else
		std::cout << "person: " << this->getName() << " can't sign " << formu.getName() <<" because he hasn't a high enough grade"<< std::endl;
	return;
}

std::string Bureaucrat::getName(void)const{
	return this->_name;
}

int Bureaucrat::getNote(void)const{
	return this->_note;
}

void Bureaucrat::upNote(void){
	if (this->_note > 1)
	{
		this->_note--;
		std::cout  << this->getName() << " note increased" << std::endl;
	}
	else
		std::cout << this->getName() << " note already at the maximum" << std::endl;
	return;
}

void Bureaucrat::downNote(void){
	if (this->_note < 150)
	{
		this->_note++;
		std::cout  << this->getName() << " note decreased" << std::endl;
	}
	else
		std::cout << this->getName() << " note already at the minimum" << std::endl;
	return;
}

std::ostream &operator<<(std::ostream &ostr, const Bureaucrat &disForm){
	ostr << disForm.getName() << ": note ? " << disForm.getNote() << std::endl;
	return (ostr);
}