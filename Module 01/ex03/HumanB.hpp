#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB{

private:
	Weapon	*weapon;
	std::string name;
public:
	HumanB();
	~HumanB();
	HumanB(std::string aName);
	void attack();
	void setName(std::string aName);
	void setWeapon(Weapon &aWeapon);
};

#endif