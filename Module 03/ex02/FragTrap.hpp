#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap {
	
public :

	FragTrap();
	FragTrap(std::string aName);
	FragTrap(const FragTrap& f);
	FragTrap& operator=(const FragTrap& f);
	~FragTrap();

	void highFiveGuys(void);
};

#endif