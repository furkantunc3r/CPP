#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "PresidentalPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
public :
    Intern();
    Intern(const Intern& i);
    Intern& operator=(const Intern& i);
    ~Intern();
    Form* makeForm(std::string formName, std::string targetName);
};

#endif