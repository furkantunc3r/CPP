#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(std::string name){
	this->name = name;
}

Zombie::~Zombie(){
	std::cout << this->name << " Destructor" << std::endl;
}

void	Zombie::setName(std::string name){
	this->name = name;
}

void	Zombie::announce(void){
	std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void	randomChump(std::string name){
	Zombie	aZombie(name);
	aZombie.announce();
}

Zombie*	newZombie(std::string name){
	Zombie	*aZombie = new Zombie(name);
	return (aZombie);
}