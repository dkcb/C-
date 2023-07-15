#include "Form.hpp"



Form::Form(std::string name, int sign_grade, int exec_grade) : _name(name), _signed(false), _sign_grade(check_grade(sign_grade)), _exec_grade(check_grade(exec_grade)) {
	std::cout << "Form contructor called\n";
}

Form::~Form() {
	std::cout << "Form destructor called\n";
};

Form::Form(const Form& form) : _name(form._name), _signed(form._signed), _sign_grade(form._sign_grade), _exec_grade(form._exec_grade) {
	std::cout << "Form copy contructor called\n";
}

Form &Form::operator=(const Form& form) {
	//assignment is mandatory, const attribute too :(
	//_name = form._name; 
	_signed = form._signed;
}

const char *Form::GradeTooLowException::what() const throw () {
	return "grade is too low!";
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

std::ostream& operator<<(std::ostream& os, const Form& form) {
    os << "Form: " << form.getName() << ", Sign Grade: " << form.getSignGrade()
       << ", Execute Grade: " << form.getExecuteGrade() << ", Signed: " << (form.isSigned() ? "Yes" : "No");
    return os;
}
