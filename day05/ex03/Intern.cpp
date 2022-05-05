#include "Intern.hpp"

Intern::Intern(void){
	std::cout << "intern default constructor called" << std::endl;
	return;
}

Intern::Intern(const Intern & src){
	(void)src;
	std::cout << "intern assignation constructor called" << std::endl;
	return;
}

Intern::~Intern(void){
	std::cout << "intern destructor called" << std::endl;
	return;
}

Form *Intern::makeForm(const std::string form, const std::string target){
	if(target == "")
		throw Form::noName();
	t_formList forms[]={
		{"presidential pardon", new PresidentialPardonForm(target)},
		{"robotomy request", new RobotomyRequestForm(target)},
		{"shrubbery creation", new ShrubberyCreationForm(target)},
		{"", NULL}
	};
	Form *result = NULL;
	for(int i = 0; forms[i].formType; i++)
	{
		if(forms[i].formName == form)
			result = forms[i].formType;
		else
			delete forms[i].formType;
	}
	if(result == NULL)
	{
		std::cout << std::endl;
		std::cout << "Intern didnt find the form you are looking for" << std::endl;
		std::cout << std::endl;
	}
	else
	{
		std::cout << std::endl;
		std::cout << "Intern creates " << result->getName() << std::endl;
		std::cout << std::endl;
	}
	return result;
}

Intern &Intern::operator=(const Intern & src){
	(void)src;
	std::cout << "intern operator= function called" << std::endl;
	return *this;
}