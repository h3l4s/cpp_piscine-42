#include "Span.hpp"

Span::Span(void):  _counter(0), _numbers(0), _storage(0){
	return;
}

Span::Span(unsigned int n): _counter(0), _numbers(0), _storage(n){
	return;
}

Span::Span(const Span & src): _counter(src._counter), _numbers(src._numbers), _storage(src._storage){
	return;
}

Span::~Span(void){
	return;
}

Span &Span::operator=(const Span & src){
	this->_storage = src._storage;
	this->_numbers = src._numbers;
	this->_counter = src._counter;
	return *this;
}

void Span::addNumber(int n){
	if(this->_counter < this->_storage)
	{
		this->_numbers.push_back(n);
		this->_counter++;
	}
	else
		throw std::out_of_range("error: storage already full");
	return;
}

int Span::shortestSpan(){
	if(this->_numbers.empty())
		throw std::runtime_error("error: class has no numbers registered yet");
	if(this->_counter < 2)
		throw std::runtime_error("error: class hasn't enough number to find the shortest span");
	int span;
	int newspan;
	int old;
	std::list<int>::iterator it;
	std::list<int>::iterator it2;
	std::list<int> newlist = this->_numbers;
	newlist.sort();
	it = newlist.begin();
	old = *it;
	it++;
	span = *it - old;
	for((void)it; it != newlist.end(); ++it){
		newspan = *it - old;
		if(newspan < span)
			span = newspan;
		old = *it;
	}
	return span;
}

int Span::longestSpan(){
	if(this->_numbers.empty())
		throw std::runtime_error("error: class has no numbers registered yet");
	if(this->_counter < 2)
		throw std::runtime_error("error: class hasn't enough number to find the longest span");
	std::list<int>::iterator it;
	std::list<int>::iterator it2;
	std::list<int> newlist = this->_numbers;
	newlist.sort();
	it = newlist.begin();
	it2 = newlist.end();
	it2--;
	return (*it2 - *it);
}

void Span::displayNumbers(){
	std::list<int>::iterator it;
	std::list<int> newlist = this->_numbers;
	std::cout<< "values in container:" << std::endl;
	for(it = newlist.begin(); it != newlist.end(); ++it){
		std::cout << *it << std::endl;
	}
}

void Span::displayNumbersFile(){
	std::list<int>::iterator it;
	std::list<int> newlist = this->_numbers;
	std::cout<< "values in container can be found in \"numbers\" file" << std::endl;
	std::ofstream ofs;
	ofs.open("numbers");
	for(it = newlist.begin(); it != newlist.end(); ++it){
		ofs << *it << std::endl;
	}
	ofs.close();
}

void Span::clearContainer(){
	this->_numbers.clear();
	this->_counter = 0;
}

void Span::randomFill(void){
	for(int i = 0; i < (int)this->_storage; i++)
			this->addNumber(rand());
}

void Span::fillRange(std::list<int>::iterator begin, std::list<int>::iterator end){
	std::list<int> temp(begin, end);
	if(temp.size() > this->spaceLeft())
		throw std::out_of_range("not enough space left in container");
	this->_numbers.insert(this->_numbers.end(), temp.begin(), temp.end());
}

unsigned int Span::spaceLeft(void){
	return (this->_storage - this->_numbers.size());
}