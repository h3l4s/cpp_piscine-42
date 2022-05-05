#include "Span.hpp"
#include <time.h>
#include <vector>

int main(void){
	Span temp(10);
	std::cout << "testing with empty container to check error management" << std::endl << std::endl;
	try{
		std::cout << "testing longestSpan function with an empty container" << std::endl;
		temp.longestSpan();
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try{
		std::cout << "testing longestSpan function with not enough value in container" << std::endl;
		temp.addNumber(100);
		temp.longestSpan();
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "now testing wiht random values" << std::endl << std::endl;
	try{
		std::cout << "testing basic inputs" << std::endl;
		temp.addNumber(10);
		temp.addNumber(40);
		temp.addNumber(30);
		temp.displayNumbers();
		std::cout << "shortest span: " << temp.shortestSpan() << std::endl;
		std::cout << "longest span: " << temp.longestSpan() << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "clearing container" << std::endl << std::endl;
	temp.clearContainer();
	Span temp2(12000);
	try{
		srand(time(NULL));
		std::cout << "testing strong inputs" << std::endl;
		temp2.randomFill();
		temp2.displayNumbersFile();
		std::cout << "shortest span: " << temp2.shortestSpan() << std::endl;
		std::cout << "longest span: " << temp2.longestSpan() << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::list<int>	vect;
		temp.addNumber(10);
		temp.addNumber(40);
		temp.addNumber(30);
		vect.push_back(25);
		vect.push_back(5);
		vect.push_back(12);
		vect.push_back(90);
		vect.push_back(-2);
		temp.fillRange(vect.begin(), vect.end());
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}