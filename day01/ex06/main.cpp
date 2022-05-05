#include "Karen.hpp"

int main(int ac, char **av){
	Karen karen;
	if (ac != 2)
	{
		std::cerr << "error: too many/few arguments." << std::endl;
		return 1;
	}
	std::string temp = av[1];
	karen.complain(temp);
	return 0;
}