#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie {
	public:
		void		announce( void );
		Zombie*		zombieHorde( int N, std::string name );

					Zombie( std::string name);
					~Zombie( );
	private:
		std::string	_name;
};

Zombie *			newZombie( std::string name );

#endif
