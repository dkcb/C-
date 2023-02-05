
#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	_whole = 0;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const Fixed &fixed ){
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed	&Fixed::operator= ( const Fixed &fixed ){
	std::cout << "Copy assignment operator called" << std::endl;
	_whole = fixed.getRawBits( );
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

bool	Fixed::operator> ( const Fixed &fixed ) const{
	return (_whole > fixed._whole);
}

bool	Fixed::operator< ( const Fixed &fixed ) const{
	return (_whole < fixed._whole);
}

bool	Fixed::operator>= ( const Fixed &fixed ) const{
	return (_whole >= fixed._whole);
}

bool	Fixed::operator<= ( const Fixed &fixed ) const{
	return (_whole <= fixed._whole);
}

bool	Fixed::operator== ( const Fixed &fixed ) const{
	return (_whole == fixed._whole);
}

bool	Fixed::operator!= ( const Fixed &fixed ) const{
	return (_whole != fixed._whole);
}

Fixed	Fixed::operator++ (int){
	Fixed	tmp;

	tmp._whole = _whole;
	_whole++;
	return tmp;
}

Fixed	Fixed::operator-- (int){
	Fixed	tmp;

	tmp._whole = _whole;
	_whole--;
	return tmp;
}

Fixed	Fixed::operator+ (const Fixed &fixed) const{
	Fixed tmp;

	tmp._whole += fixed._whole;
	return tmp;
}

Fixed	Fixed::operator- (const Fixed &fixed) const{
	Fixed tmp;
	
	tmp._whole -= fixed._whole;
	return tmp;
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
