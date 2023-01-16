#include "PhoneBook.hpp"

int	main( int argc, char **argv ) {
	PhoneBook	pb;
	std::string prompt;
	int	i = 0;
	int	m = 1;

	while (m)
	{
		std::cout << "Phonebook menu. You can 'ADD', 'SEARCH' or 'EXIT':" << std::endl;
		m = pb.Menu( );
		if (m == 0){
			std::cout << "EXIT selected" << std::endl;
			return 0;
		}
		if (m == 1){
			std::cout << "ADDING NEW CONTACT:" << std::endl;
			pb.ContactAdd(&pb.c[0]);
		}
		if (m == 2){
			std::cout << "SEARCHING CONTACT:" << std::endl;
			return 2;
		}
		std::cout << "PN:" << pb.c[i].PhoneNumber << std::endl;

	}

	// std::cout << std::endl;
	// std::cout << pb.Input( );
	// std::cout << pb.Input( );

	// std::cout << std::endl;
	return 0;
}
