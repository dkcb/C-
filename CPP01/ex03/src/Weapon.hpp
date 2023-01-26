#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon {
	public:
		void		setType( const std::string & s );
		std::string	getType( );
					Weapon( );
					Weapon( std::string type );
					~Weapon( );
	private:
		std::string _type;
};

#endif
