#ifndef ITER_H
# define ITER_H

template<typename T>
void iter(T *array, int length, void(*toExec)(T const &)){
	for(int i = 0;i < length;i++)
		toExec(array[i]);
}

#endif //ITER_H//