#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat b0("Furkan", 1);
        // b0.incGrade();
        std::cout << b0 << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}