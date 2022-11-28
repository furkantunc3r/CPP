#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Chump_clap_name") {
	std::cout << "DiamondTrap Def constructor called" << std::endl;
	this->name = "Chump";
	ClapTrap::name = "Chump_clap_name";
	this->hp = 100;
	this->ep = 50;
	this->dmg = 30;
}

DiamondTrap::DiamondTrap(std::string aName): FragTrap(aName + "_clap_name")
{
	std::cout << "DiamondTrap Param constructor called" << std::endl;
	this->name = aName;
	ClapTrap::name = "Chump_clap_name";
	this->hp = 100;
	this->ep = 50;
	this->dmg = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap& d) {
	*this = d;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& d) {
	this->dmg = d.dmg;
	this->ep = d.ep;
	this->hp = d.ep;
	this->hp = d.hp;
	this->name = d.name;
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << "HP " << this->hp << std::endl;
	std::cout << "EP " << this->ep << std::endl;
	std::cout << "DMG " << this->dmg << std::endl;
	std::cout << this->name << std::endl;
	std::cout << ClapTrap::name << std::endl;
}