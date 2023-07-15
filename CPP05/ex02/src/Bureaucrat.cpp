#include "Bureaucrat.hpp"



Bureaucrat::Bureaucrat() : _name("Default"), _grade(75){
	std::cout << "+Default Bureaucrat created\n";
}

Bureaucrat::Bureaucrat( const std::string name, int grade){
	std::cout << "+Bureaucrat '" << name << "' created \n";
	_grade = grade;
	(std::string)_name = name;
	Bureaucrat::GradeTooLowException();
	Bureaucrat::GradeTooHighException();
}

Bureaucrat::~Bureaucrat( ){
	std::cout << "-Bureaucrat destroyed\n";
}

Bureaucrat::Bureaucrat( const Bureaucrat &cpy ){
	std::cout << "Bureaucrat copy created - " << cpy.getName() << std::endl;
	(std::string)_name = cpy.getName();
	_grade = cpy.getGrade();
}

Bureaucrat	&Bureaucrat::operator= ( const Bureaucrat &cpy ){
	(std::string)_name = cpy.getName();
	_grade = cpy.getGrade();
	return (*this);
}

std::string	Bureaucrat::getName() const{
	return _name;
}

int	Bureaucrat::getGrade() const{
	return _grade;
}

void	Bureaucrat::incGrade(){
		_grade++;
		if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();

}
void	Bureaucrat::decGrade(){
		_grade--;
		if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();

}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}