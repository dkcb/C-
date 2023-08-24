#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <random>

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : AForm("RobotomyRequestForm", 72, 45, target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
    : AForm(other) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
        AForm::operator=(other);
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

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(0, 1);
    std::cout << "Drilling noises...\n";
    if (dist(gen) == 0) {
        std::cout << "Robotomy successful: " << target << " has been robotomized successfully.\n";
    } else {
        std::cout << "Robotomy failed: " << target << " could not be robotomized.\n";
    }
}
