#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal constructor called" << std::endl;
	this->type = "pleb";
}

Animal::Animal(const Animal& a) {
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = a;
}

Animal& Animal::operator=(const Animal& a) {
	std::cout << "Animal Copy assignment operator called" << std::endl;
	this->type = a.type;
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const{
	return ;
}

std::string Animal::getType() const{
	return this->type;
}