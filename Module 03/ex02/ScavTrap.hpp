#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

private :
	unsigned int isGuard;

public :

	ScavTrap();
	ScavTrap(std::string aName);
	ScavTrap(const ScavTrap& s);
	ScavTrap& operator=(const ScavTrap& s);
	~ScavTrap();

	void attack(const std::string& target);
	void guardGate();
};

#endif