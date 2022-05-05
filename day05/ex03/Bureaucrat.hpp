#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat{
	public:

		class GradeTooLowException : public std::exception{
			public:

				virtual const char * what() const throw(){
					return ("Grade sent for creation is too low, enter a grade of 150 or above");
				}
		};
		class GradeTooHighException : public std::exception{
			public:

				virtual const char * what() const throw(){
					return ("Grade sent for creation is too high, enter a grade of 1 or bellow");
				}
		};
		Bureaucrat(void);
		Bureaucrat(const std::string name, const int note);
		Bureaucrat(const Bureaucrat & src);
		~Bureaucrat(void);

		Bureaucrat &operator=(const Bureaucrat &src);
		std::string getName(void)const;
		int getNote(void)const;
		void upNote(void);
		void downNote(void);
		bool executeForm(Form & form)const;
		void signForm(Form & formu);
	private:

		const std::string _name;
		int _note;
};

std::ostream &operator<<(std::ostream &ostr, const Bureaucrat &disForm);

#endif // BUREAUCRAT_H