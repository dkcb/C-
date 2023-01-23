#include "Weapon.hpp"

Weapon::Weapon( ): _type("default"){
}

Weapon::~Weapon( ){
}

void	Weapon::setType(std::string s){
	 this->_type = s;
}

std::string Weapon::getType( ){
	return this->_type;
}
