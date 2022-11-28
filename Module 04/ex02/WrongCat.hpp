#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class wrongCat : public virtual wrongAnimal {

protected :
	std::string type;

public :
	wrongCat();
	wrongCat(const wrongCat& c);
	wrongCat& operator=(const wrongCat& c);
	virtual ~wrongCat();
	virtual void makeSound() const;
	std::string getType() const;
};

#endif