#include "HumanA.hpp"

HumanA::HumanA(){
	
}

HumanA::~HumanA(){

}

HumanA::HumanA(std::string aName, Weapon &aWeapon){
	this->name = aName;
	this->weapon = &aWeapon;
}

void HumanA::setName(std::string aName){
	this->name = aName;
}

void HumanA::attack(){
	std::cout << this->name << " attack with their weapon " << this->weapon->getType() << std::endl;
}