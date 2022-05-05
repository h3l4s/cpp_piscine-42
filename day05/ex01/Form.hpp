#ifndef FORM_H
# define FORM_H

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
	public:

		Form(void);
		Form(const std::string name, const int required_sign, const int required_exec);
		Form(const Form &src);
		~Form(void);

		Form &operator=(const Form & src);
		class GradeTooLowException: public std::exception{
			public:
			
				virtual const char * what() const throw(){
					return("Grade is too low for the action you are attempting");
				}
		};
		class GradeTooHighException: public std::exception{
			public:
			
				virtual const char * what() const throw(){
					return("Grade is too low for the action you are attempting");
				}
		};
		std::string getName(void)const;
		bool getSigned(void)const;
		int getReqSigned(void)const;
		int getReqExec(void)const;
		void beSigned(const Bureaucrat & person);
	private:

		const std::string _name;
		bool _signed;
		const int _required_sign;
		const int _required_exec;
};

std::ostream &operator<<(std::ostream &ostr, const Form &disForm);

#endif //FORM_H //