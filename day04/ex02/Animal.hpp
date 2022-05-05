#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
# include <string>

class AAnimal{
	public:

		virtual ~AAnimal(void);
		virtual void makeSound(void)const = 0;
		virtual AAnimal &operator=(const AAnimal &src);
		virtual std::string getType(void)const;
	protected:

		std::string type;
};

#endif //ANIMAL_H//