#ifndef FIXED_HPP
# define FIXED_HPP
# include <cstdio>
# include <iostream>
# include <cmath>

class Fixed {
	public:
				Fixed( );
				~Fixed( );
				Fixed( const Fixed &fixed );
				Fixed( const int i );
				Fixed( const float f );
		Fixed	&operator=( const Fixed &fixed );
		Fixed	operator+( const Fixed &fixed ) const;
		Fixed	operator-( const Fixed &fixed ) const;
		Fixed	operator*( const Fixed &fixed ) const;
		Fixed	operator/( const Fixed &fixed ) const;
		Fixed	operator++( int );	// post
		Fixed	&operator++( ); 	// pre
		Fixed	operator--( int );	// post
		Fixed	&operator--( );		// pre
		bool	operator>( const Fixed &fixed ) const;
		bool	operator<( const Fixed &fixed ) const;
		bool	operator>=( const Fixed &fixed ) const;
		bool	operator<=( const Fixed &fixed ) const;
		bool	operator==( const Fixed &fixed ) const;
		bool	operator!=( const Fixed &fixed ) const;
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		int		toInt( void ) const;
		float	toFloat( void ) const;
		static	Fixed&	min(Fixed& val1, Fixed& val2);
		static	Fixed&	max(Fixed& val1, Fixed& val2);
		static	const Fixed&	min(const Fixed& val1, const Fixed& val2);
		static	const Fixed&	max(const Fixed& val1, const Fixed& val2);

	private:
		int					_whole;
		static const int	_fractional = 8;
};

std::ostream& operator<<(std::ostream &os, const Fixed &fixed);

#endif
