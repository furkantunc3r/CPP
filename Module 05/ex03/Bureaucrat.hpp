#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "customException.hpp"

class Form;

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
	void signForm(Form& f) const;
	void executeForm(Form const & form);
};

class Bureaucrat::GradeTooHighException : public customException {

public :
	GradeTooHighException(const char* msg) : customException(msg) {}
};

class Bureaucrat::GradeTooLowException : public customException {

public :
	GradeTooLowException(const char* msg) : customException(msg) {}
};

std::ostream& operator<<(std::ostream& obj, const Bureaucrat& b);

#endif