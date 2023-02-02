
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
	std::cout << "Copy assignment operator called" << std::endl;
	this->_whole = nb.getRawBits( );
	return (*this);
}

Fixed::Fixed( const int i){
	this->_whole = roundf(i * (1 << this->_fractional));
}

Fixed::Fixed( const float f){
	this->_whole = roundf(f * (1 << this->_fractional));
}

int		Fixed::getRawBits( void ) const{
	std::cout << "GetRawBits called" << std::endl;
	return this->_whole;
}

std::ostream& operator<<(std::ostream &os, const Fixed &dt){
	return (os << dt.toFloat());
}

int		Fixed::toInt( void ) const{
	return _whole >> _fractional;
}

float	Fixed::toFloat( void ) const{
	return ((float)this->_whole / (float)(1 << this->_fractional));
}

void	Fixed::setRawBits( int const raw ){
	std::cout << "SetRawBits called" << std::endl;
	this->_whole = raw;
	std::cout << "RawBits have been set to:" << this->_whole << std::endl;
}
