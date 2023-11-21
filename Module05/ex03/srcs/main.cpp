#include "../AForm.hpp"
#include "../Bureaucrat.hpp"
#include "../Intern.hpp"
#include "../ShrubberyCreationForm.hpp"
#include "../PresidentialPardonForm.hpp"
#include "../RobotomyRequestForm.hpp"

int main()
{
    Intern randomIntern;
    AForm* rrf;
    rrf = randomIntern.makeForm("robotomy request", "Bender");

    Bureaucrat bur1("Bureaucrat 1", 1);
    if (rrf)
    {
        bur1.signForm(*rrf);
        bur1.executeForm(*rrf);
    }
    delete rrf;
}