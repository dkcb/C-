#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
public:
    ShrubberyCreationForm(const std::string& target);

    void execute(const Bureaucrat& executor) const;
};

#endif  // SHRUBBERYCREATIONFORM_H
