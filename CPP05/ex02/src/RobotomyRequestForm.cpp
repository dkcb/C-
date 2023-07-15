#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : AForm("RobotomyRequestForm", 72, 45) {}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
    if (!isSigned()) {
        throw FormNotSignedException();
    }

    if (executor.getGrade() > getExecuteGrade()) {
        throw GradeTooLowException();
    }

    srand(time(0));
    int randomNum = rand() % 2;

    std::cout << "Drilling noises...\n";
    if (randomNum == 0) {
        std::cout << "Robotomy successful: " << getName() << " has been robotomized successfully.\n";
    } else {
        std::cout << "Robotomy failed: " << getName() << " has not been robotomized.\n";
    }
}
