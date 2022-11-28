#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string aName, unsigned int i) : name(aName), grade(i) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException("Bureaucrat grade too high!!");
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException("Bureaucrat grade too low!!");
}

Bureaucrat::Bureaucrat(const Bureaucrat& b) : name(b.name), grade(b.grade) {

}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& b) {
    this->grade = b.grade;
    return *this;
}

Bureaucrat::~Bureaucrat() {

}

std::string Bureaucrat::getName() const {
    return this->name;
}

unsigned int Bureaucrat::getGrade() const {
    return this->grade;
}

void Bureaucrat::incGrade() {
    this->grade--;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException("Bureaucrat grade too high!!");
}

void Bureaucrat::decGrade() {
    this->grade++;
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException("Bureaucrat grade too low!!");
}

std::ostream& operator<<(std::ostream& obj, const Bureaucrat& b) {
    return obj << "bureaucrat name: " << b.getName() << ", bureaucrat grade: " << b.getGrade();
}

void Bureaucrat::signForm(Form& f) const {
    // void *p = NULL;
    // if (&f == p)
    //     throw Form::GradeTooHighException("Form doesn't exist!!");
    if (f.getIsSigned() == true)
        throw Form::GradeTooHighException("Form already signed!!");
    if (f.getGToSign() < this->getGrade())
        std::cout << this->getName() << " couldn't sign " << f.getName() << " because form grade is too high!!";
    f.beSigned(*this);
    if (f.getIsSigned() == true)
        std::cout << this->getName() << " signed " << f.getName() << std::endl;
 }

 void Bureaucrat::executeForm(Form const & form) {
    form.execute(*this);
    std::cout << this->getName() << " executed " << form.getName() << std::endl;
 }