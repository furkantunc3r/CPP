#include "Zombie.hpp"

int	main(void){
	Zombie	*zombies;
	zombies = zombieHorde(10, "KELLE");
	delete[] zombies;
	return (0);
}