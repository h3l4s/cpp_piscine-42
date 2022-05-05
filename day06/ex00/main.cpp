#include "Conversion.hpp"

int main(int ac, char **av){
	if(ac != 2)
	{
		std::cout << "error: too few/many arguments" << std::endl;
		return (1);
	}
	Conversion inst;
	std::string arg = av[1];
	float treat;
	try{
		treat = inst.makeTreatable(arg);
	}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;
		return 1;
	}
	try{
		char c = inst.toChar(treat);
		std::cout << "char: " << "'" << c << "'" << std::endl;
	}
	catch(std::exception & e){
		std::cout << "char: " << e.what() << std::endl;
	}
	try{
		int c = inst.toInt(treat);
		if(std::atoi(arg.c_str()) == -1)
			throw Conversion::invalidFloat();
		if(std::atoi(arg.c_str()) == std::numeric_limits<int>::max())
			c = std::atoi(arg.c_str());
		std::cout << "int: " << c << std::endl;
	}
	catch(std::exception & e){
		std::string temp = e.what();
		if(temp == "stoi")
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << e.what() << std::endl;
	}
	try{
		float c = inst.toFloat(treat);
		if(c - (int)c != (float)0)
			std::cout << "float: " << c << "f"<< std::endl;
		else
			std::cout << "float: " << c << ".0f" << std::endl;
	}
	catch(std::exception & e){
		std::cout << "float: " << e.what() << std::endl;
	}
	try{
		double c = inst.toDouble(treat);
		if(c - (int)c != (double)0)
			std::cout << "double: " << c << std::endl;
		else
			std::cout << "double: " << c << ".0" << std::endl;
	}
	catch(std::exception & e){
		std::cout << "double: " << e.what() << std::endl;
	}
	return (0);
}