#include "Bureaucrat.hpp"
#include "customException.hpp"

Bureaucrat::Bureaucrat(std::string aName, unsigned int i) : name(aName), grade(i) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
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
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decGrade() {
    this->grade++;
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& obj, const Bureaucrat& b){
    return obj << "bureaucrat name: " << b.getName() << ", bureaucrat grade: " << b.getGrade();
}