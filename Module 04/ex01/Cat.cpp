#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat& a) {
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = a;
}

Cat& Cat::operator=(const Cat& a) {
	std::cout << "Cat Copy assignment operator called" << std::endl;
	this->type = a.type;
	this->brain = a.brain;
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

void Cat::makeSound() const{
	std::cout << "MEOWWWWW" << std::endl;
}

std::string Cat::getType() const {
	return this->type;
}