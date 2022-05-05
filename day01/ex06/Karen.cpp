#include "Karen.hpp"

Karen::Karen(void){
	return;
}

Karen::~Karen(void){
	return;
}

int Karen::whichLevel(std::string level)
{
	std::string levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	for (int i = 0; i < 4; i++)
	{
		if(level == levels[i])
			return i;
	}
	return -1;
}

void Karen::complain(std::string level)
{
	int lvl = whichLevel(level);
	switch(lvl)
	{
		case -1:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break;
		default:
			std::cout << "error: unknown error happened during execution." << std::endl;
			break;
	}
	return;
}

void Karen::debug(void){
	std::cout << "debug called" << std::endl;
}

void Karen::info(void){
	std::cout << "info called" << std::endl;
}
void Karen::warning(void){
	std::cout << "warning called" << std::endl;
}
void Karen::error(void){
	std::cout << "error called" << std::endl;
}