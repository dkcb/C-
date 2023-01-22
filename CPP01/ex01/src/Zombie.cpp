#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name){}

Zombie::~Zombie( ){}

Zombie*	zombieHorde( int N, std::string name ){
	return new Zombie(name);
}

void	Zombie::announce( void ){
		std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}
