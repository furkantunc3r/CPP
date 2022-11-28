#include "Intern.hpp"

Intern::Intern()
{

}
 
Intern::Intern(const Intern& i)
{
    *this = i;
}

Intern& Intern::operator=(const Intern& i)
{
    (void)i;
    return *this;
}

Intern::~Intern()
{

}

Form* Intern::makeForm(std::string formName, std::string targetName)
{
    Form *form_;
    int i;
    std::string Forms[3] = {"presidental pardon", "robotomy request", "shrubbery creation"};
    for (i = 0 ; i < 3 ; i++)
    {
        if (Forms[i] == formName)
            break;
    }
    switch (i)
    {
    case 0:
        form_ = new PresidentalPardonForm(targetName);
        break;
    case 1:
        form_ = new RobotomyRequestForm(targetName);
        break;
    case 2:
        form_ = new ShrubberyCreationForm(targetName);
        break;
    default:
        throw Form::GradeTooHighException("Form doesn't exist!!");
    }
    std::cout << "Intern creates " << formName << " form" << std::endl;
    return (form_);
}