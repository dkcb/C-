#include "PhoneBook.hpp"

int	main( int argc, char **argv ) {
	PhoneBook	pb;
	std::string prompt;
	int	i = 0;
	int	m = 1;

	pb.ContactPopulate(&pb.c[0]);
	i = MAX_CONTACTS + 1;
	while (m)
	{
		std::cout << "Phonebook menu. You can 'ADD', 'SEARCH' or 'EXIT':" << std::endl;
		pb.ContactSearch(&pb.c[0], i);
		m = pb.Menu( );
		if (m == 1){
			pb.ContactAdd(&pb.c[i % (MAX_CONTACTS + 1)]);
		}
		if (m == 2){
			std::cout << "SEARCHING CONTACT:" << std::endl;
			pb.ContactSearch(&pb.c[0], i);
			i++;
		}
		std::cout << "PN:" << pb.c[i].PhoneNumber << std::endl;
	}
	return 0;
}
