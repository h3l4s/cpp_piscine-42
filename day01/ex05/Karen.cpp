#include "Karen.hpp"

Karen::Karen(void){
	return;
}

Karen::~Karen(void){
	return;
}

void Karen::complain(std::string level)
{
	void	(Karen::*complaintFunction[])( void ) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};
	std::string complaintLevels[] = {
		"debug",
		"info",
		"warning",
		"error"
	};
	for(int i = 0; i < 4; i++)
	{
		void(Karen::*choosenComplaint)(void) = complaintFunction[i];
		if(level == complaintLevels[i])
		{
			(this->*choosenComplaint)();
			return;
		}
	}
	std::cout << "invalid complaint asked" << std::endl;
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