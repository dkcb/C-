#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>

#include "Form.hpp"

class Form;
class Bureaucrat {
	public:
						Bureaucrat();
						Bureaucrat(const std::string name, int grade);

				virtual	~Bureaucrat();

						Bureaucrat(const Bureaucrat &cpy);
			Bureaucrat	&operator= (const Bureaucrat &cpy);

			std::string	getName() const;
					int	getGrade() const;
			
				class GradeTooLowException : public std::exception {
					const char *what() const throw ();
				};
				class GradeTooHighException : public std::exception {
					const char *what() const throw ();
				};
				void	signForm(Form &form);
				void	incGrade();
				void	decGrade();
	protected:
	const std::string	_name;
				int		_grade;
				void	setType(std::string type);
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif
