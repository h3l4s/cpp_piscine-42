#ifndef WRONGCAT_H
# define WRONGCAT_H

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
	public:

		WrongCat(void);
		WrongCat(const WrongCat &src);
		~WrongCat(void);
		WrongCat &operator=(const WrongCat &src);
		virtual void makeSound(void)const ;
};

#endif //WRONGCAT_H//