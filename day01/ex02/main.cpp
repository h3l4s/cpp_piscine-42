#include <iostream>

int main(void){
	std::string str = "HI THIS IS BRAIN";
	std::string* strPTR = &str;
	std::string &strREF = str;
	std::cout << "string address in memory = " << &str << std::endl;
	std::cout << "pointer address in memory = " << strPTR << std::endl;
	std::cout << "reference address in memory = " << &strREF << std::endl;
	std::cout << "display string: " << str << std::endl;
	std::cout << "display string using pointer: " << *strPTR << std::endl;
	std::cout << "display string using reference: " << strREF << std::endl;
}