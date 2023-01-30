#include "Zombie.hpp"

Zombie::Zombie( ): _name("default"){
	// announce();
}

Zombie::Zombie( std::string name) : _name(name){
	// this->_name = name;
}

Zombie::~Zombie( ){
	std::cout << this->_name << ": Hhhh...\n";
}

Zombie*	newZombie( std::string name ){
	return new Zombie( name );
}

void	Zombie::setN(std::string s){
	 this->_name = s;
}

Zombie*	zombieHorde( int N, std::string name ){
	Zombie *z = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		z[i].setN(name);
		z[i].announce();
	}
	return z;
}

void	Zombie::announce( void ){
		std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}
