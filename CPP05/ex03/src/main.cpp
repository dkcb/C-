    // AForm* formNull = nullptr;

    
    // b.signForm(*formNull);
#include <iostream>
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    Bureaucrat b ("Jeff", 1);
    Intern intern;

   PresidentialPardonForm pr1("jaf");
   PresidentialPardonForm pr2("yo");

    pr1 = pr2;

    std::cout << pr1.target << std::endl;

    try {
        AForm* form1 = intern.makeForm("PresidentialPardon", "Garden");
        AForm* form2 = intern.makeForm("shrubbery", "Garden");
        AForm* form3 = intern.makeForm("robotomy", "Target");
        // AForm* form3 = intern.makeForm("unknown", "InvalidTarget");
        b.signForm(*form1);
        b.signForm(*form2);
        b.signForm(*form3);

        std::cout << "Intern creates Form for" << form1->target << std::endl;
        b.executeForm(*form1);
        b.executeForm(*form2);
        b.executeForm(*form3);
        delete form1;
        delete form2;
        delete form3;
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}