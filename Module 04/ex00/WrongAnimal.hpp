#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class wrongAnimal {

protected :
	std::string type;

public :
	wrongAnimal();
	wrongAnimal(const wrongAnimal& w);
	wrongAnimal& operator=(const wrongAnimal& w);
	virtual ~wrongAnimal();
	virtual void makeSound() const;
	virtual std::string getType() const;
};

#endif