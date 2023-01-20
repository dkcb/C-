#include "Zombie.hpp"

Zombie::Zombie( ){}

Zombie::~Zombie( ){}

	void	announce( void ){
		std::cout << Zombie::getN() << "BraiiiiiiinnnzzzZ...\n";
}

std::string	Zombie::getN( ){
	return this->_Name;
}

void	Zombie::setN(std::string s) {
	 this->_Name = s;
}
