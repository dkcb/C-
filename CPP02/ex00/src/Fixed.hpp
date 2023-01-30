#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {
	public:
							Fixed( );
							~Fixed( );
							Fixed( const Fixed &nb );
					Fixed	&operator= ( const Fixed &nb );
					int		getRawBits( void ) const;
					void	setRawBits( int const raw );
	private:
		int					_whole;
		static const int	_fractional = 8;
};

#endif
