#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public virtual Animal {

private :
	Brain* brain;

public :
	Dog();
	Dog(const Dog& d);
	Dog& operator=(const Dog& d);
	~Dog();
	void makeSound() const;
	std::string getType() const;
};

#endif
