# include <iostream>

int	main( int argc, char **argv ) {
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "The address of brain is: " << &brain;
	std::cout << "\nThe address of stringPTR is: " << &stringPTR;
	std::cout << "\nThe address of stringREF is: " << &stringREF;
	std::cout << "\nThe value of brain is: " << brain;
	std::cout << "\nThe value of stringPTR is: " << *stringPTR;
	std::cout << "\nThe value of stringREF is: " << stringREF;
	return 0;
}
