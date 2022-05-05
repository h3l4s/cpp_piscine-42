#include <iostream>
#include "Zombie.hpp"

int main( void ){
	std::cout << "Creating a zombieHorde" << std::endl << std::endl << std::endl;
	Zombie *zombieH = zombieHorde(10, "bud");
	std::cout << "asking them to announce theirselves" << std::endl << std::endl;
	for(int i = 0; i < 10; i++)
		zombieH[i].announce();
	std::cout << std::endl << std::endl << "killing them" << std::endl << std::endl;
	delete [] zombieH;
}