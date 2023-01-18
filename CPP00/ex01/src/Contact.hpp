#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>

class Contact {
	public:
	int			get_total( );
	std::string	getFN( );
	std::string	getLN( );
	std::string	getNN( );
	std::string	getPN( );
	std::string	getDS( );
	void	setFN(std::string s);
	void	setLN(std::string s);
	void	setNN(std::string s);
	void	setPN(std::string s);
	void	setDS(std::string s);
	void	set_total(int i);


		Contact( );
		~Contact( );
	// int				num;

private:
	int			_total;
	std::string	_FirstName;
	std::string	_LastName;
	std::string	_NickName;
	std::string	_PhoneNumber; 
	std::string	_DarkestSecret;

};
#endif
