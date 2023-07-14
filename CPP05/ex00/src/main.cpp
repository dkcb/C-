#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat b1;
	
	try
	{
		Bureaucrat b2("b2", 150);
		Bureaucrat b3("b3", 1);
		b2.decGrade();
		b3.decGrade();
		std::cout <<b1.getGrade() <<std::endl;
		std::cout <<b2.getGrade() <<std::endl;
		std::cout <<b3.getGrade() <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
// {
//     try {
//         Bureaucrat b1("John", 100);
//         std::cout << b1 << std::endl;

//         b1.decGrade();
//         std::cout << b1 << std::endl;

//     }
//     catch (const std::exception& e) {
//         std::cout << "Exception caught: " << e.what() << std::endl;
//     }

//     return 0;
// }