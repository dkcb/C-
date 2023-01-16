#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <iostream>
#include "Contact.hpp"

class PhoneBook {

public:
	std::string		Input( );
	std::int8_t		Menu( );
	int				total;
	Contact	c[8];
	std::int8_t	ContactAdd(Contact *c);

	PhoneBook( );
	~PhoneBook( );

	int				num;

private:
};
#endif
