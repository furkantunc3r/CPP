#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap Def constructor called" << std::endl;
	this->name = "Chump";
	this->hp = 100;
	this->ep = 100;
	this->dmg = 30;
}

FragTrap::FragTrap(std::string aName) {
	std::cout << "FragTrap Param constructor called" << std::endl;
	this->name = aName;
	this->hp = 100;
	this->ep = 100;
	this->dmg = 30;
}

FragTrap::FragTrap(const FragTrap& f) {
	*this = f;
}

FragTrap& FragTrap::operator=(const FragTrap& f) {
	this->dmg = f.dmg;
	this->ep = f.ep;
	this->hp = f.ep;
	this->name = f.name;
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFiveGuys() {
	std::cout << "FragTrap " << this->name << ": TIME FOR A HIGH FIVE GUYSSSS :))" << std::endl;
}
