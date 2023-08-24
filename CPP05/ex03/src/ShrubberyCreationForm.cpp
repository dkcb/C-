#include "ShrubberyCreationForm.hpp"
#include <fstream>

#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm("ShrubberyCreationForm", 145, 137, target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : AForm(other) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
        AForm::operator=(other);
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
    if (!isSigned()) {
        throw NotSignedException();
    }

    if (executor.getGrade() > getExecuteGrade()) {
        throw GradeTooLowException();
    }

    std::ofstream file((target + "_" + executor.getName() + "_shrubbery").c_str());
    if (file.is_open()) {
        file << "    ccee       88oo\n";
        file << " C8O8O8Q8P  Ob o8oo\n";
        file << "8oO888O88o8    o88o\n";
        file << "    888         ||\n";
        file << "   88-           ||\n";
        file << "   88          || \n";
        file << "   \\         ||\n";
        file << "    \\     ||\n";
        file << "     \\    ||\n";
        file << "      o8o8\n";
    }
    file.close();
}
