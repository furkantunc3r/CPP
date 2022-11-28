#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Chump"), hp(10), ep(10), dmg(0) {
	std::cout << "ClapTrap Def Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string aName) : name(aName), hp(10), ep(10), dmg(0) {
	std::cout << "ClapTrap Param Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& c) {
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = c;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &c) {
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	this->name = c.name;
	this->hp = c.hp;
	this->ep = c.ep;
	this->dmg = c.dmg;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	
	if ((int)this->ep <= 0 || (int)this->hp <= 0) {
		std::cout << "I am spent!" << std::endl;
		return ;
	}
	
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->dmg << " points of damage!" << std::endl;
	this->ep -= 1;
}

void ClapTrap::takeDamage(unsigned int amount) {
	
	if ((int)this->ep <= 0 || (int)this->hp <= 0) {
		std::cout << "I am spent!" << std::endl;
		return ;
	}

	std::cout << "ClapTrap " << this->name << " takes " << amount << " damage!" << std::endl;
	this->hp -= amount;
	if ((int)this->hp <= 0)
		std::cout << "ClapTrap " << this->name << " died!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {

	if ((int)this->ep <= 0 || (int)this->hp <= 0) {
		std::cout << "I am spent!" << std::endl;
		return ;
	}
	
	std::cout << "ClapTrap " << this->name << " repairs " << amount << " hp!" << std::endl;
	this->hp += amount;
	this->ep -= 1;
}