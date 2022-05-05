#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void){
	ScavTrap robot("robot");
	robot.attack("dog");
	robot.guardGate();
	robot.beRepaired(-11);
	FragTrap soldier("soldier");
	soldier.highFivesGuys();
	soldier.attack("ennemyPng");
	soldier.attack("soldier");
	soldier.takeDamage(30);
	std::cout << "soldier hp: " << soldier.getHitPoints() << std::endl;
	return 0;
}