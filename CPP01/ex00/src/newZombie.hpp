#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iomanip>
# include "Contact.hpp"
# define MAX_CONTACTS 8
# define WIDTH 10

class PhoneBook {

	public:
		PhoneBook( );
		~PhoneBook( );
		std::int8_t	menu( );
		std::int8_t	contactPopulate(Contact *c);
		std::int8_t	contactSearch(Contact *c, std::int8_t num);
		Contact 	*getContact( );
		void 		contactAdd(Contact *c);

	private:
		std::string	_input(std::string s);
		std::string	_cut(std::string s, int i);
		Contact		_c[8];
};
#endif
