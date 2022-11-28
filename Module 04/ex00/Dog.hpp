#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public virtual Animal {

public :
	Dog();
	Dog(const Dog& d);
	Dog& operator=(const Dog& d);
	~Dog();
	void makeSound() const;
	std::string getType() const;
};

#endif
