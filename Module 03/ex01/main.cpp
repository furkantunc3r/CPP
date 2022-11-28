#include "ScavTrap.hpp"

int main(void) {
	ScavTrap sp("Ninju");
	
	std::cout << "----" << std::endl;

	sp.attack("Handsome Jack");
	sp.takeDamage(2);
	sp.beRepaired(5);
	sp.guardGate();

	std::cout << "----" << std::endl;
	
	return 0;
}