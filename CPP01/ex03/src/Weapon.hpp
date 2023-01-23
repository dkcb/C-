#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon {
	public:
		void	setType(std::string s);
		std::string	getType( );
				Weapon( std::string type ) : type_(type);
				~Weapon( );
	private:
		std::string	_type;
};

#endif
