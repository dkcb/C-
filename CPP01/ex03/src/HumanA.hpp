#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanA {
	public:
				HumanA( std::string name, Weapon & w);
				~HumanA( );
	void		setWeapon( const Weapon & w );

		// void	setWeapon(Weapon & w);
		std::string	getName( );
		void	attack( );
	private:
		std::string	_name;
		Weapon * _w;
};

#endif
