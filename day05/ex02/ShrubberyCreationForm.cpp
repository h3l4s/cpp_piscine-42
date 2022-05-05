#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void):Form("ShrubberyCreationForm", 145, 137), _target(""){
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & src): Form("ShrubberyCreationForm", 145, 137),  _target(src._target){
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	*this = src;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): Form("ShrubberyCreationForm", 145, 137), _target(target){
	std::cout << "ShrubberyCreationForm assignation constructor called" << std::endl;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
	return;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm & src){
	std::cout << "ShrubberyCreationForm operator= function called" << std::endl;
	if(this->getName() != src.getName())
		*this = src;
	return *this;
}

void ShrubberyCreationForm::exec(const Bureaucrat &person){
	if(!this->getSigned())
		throw Form::CantExecute();
	if(person.getNote() <= this->getReqExec() && person.getNote() > 0)
	{
		std::ofstream temp;
		std::string filename = this->_target + "_shrubbery";
		temp.open(filename.c_str());
		temp << "      ,.," << std::endl;
		temp << "      MMMM_    ,..," << std::endl;
		temp << "        \"_ \"__\"MMMMM          ,...,," << std::endl;
		temp << " ,..., __.\" --\"    ,.,     _-\"MMMMMMM" << std::endl;
		temp << "MMMMMM\"___ \"_._   MMM\"_.\"\" _ \"\"\"\"\"\"" << std::endl;
		temp << " \"\"\"\"\"    \"\" , \\_.   \"_. .\"" << std::endl;
		temp << "        ,., _\"__ \\__./ .\"" << std::endl;
		temp << "       MMMMM_\"  \"_    ./" << std::endl;
		temp << "        ''''      (    )" << std::endl;
		temp << " ._______________.-'____\"---._." << std::endl;
		temp << "  \\                          /" << std::endl;
		temp << "   \\________________________/" << std::endl;
		temp << "   (_)                    (_)" << std::endl;
		temp.close();
	std::cout << "Created the shrug in " << this->_target << "_shrubbery"
		<< std::endl;
	}
	else
		std::cout << person.getName() << " cannot execute " << this->getName() << " because he/she hasnt a good enough note" << std::endl;
	return;
}