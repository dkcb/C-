#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iomanip>
# include "Contact.hpp"
# define MAX_CONTACTS 8
# define WIDTH 9

class PhoneBook {

public:
	std::string		Input(std::string s);
	std::int8_t		Menu( );
	int				total;
	Contact	c[8];
	std::string	Input( );
	std::string	Cut(std::string s, int i);
	void ContactAdd(Contact *c);
	std::int8_t	ContactPopulate(Contact *c);
	std::int8_t	ContactSearch(Contact *c, std::int8_t num);


	PhoneBook( );
	~PhoneBook( );

	int				num;

private:
};
#endif
