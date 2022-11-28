#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& b) {
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = b;
}

Brain& Brain::operator=(const Brain& b) {
	std::cout << "Brain Copy assignment operator called" << std::endl;
	for (int i = 0 ; i <= 100 ; i++) {
		this->ideas[i] = b.ideas[i];
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}