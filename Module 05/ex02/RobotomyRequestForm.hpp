#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public virtual Form {

private :
    std::string target;
    
public :
    RobotomyRequestForm(const std::string target_);
    RobotomyRequestForm(const RobotomyRequestForm& r);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& r);
    ~RobotomyRequestForm();
    void execute(Bureaucrat const & executor) const;
};

#endif