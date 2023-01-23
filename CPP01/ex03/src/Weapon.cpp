#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type){

}

Weapon::~Weapon( ){
}

void	Weapon::setType(std::string s){
	 this->_type = s;
}

std::string Weapon::getType( ){
	return this->_type;
}