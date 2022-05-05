#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int	main(void)
{
	Form			*form = NULL;
	Bureaucrat		bob("bob", 1);
	Bureaucrat		phil("phil", 40);
	Bureaucrat		luc("luc", 150);

	try
	{
		form = new PresidentialPardonForm("28Z");
		form->exec(bob);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		if (form)
			delete form;
		std::cout << e.what() << std::endl;
	}

	try
	{
		form = new PresidentialPardonForm("28A");
		bob.signForm(*form);
		form->exec(bob);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		if(form)
			delete form;
		std::cout << e.what() << std::endl;
	}


	try
	{
		form = new RobotomyRequestForm("28B");
		bob.signForm(*form);
		form->exec(phil);
		form->exec(phil);
		form->exec(phil);
		form->exec(phil);
		form->exec(phil);
		form->exec(phil);
		form->exec(phil);
		form->exec(phil);
		form->exec(phil);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		if(form)
			delete form;
		std::cout << e.what() << std::endl;
	}


	try
	{
		form = new ShrubberyCreationForm("28C");
		bob.signForm(*form);
		form->exec(phil);
		form->exec(luc);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		if(form)
			delete form;
		std::cout << e.what() << std::endl;
	}

	return 0;
}