#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>

class Zombie{
	public:

		Zombie(void);
		~Zombie(void);

		void announce(void)const;
		std::string getName(void)const;
		bool setName(std::string newName);
	
	private:
		std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif //ZOMBIE_H//