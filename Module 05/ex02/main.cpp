#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentalPardonForm.hpp"

int main() {
    try {
        Bureaucrat b0("Ftuncer", 1);
        ShrubberyCreationForm s0("tree");
        b0.executeForm(s0);
        RobotomyRequestForm r0("eeaagpdulla");
        b0.executeForm(r0);
        b0.signForm(r0);
        PresidentalPardonForm p0("Kenan Evren");
        b0.executeForm(p0);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}