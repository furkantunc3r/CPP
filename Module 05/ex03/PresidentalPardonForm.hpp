#ifndef PRESIDENTALPARDONFORM_HPP
#define PRESIDENTALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class PresidentalPardonForm : public virtual Form {

private :
    std::string target;

public :
    PresidentalPardonForm(const std::string target_);
    PresidentalPardonForm(const PresidentalPardonForm& p);
    PresidentalPardonForm& operator=(const PresidentalPardonForm& p);
    ~PresidentalPardonForm();
    void execute(Bureaucrat const & executor) const;
};

#endif