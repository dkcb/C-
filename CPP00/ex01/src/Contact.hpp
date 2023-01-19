#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>

class Contact {
	public:
		void		setFN(std::string s);
		void		setLN(std::string s);
		void		setNN(std::string s);
		void		setPN(std::string s);
		void		setDS(std::string s);
		std::string	getFN( );
		std::string	getLN( );
		std::string	getNN( );
		std::string	getPN( );
		std::string	getDS( );
					Contact( );
					~Contact( );
	private:
		std::string	_FirstName;
		std::string	_LastName;
		std::string	_NickName;
		std::string	_PhoneNumber; 
		std::string	_DarkestSecret;
};
#endif
