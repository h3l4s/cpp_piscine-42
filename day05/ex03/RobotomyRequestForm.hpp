#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include "Form.hpp"

class RobotomyRequestForm: public Form{
	public:

		RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm & src);
		RobotomyRequestForm(const std::string &target);
		~RobotomyRequestForm(void);

		RobotomyRequestForm &operator=(const RobotomyRequestForm & src);
		void exec(const Bureaucrat &person);
	private:

		std::string _target;
};

#endif //ROBOTOMYREQUESTFORM_H