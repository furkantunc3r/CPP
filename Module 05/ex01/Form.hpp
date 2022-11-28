#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "customException.hpp"
#include "Bureaucrat.hpp"

class Form {

private :
    const std::string name;
    bool isSigned;
    const unsigned int gToSign;
    const unsigned int gToExec;

public :
    class GradeTooHighException;
    class GradeTooLowException;
    Form(const std::string name_, bool isSigned_, const unsigned int gToSign_, const unsigned int gToExec_);
    Form(const Form& f);
    Form& operator=(const Form& f);
    ~Form();
    const std::string getName() const;
    bool getIsSigned() const;
    unsigned int getGToSign() const;
    unsigned int getGToExec() const;
    void beSigned(const Bureaucrat& b);
    
};

class Form::GradeTooHighException : public customException {

public :
    GradeTooHighException(const char* msg) : customException(msg) {}
};

class Form::GradeTooLowException : public customException {

public :
    GradeTooLowException(const char* msg) : customException(msg) {}
};

std::ostream& operator<<(std::ostream& obj, const Form& f);

#endif