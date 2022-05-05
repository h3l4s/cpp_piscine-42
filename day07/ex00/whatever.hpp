#ifndef WHATEVER_H
# define WHATEVER_H

template<typename T>
void swap(T &a, T &b){
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
const T &min(T const &a, T const &b){
	return(a < b ? a : b);
}

template<typename T>
const T &max(T const &a, T const &b){
	return(a > b ? a : b);
}

#endif //WHATEVER_H//