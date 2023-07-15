#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm("ShrubberyCreationForm", 145, 137) {}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
    if (!isSigned()) {
        throw FormNotSignedException();
    }

    if (executor.getGrade() > getExecuteGrade()) {
        throw GradeTooLowException();
    }

    std::ofstream file((_target + "_shrubbery").c_str());
    if (file.is_open()) {
        file << "    ccee88oo\n";
        file << " C8O8O8Q8PoOb o8oo\n";
        file << "8oO888O8( 8o8  o88o\n";
        file << "    )888(    ,\n";
        file << "   /8888\    |\n";
        file << "  (O8O8O)    |\n";
        file << "   \ o /    |\n";
        file << "    \ -    O\n";
        file << "     \    |\n";
        file << "      o8o8\n";
    }
    file.close();
}
