#include "B.hpp"
#include "C.hpp"
#include "A.hpp"
#include <stdlib.h>

typedef struct s_data{
	int num;
	Base *dataType;
}	t_data;

Base * generate(void){
	srand(time(NULL));
	t_data data[] = {
		{0, new A()},
		{1, new B()},
		{2, new C()},
		{3, NULL}
	};
	int i = (std::rand() % 3);
	for(int i2 = 0;i2 < 3;i2++)
	{
		if(i2 != i && data[i2].dataType)
			delete(data[i2].dataType);
	}
	return (data[i].dataType);
}

void identify(Base *p){
	Base *temp;
	if((temp = dynamic_cast<A*>(p)))
		std::cout << "A" << std::endl;
	if((temp = dynamic_cast<B*>(p)))
		std::cout << "B" << std::endl;
	if((temp = dynamic_cast<C*>(p)))
		std::cout << "C" << std::endl;
}

void identify(Base & p){
	try{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch(std::exception &e){
		(void)e;
	}
	try{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch(std::exception &e){
		(void)e;
	}
	try{
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch(std::exception &e){
		(void)e;
	}
	return;
}

int main(void){
	Base *temp;
	temp = generate();
	std::cout << "temp using pointer: ";
	identify(temp);
	Base &temp2 = *temp;
	std::cout << "temp using reference: ";
	identify(temp2);
	delete temp;
}