#include "AForm.hpp"

AForm::AForm() :  target("Default"), _name("Default"), _signGrade(1), _executeGrade(1), _signedStatus(false) {}

AForm::AForm(const std::string& name, int signGrade, int executeGrade, std::string target1)
    : target(target1), _name(name), _signGrade(signGrade), _executeGrade(executeGrade), _signedStatus(false) {
    if (_signGrade > 150 || _executeGrade > 150)
		throw GradeTooLowException();
	if (_signGrade < 1 || _executeGrade < 1)
		throw GradeTooHighException();
}

AForm::AForm(const AForm& AForm)
    :  target(AForm.target), _name(AForm._name), _signGrade(AForm._signGrade), _executeGrade(AForm._executeGrade), _signedStatus(AForm._signedStatus) {}

AForm& AForm::operator=(const AForm& AForm) {
    _signedStatus = AForm._signedStatus;
    return *this;
}

AForm::~AForm() {}

std::string AForm::getName() const {
    return _name;
}

bool AForm::isSigned() const {
    return _signedStatus;
}

int AForm::getSignGrade() const {
    return _signGrade;
}

int AForm::getExecuteGrade() const {
    return _executeGrade;
}

void AForm::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() <= _signGrade) {
        _signedStatus = true;
    } else {
        throw GradeTooLowException();
    }
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "Grade is too low.";
}

const char* AForm::GradeTooHighException::what() const throw() {
    return "Grade is too high.";
}

const char* AForm::NotSignedException::what() const throw () {
	return "the form is not signed";
}

std::ostream& operator<<(std::ostream& os, const AForm& AForm) {
    os << "AForm: " << AForm.getName() << ", Sign Grade: " << AForm.getSignGrade()
       << ", Execute Grade: " << AForm.getExecuteGrade() << ", Signed: " << (AForm.isSigned() ? "Yes" : "No");
    return os;
}
