#include "WrongAnimal.hpp"

wrongAnimal::wrongAnimal() {
	std::cout << "wrongAnimal constructor called" << std::endl;
	this->type = "wrongAnimal";
}

wrongAnimal::wrongAnimal(const wrongAnimal& w) {
	std::cout << "wrongAnimal Copy constructor called" << std::endl;
	*this = w;
}

wrongAnimal& wrongAnimal::operator=(const wrongAnimal& w) {
	std::cout << "wrongAnimal Copy assignment operator called" << std::endl;
	this->type = w.type;
	return *this;
}

wrongAnimal::~wrongAnimal() {
	std::cout << "wrongAnimal destructor called" << std::endl;
}

void wrongAnimal::makeSound() const {
	std::cout << "wrongAnimal sound" << std::endl;
}

std::string wrongAnimal::getType() const {
	return this->type;
}