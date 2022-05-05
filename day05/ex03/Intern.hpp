#ifndef INTERN_H
# define INTERN_H

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class Intern: public PresidentialPardonForm, public RobotomyRequestForm, public ShrubberyCreationForm{
	public:

		Intern(void);
		Intern(const Intern & src);
		~Intern(void);

		Intern &operator=(const Intern & src);
		Form *makeForm(const std::string form, const std::string target);
	private:

		typedef struct s_formList
		{
			std::string formName;
			Form *formType;
		}	t_formList;
};

#endif //INTERN_H//