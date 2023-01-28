#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name){

}

Zombie::~Zombie( ){}

void	Zombie::announce( void ){
		std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}

std::string	Zombie::getN( ){
	return this->_name;
}

void	Zombie::setN( std::string s ){
	 this->_name = s;
}

