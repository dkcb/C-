#include "HumanA.hpp"

HumanA::HumanA( std::string name , Weapon & w) : _name(name), _w(&w){

}

HumanA::~HumanA( ){

}

void	HumanA::attack(){
	std::cout << this->_name << " attacks with their " << this->_w->getType() << "\n";
}

void	HumanA::setWeapon( const Weapon & w ) {

	delete this->_w;
	this->_w = new Weapon(w);
}

std::string HumanA::getName( ){
	return this->_name;
}
