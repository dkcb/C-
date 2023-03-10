
#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->_whole = 0;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const Fixed &nb ){
	std::cout << "Copy constructor called" << std::endl;
	*this = nb;
}

Fixed	&Fixed::operator= ( const Fixed &nb ){
	std::cout << "Assignation operator called" << std::endl;
	this->_whole = nb.getRawBits();
	return (*this);
}

int		Fixed::getRawBits( void ) const{
	std::cout << "GetRawBits called" << std::endl;
	return this->_whole;
}

void	Fixed::setRawBits( int const raw ){
	std::cout << "SetRawBits called" << std::endl;
	this->_whole = raw;
	std::cout << "RawBits have been set to:" << this->_whole << std::endl;
}
