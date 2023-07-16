#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        // Create a bureaucrat
        Bureaucrat bureaucrat("John Doe", 50);

        // Create forms
        ShrubberyCreationForm shrubberyForm("Garden");
        RobotomyRequestForm robotomyForm("Target");
        PresidentialPardonForm pardonForm("Criminal");

        // Execute signing and executing forms
        bureaucrat.signForm(shrubberyForm);
        bureaucrat.executeForm(shrubberyForm);

        bureaucrat.signForm(robotomyForm);
        bureaucrat.executeForm(robotomyForm);

        bureaucrat.signForm(pardonForm);
        bureaucrat.executeForm(pardonForm);

        // Test error cases
        // 1. Trying to sign already signed form
        bureaucrat.signForm(shrubberyForm);

        // 2. Trying to execute unsigned form
        Bureaucrat bureaucrat2("Jane Smith", 30);
        bureaucrat2.executeForm(robotomyForm);

        // 3. Trying to execute form with low-grade bureaucrat
        Bureaucrat bureaucrat3("Mike Brown", 100);
        bureaucrat3.executeForm(pardonForm);
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}