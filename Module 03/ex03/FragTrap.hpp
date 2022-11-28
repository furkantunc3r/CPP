#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap {
	
public :

	FragTrap();
	FragTrap(std::string aName);
	FragTrap(std::string aName, int hp, int ep, int dmg);
	FragTrap(const FragTrap& f);
	FragTrap& operator=(const FragTrap& f);
	~FragTrap();

	void highFiveGuys(void);
};

#endif