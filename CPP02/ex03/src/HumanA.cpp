#include "HumanA.hpp"

HumanA::HumanA( std::string name , Weapon & w ) : _name(name), _w(w){
}

HumanA::~HumanA( ){
}

void	HumanA::attack( ){
	std::cout << this->_name << " attacks with their " << this->_w.getType() << "\n";
}

void	HumanA::setWeapon( const Weapon & w ) {

	this->_w = w;
}

const std::string	HumanA::getName( ){
	return this->_name;
}
