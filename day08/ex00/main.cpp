#include "easyfind.hpp"

int main(){
	std::list<int> d;
	int i = 0;
	int tofind = 0;
	
	while (i < 10){
		d.push_back(i);
		i++;
	}
	std::cout << "container:" << std::endl;
	std::list<int>::iterator temp;
	for(temp = d.begin(); temp != d.end(); ++temp){
			std::cout << *temp << " ";
	}
	std::cout << std::endl;
	std::list<int>::iterator it;
	std::cout << "finding: " << tofind << std::endl;
	it = easyfind(d, tofind);
	if(it == d.end())
		std::cout << tofind << " wasn't found in list" << std::endl;
	else
		std::cout << tofind << " found in position: " << *it << std::endl;
	tofind = 10;
	std::cout << "finding: " << tofind << std::endl;
	it = easyfind(d, tofind);
	if(it == d.end())
		std::cout << tofind << " wasn't found in list" << std::endl;
	else
		std::cout << tofind << " found in position: " << *it << std::endl;
	tofind = 7;
	std::cout << "finding: " << tofind << std::endl;
	it = easyfind(d, tofind);
	if(it == d.end())
		std::cout << tofind << " wasn't found in list" << std::endl;
	else
		std::cout << tofind << " found in position: " << *it << std::endl;
	return (0);
}
