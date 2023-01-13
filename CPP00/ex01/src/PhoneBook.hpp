#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <iostream>
#include "Contact.hpp"

// using namespace std;

class PhoneBook {

public:
	std::string		Input( );
					PhoneBook( );
					~PhoneBook( );
	
	int				num;

private:
	int				total;
	Contact	c[8];
};
#endif
