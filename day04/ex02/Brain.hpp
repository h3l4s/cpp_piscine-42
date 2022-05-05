#ifndef BRAIN_H
# define BRAIN_H

#include <string>
#include <iostream>

class Brain{
	public:

		Brain(void);
		Brain(const Brain &src);
		~Brain(void);

		Brain &operator=(const Brain &src);
		std::string ideas[100];

};

#endif //BRAIN_H