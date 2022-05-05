#include "Cat.hpp"
#include "Dog.hpp"

int main(void){
	Animal *array = new Animal[100];

	for(int i = 0; i < 50; i++)
		array[i] = Dog();
	for(int i = 50; i < 100; i++)
		array[i] = Cat();
	delete [] array;

	return 0;
}