#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;
class AForm {
public:

			AForm();
			AForm(const std::string& _name, int _signGrade, int _executeGrade, std::string target);
			AForm(const AForm& AForm);
	AForm	&operator=(const AForm& AForm);
	virtual ~AForm();

std::string	getName() const;
	bool	isSigned() const;
	int		getSignGrade() const;
	int		getExecuteGrade() const;
	virtual void	execute(const Bureaucrat& executor) const = 0;

	void	beSigned(const Bureaucrat& bureaucrat);
	std::string	target;
	class GradeTooLowException : public std::exception {
			const char *what() const throw ();};
	class NotSignedException : public std::exception {
			const char *what() const throw ();};
private:
	const	std::string _name;
const int	_signGrade;
const int	_executeGrade;
	bool	_signedStatus;
};

std::ostream& operator<<(std::ostream& os, const AForm& AForm);

#endif  // AForm_H
