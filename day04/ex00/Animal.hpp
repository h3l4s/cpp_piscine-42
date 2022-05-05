#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
# include <string>

class Animal{
	public:

		Animal(void);
		Animal(const std::string animalType);
		Animal(const Animal &src);
		virtual ~Animal(void);
		virtual void makeSound(void)const;
		Animal &operator=(const Animal &src);
		std::string getType(void)const;
	protected:

		std::string type;
};

#endif //ANIMAL_H//