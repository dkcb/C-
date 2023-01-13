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
		// if (buffer.empty())
		// 	continue ;

	}
	return buffer;
}

// int main ( ){
// 	PhoneBook	pb;
// 	string		cmd;
	
// 	int	i = 1;

// 	cmd = pb.Input();
// 	while (i < 10)
// 	{
// 		for (int j = 0; j < 10; j++)
// 			cout << "YO";
// 		i++;
// 	}
// 	cout << endl;
// 	return 0;
// }
