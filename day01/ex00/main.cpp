#include <iostream>
#include "Zombie.hpp"
int	main( void )
{
	std::cout << "creating a zombie \"manually\"" << std::endl;
	{
		Zombie	selfMade("selfMade");
		selfMade.announce();
	}
	std::cout << std::endl << "creating a zombie with newZombie()" << std::endl;
	{
		Zombie	*functionMade = newZombie("functionMade");
		functionMade->announce();

		delete functionMade;
	}
	{
		std::cout << std::endl << "creating a zombie with randomChump()" << std::endl;
		randomChump("randomZ");
	}
}