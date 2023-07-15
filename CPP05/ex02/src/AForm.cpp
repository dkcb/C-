#include "AForm.hpp"

AForm::AForm() : _name("Default"), _signGrade(1), _executeGrade(1), _signedStatus(false) {}

AForm::AForm(const std::string& name, int signGrade, int executeGrade)
    : _name(name), _signGrade(signGrade), _executeGrade(executeGrade), _signedStatus(false) {}

AForm::AForm(const AForm& AForm)
    : _name(AForm._name), _signGrade(AForm._signGrade), _executeGrade(AForm._executeGrade), _signedStatus(AForm._signedStatus) {}

AForm& AForm::operator=(const AForm& AForm) {
    if (this != &AForm) {
        (std::string)_name = AForm._name;
       _signedStatus = AForm._signedStatus;
    }
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

std::ostream& operator<<(std::ostream& os, const AForm& AForm) {
    os << "AForm: " << AForm.getName() << ", Sign Grade: " << AForm.getSignGrade()
       << ", Execute Grade: " << AForm.getExecuteGrade() << ", Signed: " << (AForm.isSigned() ? "Yes" : "No");
    return os;
}
