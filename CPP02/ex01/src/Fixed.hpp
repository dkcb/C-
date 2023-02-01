#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>


class Fixed {
	public:
							Fixed(  );
							~Fixed( );
							Fixed( const Fixed &nb );
							Fixed( const int i);
							Fixed( const float f);
					Fixed	&operator= ( const Fixed &nb );
					int		getRawBits( void ) const;
					void	setRawBits( int const raw );
					int		toInt( void ) const;
					float	toFloat( void ) const;
					// int mo, da, yr;
					// Fixed(int m, int d, int y)
					// {
					// 	mo = m; da = d; yr = y;
					// }
					friend std::ostream& operator<<(std::ostream &os, const Fixed &dt);
	private:
		int					_whole;
		static const int	_fractional = 8;
};

#endif
