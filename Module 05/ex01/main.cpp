#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat b0("Furkan", 2); 
        Form f0("Alien leak", false, 3, 10);
        std::cout << b0 << std::endl;
        std::cout << f0 << std::endl;
        std::cout << "-----" << std::endl;
        b0.signForm(f0);
        std::cout << f0 << std::endl;
        b0.signForm(f0);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}