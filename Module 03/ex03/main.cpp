#include "DiamondTrap.hpp"

int main(void) {
	
	DiamondTrap dp("Hammerlock");

	std::cout << "-------" << std::endl;
	
	dp.attack("Serena");
	dp.whoAmI();

	std::cout << "-------" << std::endl;
	
	return 0;
}