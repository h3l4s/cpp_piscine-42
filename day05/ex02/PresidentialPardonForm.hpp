#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include "Form.hpp"

class PresidentialPardonForm: public Form{
	public:

		PresidentialPardonForm(void);
		PresidentialPardonForm(const PresidentialPardonForm & src);
		PresidentialPardonForm(const std::string &target);
		~PresidentialPardonForm(void);

		PresidentialPardonForm &operator=(const PresidentialPardonForm & src);
		void exec(const Bureaucrat &person);
	private:

		std::string _target;
};

#endif //PRESIDENTIALPARDONFORM_H