#include "RobotomyRequestForm.hpp"
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm(const std::string target_) : Form("Robotomy Request Form", false, 72, 45) {
    this->target = target_;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& r) : Form(r.getName(), r.getIsSigned(), r.getGToSign() , r.getGToExec()) {
    (void)r;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& r) {
    (void)r;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {

}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    Form::execute(executor);
    srand(time(NULL));
    std::cout << "BRRRRRRRRRR......CLICKCLICKCLIK......" << std::endl;
    int i = rand() % 100;
    if (i % 2 == 0)
        std::cout << this->target << " has been robotomized successfully." << std::endl;
    else
        std::cout << "robotomy failed!" << std::endl;
}