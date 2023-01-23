#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanB {
	public:
				HumanB( std::string name);
				~HumanB( );
		void	setWeapon(Weapon w);
		std::string	getName( );
		void	attack( );
	private:
		std::string	_name;
		Weapon _w;
};

#endif
