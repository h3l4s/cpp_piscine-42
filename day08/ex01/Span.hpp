#ifndef SPAN_H
# define SPAN_H

# include <list>
# include <algorithm>
# include <iostream>
# include <fstream>

class Span{
	public:

		Span(void);
		Span(unsigned int n);
		Span(const Span & src);
		~Span(void);

		Span &operator=(const Span &src);
		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
		void displayNumbers();
		void displayNumbersFile();
		void clearContainer();
		void fillRange(std::list<int>::iterator begin, std::list<int>::iterator end);
		void randomFill(void);
		unsigned int spaceLeft(void);
	private:

		unsigned int _counter;
		std::list<int> _numbers;
		unsigned int _storage;
};

#endif //SPAN_H