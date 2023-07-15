#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
public:
    RobotomyRequestForm(const std::string& target);

    void execute(const Bureaucrat& executor) const;
};

#endif  // ROBOTOMYREQUESTFORM_H
