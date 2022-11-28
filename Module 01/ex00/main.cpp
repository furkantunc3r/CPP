#include "Zombie.hpp"

int	main(void){
	Zombie	aZombie("furkan");
	aZombie.announce();
	Zombie	aZombie2("apo");
	aZombie2.announce();
	Zombie	aZombie3("mete");
	aZombie3.announce();

	randomChump("42");
	Zombie	*aZombie4 = newZombie("Mali");
	aZombie4->announce();
	delete aZombie4;
}