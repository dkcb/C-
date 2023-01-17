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
	std::cout << "First name:";
	std::getline(std::cin, buffer);
	c->FirstName = buffer;
	std::cout << "Last name:";
	std::getline(std::cin, buffer);
	c->LastName = buffer;
	buffer.clear();
	while (buffer.empty())
	{
		std::cout << "Phone number:";
		std::getline(std::cin, buffer);
		if (buffer.find_first_not_of("1234567890") != std::string::npos)
			buffer.clear();
		else
			c->PhoneNumber = buffer;
	}
	std::cout << "Darkest secret:";
	std::getline(std::cin, buffer);
	c->NickName = buffer;
	return -1;
}

std::int8_t	PhoneBook::ContactPopulate(Contact *c) {
	std::string	buffer;
	std::int8_t	i = 0;

	while (i < MAX_CONTACTS)
	{
		c[i].FirstName = "FName" + std::to_string(i);
		c[i].LastName = "LName" + std::to_string(i);
		c[i].NickName = "NName" + std::to_string(i);
		c[i].PhoneNumber = std::to_string(i);
		c[i].DarkestSecret = "DS" + std::to_string(i);
		i++;
	}
	return 0;
}
std::int8_t	PhoneBook::ContactSearch(Contact *c, std::int8_t num) {

	std::string	buffer;
	std::int8_t	i = 0;

	while (i < MAX_CONTACTS && i <= num)
	{
		std::cout << "Index: " << std::to_string(i) << " First name: " << c[i].FirstName << " Last name:" << c[i].LastName << " Nickname: " << c[i].NickName << std::endl;
		// std::cout << "Phone number:" << c[i].PhoneNumber << std::endl;
		// std::cout << "Darkest secret:" << c[i].DarkestSecret << std::endl;
		i++;
	}
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
