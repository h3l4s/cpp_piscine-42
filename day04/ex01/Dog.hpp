#ifndef DOG_H
# define DOG_H

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal{
	public:

		Dog(void);
		Dog(const Dog &src);
		~Dog(void);
		Dog &operator=(const Dog &src);
		virtual void makeSound(void)const;
	private:

		Brain *brain;
};

#endif //DOG_H//