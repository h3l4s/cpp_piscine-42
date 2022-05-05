#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <iostream>
#include <stack>
#include <algorithm>
#include <iterator>

template<typename T>
class MutantStack: public std::stack<T>{
    public:

        MutantStack<T>(void){ return; };
        MutantStack<T>(const MutantStack & src){ this->c = src.c; };
        ~MutantStack<T>(void){ return; };

        MutantStack<T> &operator=(const MutantStack & src){ this->c = src.c; return *this; };

        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin(){ return(this->c.begin());};
        iterator end(){ return(this->c.end());};
};

# endif //MUTANTSTACK_H