#ifndef FORM_H
#define FORM_H

#include <iostream>
#include "Bureaucrat.hpp"

class Form {
public:
			Form();
			Form(const std::string& _name, int _signGrade, int _executeGrade);
			Form(const Form& form);
	Form	&operator=(const Form& form);
	virtual ~Form();

std::string	getName() const;
	bool	isSigned() const;
	int		getSignGrade() const;
	int		getExecuteGrade() const;

	void	beSigned(const Bureaucrat& bureaucrat);
	class GradeTooLowException : public std::exception {
			const char *what() const throw ();};

private:
	const	std::string _name;
	bool	_signedStatus;
const int	_signGrade;
const int	_executeGrade;
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif  // FORM_H
