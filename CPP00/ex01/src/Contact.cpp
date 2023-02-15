#include "Contact.hpp"

Contact::Contact( ){}

Contact::~Contact( ){}

std::string	Contact::getFN( ){
	return this->_FirstName;
}

std::string	Contact::getLN( ){
	return this->_LastName;
}

std::string	Contact::getNN( ){
	return this->_NickName;
}

std::string	Contact::getPN( ){
	return this->_PhoneNumber;
}

std::string	Contact::getDS( ){
	return this->_DarkestSecret;
}

void	Contact::setFN(std::string s){
		this->_FirstName = s;
}

void	Contact::setLN(std::string s){
	this->_LastName = s;
}

void	Contact::setNN(std::string s){
	 this->_NickName = s;
}

void	Contact::setPN(std::string s){
	this->_PhoneNumber = s;
}

void	Contact::setDS(std::string s){
	 this->_DarkestSecret = s;
}
