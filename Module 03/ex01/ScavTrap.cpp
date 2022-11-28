#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap Def Constructor called" << std::endl;
	this->name = "Chump";
	this->hp = 100;
	this->ep = 50;
	this->dmg = 20;
	this->isGuard = 0;
}

ScavTrap::ScavTrap(std::string aName) {
	std::cout << "ScavTrap Param Constructor called" << std::endl;
	this->name = aName;
	this->hp = 100;
	this->ep = 50;
	this->dmg = 20;
	this->isGuard = 0;
}

ScavTrap::ScavTrap(const ScavTrap& s) {
	*this = s;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& s) {
	this->name = s.name;
	this->hp = s.hp;
	this->ep = s.ep;
	this->dmg = s.dmg;
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	
	if ((int)this->ep <= 0 || (int)this->hp <= 0) {
		std::cout << "I am spent!" << std::endl;
		return ;
	}
	
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->dmg << " points of damage!" << std::endl;
	this->ep -= 1;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode!" << std::endl;
	this->isGuard = 1;
}