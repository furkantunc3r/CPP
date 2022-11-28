#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target_) : Form("ShrubberyCreationForm", false, 145, 137) {
    this->target = target_;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& s) : Form(s.getName(), s.getIsSigned(), s.getGToSign() , s.getGToExec()) {
    (void)s;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& s) {
    (void)s;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    Form::execute(executor);
    std::ofstream file;
    file.open(this->target + "_shrubbery");
    file <<"       _-_       "<< std::endl;
    file <<"    /~~   ~~\\    "<< std::endl;
    file <<" /~~         ~~\\  "<< std::endl;
    file <<"{               }" << std::endl;
    file <<" \\  _-     -_  /  "<< std::endl;
    file <<"    ~  \\ /  ~   "<< std::endl;
    file <<"       | |  "<< std::endl;
    file <<"       | |"<< std::endl;
    file <<"       / \\      "<< std::endl;
    file.close();
}