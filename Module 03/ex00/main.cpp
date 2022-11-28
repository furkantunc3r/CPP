#include "ClapTrap.hpp"

int main(void) {
	ClapTrap cp("Bob");
	ClapTrap cp2("Sparrow");
	
	cp.attack("Handsome Jack");
	cp.takeDamage(2);
	cp.beRepaired(5);
	std::cout << "-----" << std::endl;
	cp2.attack("Banglore");
	cp2.takeDamage(11);
	cp2.beRepaired(5);

	return 0;
}