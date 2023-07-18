#include <iostream>
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    Intern intern;

    AForm* form1 = intern.makeForm("shrubbery", "Garden");
    if (form1 != nullptr) {
        // Do something with form1
    }

    AForm* form2 = intern.makeForm("robotomy", "Target");
    if (form2 != nullptr) {
        // Do something with form2
    }

    AForm* form3 = intern.makeForm("unknown", "InvalidTarget");
    if (form3 != nullptr) {
        // Do something with form3
    }

        std::cout << "Intern creates Form for" << form1->target << std::endl;
    
    delete form1;
    delete form2;
    delete form3;

    return 0;
}