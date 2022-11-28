#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA{

private:
	Weapon	*weapon;
	std::string name;
public:
	HumanA();
	~HumanA();
	HumanA(std::string aName, Weapon &aWeapon);
	void attack();
	void setName(std::string aName);
};

#endif