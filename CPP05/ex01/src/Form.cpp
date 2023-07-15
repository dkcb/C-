#include "Form.h"

Form::

Form::Form(const std::string& name, int signGrade, int executeGrade)
    : name(name), signedStatus(false), signGrade(signGrade), executeGrade(executeGrade) {
    if (signGrade < 1 || signGrade > 150) {
        throw GradeTooHighException();
    }
    if (executeGrade < 1 || executeGrade > 150) {
        throw GradeTooHighException();
    }
}

Form::~Form() {}

std::string Form::getName() const {
    return name;
}

bool Form::isSigned() const {
    return signedStatus;
}

int Form::getSignGrade() const {
    return signGrade;
}

int Form::getExecuteGrade() const {
    return executeGrade;
}

void Form::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() <= signGrade) {
        signedStatus = true;
    } else {
        throw GradeTooLowException();
    }
}

std::ostream& operator<<(std::ostream& os, const Form& form) {
    os << "Form: " << form.getName() << ", Sign Grade: " << form.getSignGrade()
       << ", Execute Grade: " << form.getExecuteGrade() << ", Signed: " << (form.isSigned() ? "Yes" : "No");
    return os;
}
