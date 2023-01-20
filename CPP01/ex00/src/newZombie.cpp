#include "PhoneBook.hpp"

PhoneBook::PhoneBook( ){}

PhoneBook::~PhoneBook( ){}

Contact *PhoneBook::getContact()
{
	return (&this->_c[0]);
}

std::string	PhoneBook::_cut(std::string s, int i) {
	if (s.size() > 10)
		return (s.substr(0, i - 1) + ".");
	return s.substr(0, i);
}

std::string	PhoneBook::_input(std::string s) {
	std::string	buffer;
	
	std::cout << s;
	while (buffer.empty())
		std::getline(std::cin, buffer);
	return buffer;

}
void PhoneBook::contactAdd(Contact *c) {
	std::cout << "ADDING NEW CONTACT:" << std::endl;
	c->setFN(PhoneBook::_input("First name:"));
	c->setLN(PhoneBook::_input("Last name:"));
	c->setNN(PhoneBook::_input("Nickname:"));
	c->setPN("l");
	while (c->getPN().find_first_not_of("1234567890") != std::string::npos)
		c->setPN (PhoneBook::_input("Phone number:"));
	c->setDS(PhoneBook::_input("Darkest secret:"));
}

std::int8_t	PhoneBook::contactPopulate(Contact *c) {
	std::string	buffer;
	std::int8_t	i = 0;

	while (i < MAX_CONTACTS)
	{
		c[i].setFN("FName" + std::to_string(i));
		c[i].setLN("LName" + std::to_string(i));
		c[i].setNN("NName" + std::to_string(i));
		c[i].setPN(std::to_string(i));
		c[i].setDS("DS" + std::to_string(i));
		i++;
	}
	return 0;
}
std::int8_t	PhoneBook::contactSearch(Contact *c, std::int8_t num) {
	std::string	buffer = "d";
	std::int8_t	i = 0;

	std::cout << std::setw(WIDTH) << std::right << "Index" << "|"
			<< std::setw(WIDTH) << std::right << "FirstName" << "|"
			<< std::setw(WIDTH) << std::right << "LastName" << "|"
			<< std::setw(WIDTH) << std::right << "Nickname"  << std::endl;
	if (num < 1)
	{
		std::cout << "The phonebook is empty! \n";
		return (0);
	}
	while (i < MAX_CONTACTS && i < num)
	{
		std::cout << std::setw(WIDTH) << std::right << i + 0 << "|"
				  << std::setw(WIDTH) << std::right << _cut(this->_c[i].getFN(), WIDTH) << "|"
				  << std::setw(WIDTH) << std::right << _cut(this->_c[i].getLN(), WIDTH) << "|"
				  << std::setw(WIDTH) << std::right << _cut(this->_c[i].getNN(), WIDTH) << std::endl;
		i++;
	}
	while (buffer.length() > 10 || buffer.find_first_not_of("1234567890") != std::string::npos || std::stoi(buffer) < 0 || std::stoi(buffer) > num - 1)
		buffer = PhoneBook::_input("Index of contact to dispay:");
	i = std::stoi(buffer);
	std::cout	<< "First name     :" << c[i].getFN() << std::endl
				<< "Last name      :" << c[i].getLN() << std::endl
				<< "Nickname       :" << c[i].getNN() << std::endl
				<< "Phone Number   :" << c[i].getPN() << std::endl
				<< "Darkest Secret :" << c[i].getDS() << std::endl;
	return -1;
}

std::int8_t	PhoneBook::menu( ) {
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
