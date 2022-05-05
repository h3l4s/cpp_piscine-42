#include "iter.hpp"

#include <iostream>
#include <string>

template<typename T>
void test(T &thing){
	std::cout << "value: " << thing << std::endl;
	return;
}

int main( void ) {
	int tab[5] = {0,1,2,3,4};
	std::string stab[5] = {"s0", "s1", "s2", "s3", "s4"};
	std::cout << std::endl;
	std::cout << "testing with an int array:" << std::endl;
	::iter(tab, 5, &test);
	std::cout << std::endl;
	std::cout << "testing with an string array:" << std::endl;
	::iter(stab, 5, &test);
	return 0;
}
