#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class AForm {
public:
			AForm();
			AForm(const std::string& _name, int _signGrade, int _executeGrade);
			AForm(const AForm& AForm);
	AForm	&operator=(const AForm& AForm);
	virtual ~AForm();

std::string	getName() const;
	bool	isSigned() const;
	int		getSignGrade() const;
	int		getExecuteGrade() const;

	void	beSigned(const Bureaucrat& bureaucrat);
	class GradeTooLowException : public std::exception {
			const char *what() const throw ();};
	class FormNotSignedException : public std::exception {
		public:
			const char* what() const throw() {
				return "Form is not signed.";
			}
};

private:
	const	std::string _name;
const int	_signGrade;
const int	_executeGrade;
	bool	_signedStatus;
};

std::ostream& operator<<(std::ostream& os, const AForm& AForm);

#endif  // AForm_H
