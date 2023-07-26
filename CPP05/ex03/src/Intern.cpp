#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern& other) {
	(void)other;  // Avoid unused parameter warning
	}

	Intern& Intern::operator=(const Intern& other) {
	(void)other;  // Avoid unused parameter warning
	return *this;
	}

	AForm* Intern::makeForm(const std::string& formName, const std::string& target) const {
	if (formName == "shrubbery") {
		std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
		return new ShrubberyCreationForm(target);
	} else if (formName == "robotomy") {
		std::cout << "Intern creates RobotomyRequestForm" << std::endl;
		return new RobotomyRequestForm(target);
	} else if (formName == "presidential") {
		std::cout << "Intern creates PresidentialPardonForm" << std::endl;
		return new PresidentialPardonForm(target);
	} else {
		std::cout << "Error: Unknown form name" << std::endl;
		return nullptr;
	}
}
