#include "PhoneBook.hpp"

int	main( int argc, char **argv ) {
	PhoneBook	pb;
	std::string prompt;
	int	i = 1;
	int	m = 1;

	std::cout << "Phonebook menu. You can 'ADD', 'SEARCH' or 'EXIT':";
	std::cout << std::endl;
	while (m)
	{
		m = pb.Menu( );
		if (m == 0){
			std::cout << "EXIT selected";
			std::cout << std::endl;
			return 0;
		}
		if (m == 1){
			std::cout << "ADDING NEW CONTACT:";
			std::cout << std::endl;
			return 1;
		}
		if (m == 2){
			std::cout << "SEARCHING CONTACT:";
			std::cout << std::endl;
			return 2;
		}
	}

	// std::cout << std::endl;
	// std::cout << pb.Input( );
	// std::cout << pb.Input( );

	// std::cout << std::endl;
	return 0;
}
