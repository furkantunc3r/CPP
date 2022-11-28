#include "WrongCat.hpp"

wrongCat::wrongCat() {
	std::cout << "wrongCat constructor called" << std::endl;
	this->type = "wrongCat";
}

wrongCat::wrongCat(const wrongCat& c) {
	*this = c;
}

wrongCat& wrongCat::operator=(const wrongCat& c) {
	this->type = c.type;
	return *this;
}

wrongCat::~wrongCat() {
	std::cout << "wrongCat destructor called" << std::endl;
}

void wrongCat::makeSound() const {
	std::cout << "BEEEEEEEEEP" << std::endl;
}

std::string wrongCat::getType() const {
	return this->type;
}