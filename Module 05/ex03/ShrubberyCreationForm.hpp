#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public virtual Form {

private :
    std::string target;

public :
    ShrubberyCreationForm(const std::string target_);
    ShrubberyCreationForm(const ShrubberyCreationForm& s);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& s);
    ~ShrubberyCreationForm();
    void execute(Bureaucrat const & executor) const;
};

#endif