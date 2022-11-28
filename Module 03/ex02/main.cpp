#include "FragTrap.hpp"

int main(void) {

	FragTrap fp("Cali");

	std::cout << "-------" << std::endl;

	fp.highFiveGuys();
	fp.attack("Bouncing bob");

	std::cout << "-------" << std::endl;
	
	return 0;
}