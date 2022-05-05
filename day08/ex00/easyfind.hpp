#ifndef EASY_H
# define EASY_H

# include <list>
# include <iostream>
# include <string>
# include <algorithm>

template<typename T>
typename T::iterator easyfind(T &container, int tofind){
	typename T::iterator found = find(container.begin(), container.end(), tofind);
	if (found == container.end())
		return container.end();
	return found;
}

#endif //EASY_H