#include "PresidentalPardonForm.hpp"

PresidentalPardonForm::PresidentalPardonForm(const std::string target_) : Form("Presidental Pardon Form", false, 25, 5) {
    this->target = target_;
}

PresidentalPardonForm::PresidentalPardonForm(const PresidentalPardonForm& p) : Form(p.getName(), p.getIsSigned(), p.getGToSign() , p.getGToExec()) {
    (void)p;
}

PresidentalPardonForm& PresidentalPardonForm::operator=(const PresidentalPardonForm& p) {
    (void)p;
    return *this;
}

PresidentalPardonForm::~PresidentalPardonForm() {

}

void PresidentalPardonForm::execute(Bureaucrat const & executor) const {
    Form::execute(executor);
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}