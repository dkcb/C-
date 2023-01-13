#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook( )
{

}
PhoneBook::~PhoneBook( )
{

}

std::string	PhoneBook::Input( ) {

	std::string			buffer;

	while (buffer.empty())
	{
		std::getline(std::cin, buffer);
		if (buffer.find_first_not_of("1234567890") != std::string::npos)
			buffer.clear();
		else
			break ;
	}
	return buffer;
}
