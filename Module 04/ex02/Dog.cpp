#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog& d) {
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = d;
}

Dog& Dog::operator=(const Dog& d) {
	std::cout << "Dog Copy assignment operator called" << std::endl;
	this->type = d.type;
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

void Dog::makeSound() const{
	std::cout << "HRRRRRRRRR......" << std::endl;
}

std::string Dog::getType() const{
	return this->type;
}