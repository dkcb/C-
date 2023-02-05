#ifndef FIXED_HPP
# define FIXED_HPP
# include <cstdio>
# include <iostream>
# include <cmath>

class Fixed {
	public:
				Fixed( ) ;
				~Fixed( );
				Fixed( const Fixed &fixed );
				Fixed( const int i );
				Fixed( const float f );
		Fixed	&operator=( const Fixed &fixed );
		Fixed	operator+( const Fixed &fixed ) const;
		Fixed	operator-( const Fixed &fixed ) const;
		Fixed	&operator*( const Fixed &fixed ) const;
		Fixed	&operator/( const Fixed &fixed ) const;
		Fixed	operator++( int );	// postincrement
		Fixed	&operator++( ); 	// preincrement
		Fixed	operator--( int );	// postdecrement
		Fixed	&operator--( );		// predecrement
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
		friend std::ostream& operator<<(std::ostream &os, const Fixed &fixed);
		static	Fixed&	min(Fixed& val1, Fixed& val2)
		{
			if (val1._whole > val2._whole)
				return (val2);
			return (val1);
		}
		static	Fixed&	max(Fixed& val1, Fixed& val2)
		{
			if (val1._whole < val2._whole)
				return (val2);
			return (val1);
		}
		static	const Fixed&	min(const Fixed& val1, const Fixed& val2)
		{
			if (val1._whole > val2._whole)
				return (val2);
			return (val1);
		}
		static	const Fixed&	max(const Fixed& val1, const Fixed& val2)
		{
			if (val1._whole < val2._whole)
				return (val2);
			return (val1);
		}
	private:
		int					_whole;
		static const int	_fractional = 8;
};

#endif
