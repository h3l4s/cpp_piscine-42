#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include "Form.hpp"

class ShrubberyCreationForm: public Form{
	public:

		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const ShrubberyCreationForm & src);
		ShrubberyCreationForm(const std::string &target);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm &operator=(const ShrubberyCreationForm & src);
		void exec(const Bureaucrat &person);
	private:

		std::string _target;
};

#endif //SHRUBBERYCREATIONFORM_H