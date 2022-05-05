#include "Intern.hpp"


int	main(void)
{
	Bureaucrat		bob("bob", 1);
	Intern someRandomIntern;
	Form* rrf;

	try{
		rrf = someRandomIntern.makeForm("robotodmy request", "Bender");
		delete rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		delete rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		delete rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		bob.signForm(*rrf);
		delete rrf;
		std::cout << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << "errors during execution:"<< std::endl;
		std::cout << e.what() << std::endl;
		std::cout << std::endl;
	}
	try{
		std::cout << "testing protections with void input: " << std::endl;
		rrf = someRandomIntern.makeForm("", "");
		rrf = someRandomIntern.makeForm("robotomy request", "");
		bob.signForm(*rrf);
		rrf->exec(bob);
	}
	catch(std::exception & e)
	{
		std::cout << "errors during execution:"<< std::endl;
		std::cout << e.what() << std::endl;
		std::cout << std::endl;
	}
	return (0);
}