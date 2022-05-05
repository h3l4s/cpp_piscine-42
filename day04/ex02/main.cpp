#include "Cat.hpp"
#include "Dog.hpp"

int main(void){
	
	AAnimal* dog = new Dog();
	AAnimal* cat = new Cat();

	dog->makeSound();
	std::cout << "type: " << dog->getType() << std::endl;
	cat->makeSound();
	std::cout << "type: " << cat->getType() << std::endl;

	delete dog;
	delete cat;

	return 0;
}