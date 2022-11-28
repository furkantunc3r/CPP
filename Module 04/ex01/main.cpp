#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal *animals[10];

	for (int i = 0; i < 10; i++)
	{
		if (i <= 4)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
		animals[i]->makeSound();
	}
	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
	}

	// return 0;
	// {
	// 	const Animal *j = new Dog();
	// 	const Animal *i = new Cat();
	// 	delete j; // should not create a leak
	// 	delete i;
	// 	// return 0;
	// }

	std::system("leaks catdog");
}