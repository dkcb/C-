#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <iostream>
#include "Contact.hpp"

class PhoneBook {

public:
	std::string		Input( );
	std::int8_t		Menu( );
					PhoneBook( );
					~PhoneBook( );
	
	int				num;

private:
	int				total;
	Contact	c[8];
};
#endif
