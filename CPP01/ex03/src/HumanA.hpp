#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanA {
	public:
				HumanA( std::string name );
				~HumanA( );
		void	setType(std::string s);
		std::string	getName( );
		void	attack( );
	private:
		std::string	_name;
		Weapon _w;
};

#endif
