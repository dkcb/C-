#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook( )
{

}
PhoneBook::~PhoneBook( )
{

}

std::int8_t	PhoneBook::ContactAdd(Contact *c) {

	std::string	buffer;
	std::int8_t	i;

	std::cout << "ADDING NEW CONTACT:" << std::endl;
	std::cout << "First Name:" << std::endl;
	while (buffer.empty())
	{
		std::cout << "Telephone Number:" << std::endl;
		std::getline(std::cin, buffer);
		if (buffer.find_first_not_of("1234567890") != std::string::npos)
			buffer.clear();
		else
			c->PhoneNumber = buffer;
		
		std::cout << "Entered: " << c->PhoneNumber << std::endl;
	}

	// while (1)
	// {
	// 	std::getline(std::cin, buffer);
	// 	if (buffer.compare ("EXIT") == 0)
	// 		return 0;
	// 	if (buffer.compare ("ADD") == 0)
	// 		return 1;
	// 	if (buffer.compare ("SEARCH") == 0)
	// 		return 2;
	// }
	return -1;
}


std::int8_t	PhoneBook::Menu( ) {

	std::string	buffer;

	while (buffer.empty())
	{
		std::getline(std::cin, buffer);
		if (buffer.compare ("EXIT") == 0)
			return 0;
		if (buffer.compare ("ADD") == 0)
			return 1;
		if (buffer.compare ("SEARCH") == 0)
			return 2;
	}
	return -1;
}

std::string	PhoneBook::Input( ) {

	std::string	buffer;

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
