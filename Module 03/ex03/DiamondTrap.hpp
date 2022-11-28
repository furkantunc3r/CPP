#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"

class DiamondTrap : public virtual FragTrap, public virtual ScavTrap {

private :
	std::string name;

public :
	DiamondTrap();
	DiamondTrap(std::string aName);
	DiamondTrap(const DiamondTrap& d);
	DiamondTrap& operator=(const DiamondTrap& d);
	~DiamondTrap();
	void whoAmI();
};

#endif