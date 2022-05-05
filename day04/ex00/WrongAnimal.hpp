#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <iostream>
# include <string>

class WrongAnimal{
	public:

		WrongAnimal(void);
		WrongAnimal(const std::string WrongAnimalType);
		WrongAnimal(const WrongAnimal &src);
		~WrongAnimal(void);
		void makeSound(void)const;
		WrongAnimal &operator=(const WrongAnimal &src);
		std::string getType(void)const;
	protected:

		std::string type;
};

#endif //WRONGANIMAL_H//