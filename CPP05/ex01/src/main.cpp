#include <iostream>
#include "Form.hpp"

int main() {
    try {
        Bureaucrat b1("John", 100);
        Bureaucrat b2("Alice", 50);

        Form form1("Form1", 80, 70);
        // std::cout << form1 << std::endl;

        // form1.beSigned(b1);
        std::cout << "After signing: " << form1 << std::endl;

        Form form2("Form2", 60, 90);
        std::cout << form2 << std::endl;

        form2.beSigned(b2);
        std::cout << "After signing: " << form2 << std::endl;

        Form form3("Form3", 30, 40);
        std::cout << form3 << std::endl;

        form3.beSigned(b1); // GradeTooLowException should be thrown

    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}
