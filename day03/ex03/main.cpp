#include <iostream>
#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

int    main(void)
{
    {
		std::cout << "Testing DiamondTrap class, should have 20 attackDamage, 50 energyPoints and 100 hitPoints" << std::endl << std::endl;
		DiamondTrap diamond("diamond");

		diamond.attack("Handsome Jack");
		std::cout << "attackDamage: " << diamond.getAttackDamage() << " hitPoints: " << diamond.getHitPoints() << " EnergyPoints: " << diamond.getEnergyPoints() << std::endl;
		diamond.takeDamage(6);
		diamond.beRepaired(4);
		diamond.takeDamage(3);
		diamond.guardGate();
		diamond.highFivesGuys();
		diamond.whoAmI();
		diamond.beRepaired(8);
		diamond.takeDamage(17);
	}
	std::cout << "----------------------------------------" << std::endl;
	{
		std::cout << "Testing FragTrap class, should have 30 attackDamage, 100 energyPoints and 100 hitPoints" << std::endl << std::endl;
		FragTrap frag("frag");

		frag.attack("Handsome Jack");
		std::cout << "attackDamage: " << frag.getAttackDamage() << " hitPoints: " << frag.getHitPoints() << " EnergyPoints: " << frag.getEnergyPoints() << std::endl;
		frag.takeDamage(6);
		frag.beRepaired(4);
		frag.takeDamage(3);
		frag.highFivesGuys();
		frag.beRepaired(8);
		frag.takeDamage(17);
	}
	std::cout << "----------------------------------------" << std::endl;
	{
		std::cout << "Testing ScavTrap class, should have 20 attackDamage, 50 energyPoints and 100 hitPoints" << std::endl << std::endl;
		ScavTrap sc4vtp("sc4vtp");

		sc4vtp.attack("Handsome Jack");
		std::cout << "attackDamage: " << sc4vtp.getAttackDamage() << " hitPoints: " << sc4vtp.getHitPoints() << " EnergyPoints: " << sc4vtp.getEnergyPoints() << std::endl;
		sc4vtp.takeDamage(6);
		sc4vtp.beRepaired(4);
		sc4vtp.takeDamage(3);
		sc4vtp.guardGate();
		sc4vtp.beRepaired(8);
		sc4vtp.takeDamage(17);
	}
	std::cout << "----------------------------------------" << std::endl;
	{
		std::cout << "Testing ClapTrap class, should have 0 attackDamage, 10 energyPoints and 10 hitPoints" << std::endl << std::endl;
		ClapTrap cl4ptp("cl4ptp");

		cl4ptp.attack("Handsome Jack");
		std::cout << "attackDamage: " << cl4ptp.getAttackDamage() << " hitPoints: " << cl4ptp.getHitPoints() << " EnergyPoints: " << cl4ptp.getEnergyPoints() << std::endl;
		cl4ptp.takeDamage(6);
		cl4ptp.beRepaired(4);
		cl4ptp.takeDamage(3);
		cl4ptp.beRepaired(8);
		cl4ptp.takeDamage(17);
	}
}