#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "customException.hpp"

class Bureaucrat {

private :
	std::string const name;
	unsigned int grade;

public :
	class GradeTooHighException;
	class GradeTooLowException;
	Bureaucrat(std::string aName, unsigned int i);
	Bureaucrat(const Bureaucrat& b);
	Bureaucrat& operator=(const Bureaucrat& b);
	~Bureaucrat();
	std::string getName() const;
	unsigned int getGrade() const;
	void incGrade();
	void decGrade();
};

class Bureaucrat::GradeTooHighException : public customException {

public :
	GradeTooHighException() : customException("Bureaucrat Grade Too High!!") {}
};

class Bureaucrat::GradeTooLowException : public customException {

public :
	GradeTooLowException() : customException("Bureaucrat Grade Too Low!!") {}
};

std::ostream& operator<<(std::ostream& obj, const Bureaucrat& b);

#endif