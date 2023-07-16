#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include "AForm.hpp"


class Bureaucrat {
	public:
						Bureaucrat();
						Bureaucrat(const std::string name, int grade);

				virtual	~Bureaucrat();

						Bureaucrat(const Bureaucrat &cpy);
			Bureaucrat	&operator= (const Bureaucrat &cpy);

			std::string	getName() const;
					int	getGrade() const;
			
				class GradeTooHighException : public std::exception {
					public:
						const char* what() const throw() {
							return "Grade is too high.";
						}
					};
				class GradeTooLowException : public std::exception {
					public:
						const char* what() const throw() {
							return "Grade is too low.";
						}
					};
				void	incGrade();
				void	decGrade();
				void	executeForm(AForm const & form);
	protected:
	const std::string	_name;
				int		_grade;
				void	setType(std::string type);
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif
