#include "Zombie.hpp"

Zombie::Zombie( ){}

Zombie::~Zombie( ){}

void	Zombie::announce( void ){
		std::cout << this->_Name << ": BraiiiiiiinnnzzzZ...\n";
}

std::string	Zombie::getN( ){
	return this->_Name;
}

void	Zombie::setN(std::string s){
	 this->_Name = s;
}
