#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	
private :
	
	std::string		name;
	unsigned int	hp;
	unsigned int	ep;
	unsigned int	dmg;

public :

	ClapTrap();
	ClapTrap(std::string aName);
	ClapTrap(const ClapTrap& c);
	ClapTrap& operator=(const ClapTrap& f);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif