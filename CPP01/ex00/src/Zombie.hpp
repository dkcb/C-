#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie {
	public:
		void		announce( void );
		void		setN( std::string s );
		std::string	getN( );
					Zombie( std::string name );
					~Zombie( );
	private:
		std::string	_name;
};

Zombie *			newZombie( std::string name );
void				randomChump( std::string name );

#endif
