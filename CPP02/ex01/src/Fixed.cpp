
#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	_whole = 0;
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

std::ostream& operator<<(std::ostream &os, const Fixed &dt){
	return (os << dt.toFloat());
}

Fixed::Fixed( const int i){
	_whole = roundf(i * (1 << _fractional));
}

Fixed::Fixed( const float f){
	_whole = roundf(f * (1 << _fractional));
}

int		Fixed::getRawBits( void ) const{
	std::cout << "GetRawBits called" << std::endl;
	return _whole;
}

int		Fixed::toInt( void ) const{
	return _whole >> _fractional;
}

float	Fixed::toFloat( void ) const{
	return ((float)_whole / (float)(1 << _fractional));
}

void	Fixed::setRawBits( int const raw ){
	std::cout << "SetRawBits called" << std::endl;
	_whole = raw;
	std::cout << "RawBits have been set to:" << _whole << std::endl;
}
