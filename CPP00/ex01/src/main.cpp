#include "PhoneBook.hpp"

int	main( int argc, char **argv ) {
	PhoneBook	pb;
	std::string prompt;
	int	i = 0;
	int	m = 1;

	// pb.contactPopulate(pb.getContact());
	// i = MAX_CONTACTS;
	while (m)
	{
		std::cout << "Phonebook menu. You can 'ADD', 'SEARCH' or 'EXIT':" << std::endl;
		// pb.contactSearch(pb.getContact(), i);
		m = pb.menu( );
		if (m == 1){
			pb.contactAdd(&pb.getContact()[i % MAX_CONTACTS]);
			i++;
		}
		if (m == 2){
			std::cout << "SEARCHING CONTACT:" << std::endl;
			pb.contactSearch(pb.getContact(), i);
		}
	}
	return 0;
}
