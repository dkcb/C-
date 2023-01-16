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
		if (m == 1){
			pb.ContactAdd(&pb.c[i % MAX_CONTACTS]);
		}
		if (m == 2){
			std::cout << "SEARCHING CONTACT:" << std::endl;
			pb.ContactSearch(&pb.c[0], i + 1);
			i++;
		}
		std::cout << "PN:" << pb.c[i].PhoneNumber << std::endl;
	}
	return 0;
}
