#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>
// #include <string>

class Contact {
	public:

					Contact( );
					~Contact( );
	int				num;

private:

	int				total;
	std::string		Name;
	std::string		Number;
};
#endif
