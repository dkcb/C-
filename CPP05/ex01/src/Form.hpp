#ifndef FORM_H
# define FORM_H

# include <iostream>
# include "Bureaucrat.hpp"


class Bureaucrat;

class Form {
public:
    class GradeTooHighException : public std::exception {
    public:
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        const char* what() const throw();
    };

    Form(const std::string& name, int signGrade, int executeGrade);
    ~Form();

    std::string getName() const;
    bool isSigned() const;
    int getSignGrade() const;
    int getExecuteGrade() const;

    void beSigned(const Bureaucrat& bureaucrat);

private:
    const std::string name;
    bool signedStatus;
    const int signGrade;
    const int executeGrade;
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif
