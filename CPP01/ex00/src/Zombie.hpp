#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class Zombie {
	public:
		void		announce( void );
		void		randomChump( std::string name );
		void		setN(std::string s);
		std::string	getN( );
		Zombie*		newZombie( std::string name );
					Zombie( );
					~Zombie( );
	private:
		std::string	_Name;
};
#endif
