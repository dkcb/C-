#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : AForm("RobotomyRequestForm", 72, 45, target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
    : AForm(other) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
    if (this != &other) {
        AForm::operator=(other);
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
    if (!isSigned()) {
        throw NotSignedException();
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
        std::cout << "Robotomy failed: " << getName() << " could not be robotomized.\n";
    }
}
