#ifndef ZOMBIE_H
# define ZOMBIE_H

class Zombie{
	public:

		Zombie(std::string name);
		~Zombie(void);

		void announce(void)const;
	
	private:
		std::string _name;
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif //ZOMBIE_H//