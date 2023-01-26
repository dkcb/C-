#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name){
	this->_w = new Weapon("bare hands");
}

HumanB::~HumanB( ){
}

void	HumanB::attack(){
	std::cout << this->_name << " attacks with their " << this->_w->getType() << "\n";
}

void	HumanB::setWeapon(const Weapon & w){
	delete this->_w;
	_w = (Weapon *)&w;
}

const std::string	HumanB::getName( ){
	return this->_name;
}
