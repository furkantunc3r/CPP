#include "HumanB.hpp"

HumanB::HumanB(){
	
}

HumanB::~HumanB(){

}

HumanB::HumanB(std::string aName){
	this->name = aName;
}

void HumanB::setWeapon(Weapon &aWeapon){
	this->weapon = &aWeapon;
}

void HumanB::setName(std::string aName){
	this->name = aName;
}

void HumanB::attack(){
	if (this->weapon->getType().empty())
		std::cout << "No weapon for B!" << std::endl;
	else
		std::cout << this->name << " attack with their weapon " << this->weapon->getType() << std::endl;
}