
#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor" << std::endl;
	this->_whole = 0;
}

Fixed::~Fixed(){
	std::cout << "Destructor" << std::endl;
}

Fixed::Fixed( const Fixed &nb ){
	std::cout << "Copy constructor" << std::endl;
	*this = nb;
}

Fixed	&Fixed::operator= ( const Fixed &nb ){
	std::cout << "Assignation operator" << std::endl;
	this->_whole = nb.getRawBits();
	return (*this);
}

int		Fixed::getRawBits( void ) const{
	std::cout << "GetRawBits" << std::endl;
	return this->_whole;
}

void	Fixed::setRawBits( int const raw ){
	std::cout << "SetRawBits" << std::endl;
	this->_whole = raw;
	std::cout << "RawBits have been set to:" << this->_whole << std::endl;
}
