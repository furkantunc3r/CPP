#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
    Intern someRandomIntern;
    Bureaucrat someBureaucrat("furkan", 1);
    Form *rrf;
    Form *rrf0;
    Form *rrf1;
    try
    {

        rrf = someRandomIntern.makeForm("presidental pardon", "Bender");
        rrf0 = someRandomIntern.makeForm("shrubbery creation", "Test");
        rrf1 = someRandomIntern.makeForm("N/A", "N/A");
        someBureaucrat.signForm(*rrf);
        someBureaucrat.executeForm(*rrf);
        someBureaucrat.signForm(*rrf0);
        someBureaucrat.executeForm(*rrf0);
        someBureaucrat.signForm(*rrf1);
        someBureaucrat.executeForm(*rrf1);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    delete rrf;
    delete rrf0;
    // delete rrf1;
}
