#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name) {
}

HumanB::~HumanB( ){
}

void	HumanB::attack( ){
	std::cout << this->_name << " attacks with their " << this->_w->getType() << "\n";
}

void	HumanB::setWeapon( const Weapon & w ){
	_w = (Weapon *)&w;
}

std::string HumanB::getName( ){
	return this->_name;
}
