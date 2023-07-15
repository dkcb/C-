#include "Form.hpp"

Form::Form() : _name("Default"), _signGrade(1), _executeGrade(1), _signedStatus(false) {}

Form::Form(const std::string& name, int signGrade, int executeGrade)
    : _name(name), _signGrade(signGrade), _executeGrade(executeGrade), _signedStatus(false) {}

Form::Form(const Form& form)
    : _name(form._name), _signGrade(form._signGrade), _executeGrade(form._executeGrade), _signedStatus(form._signedStatus) {}

Form& Form::operator=(const Form& form) {
    if (this != &form) {
        (std::string)_name = form._name;
       _signedStatus = form._signedStatus;
    }
    return *this;
}

Form::~Form() {}

std::string Form::getName() const {
    return _name;
}

bool Form::isSigned() const {
    return _signedStatus;
}

int Form::getSignGrade() const {
    return _signGrade;
}

int Form::getExecuteGrade() const {
    return _executeGrade;
}

void Form::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() <= _signGrade) {
        _signedStatus = true;
    } else {
        throw GradeTooLowException();
    }
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Grade is too low.";
}

std::ostream& operator<<(std::ostream& os, const Form& form) {
    os << "Form: " << form.getName() << ", Sign Grade: " << form.getSignGrade()
       << ", Execute Grade: " << form.getExecuteGrade() << ", Signed: " << (form.isSigned() ? "Yes" : "No");
    return os;
}
