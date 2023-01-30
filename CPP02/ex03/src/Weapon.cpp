#include "Weapon.hpp"

Weapon::Weapon( ){
}

Weapon::Weapon( std::string type ) : _type(type){
}

Weapon::~Weapon( ){
}

void	Weapon::setType( const std::string & s ){
	
	 this->_type = s;
}

const std::string &	Weapon::getType( ){
	return this->_type;
}
