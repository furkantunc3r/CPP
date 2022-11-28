#include "Form.hpp"

Form::Form(const std::string name_, bool isSigned_, const unsigned int gToSign_, const unsigned int gToExec_) : name(name_), isSigned(isSigned_), gToSign(gToSign_), gToExec(gToExec_) {
    if (this->gToSign < 1 || this->gToExec < 1)
        throw Form::GradeTooHighException("Form grade too high!!");
    else if (this->gToSign > 150 || this->gToExec > 150)
        throw Form::GradeTooLowException("Form grade too low!!");
}

Form::Form(const Form& f) : name(f.name), isSigned(f.isSigned), gToSign(f.gToSign), gToExec(f.gToExec) {

}

Form& Form::operator=(const Form& f) {
    this->isSigned = f.isSigned;
    return *this;
}

Form::~Form() {
    
}

const std::string Form::getName() const {
    return this->name;
}

bool Form::getIsSigned() const {
    return this->isSigned;
}

unsigned int Form::getGToSign() const {
    return this->gToSign;
}

unsigned int Form::getGToExec() const {
    return this->gToExec;
}

std::ostream& operator<<(std::ostream& obj, const Form& f) {
    return obj << "form name: " << f.getName() << ", is signed: "<< f.getIsSigned() << ", required grade to sign: " << f.getGToSign() << ", required grade to execute: " << f.getGToExec();
}

void Form::beSigned(const Bureaucrat& b) {
    if (this->getGToSign() >= b.getGrade())
        this->isSigned = true;
    else
        throw Form::GradeTooLowException("");
}

void Form::execute(Bureaucrat const & executor) const {
    if (executor.getGrade() > this->getGToExec())
        throw Form::GradeTooLowException("Form grade too high to execute!!");
}