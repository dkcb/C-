
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( ) : ClapTrap(){
	std::cout << "Default DiamondTrap created" << std::endl;
	this->_name = "DefaultDiamond_dia_name";
	setHealth (FragTrap::getHealth());
	setEnergy (ScavTrap::getEnergy());
	setDamage (ScavTrap::getDamage());
}

DiamondTrap::DiamondTrap( std::string name ) : _name(name + "_dia_name") {
	ClapTrap::setName(name + "_clap_name");
	std::cout << name <<" DiamondTrap  with name created\n";
	setHealth (FragTrap::getHealth());
	setEnergy (ScavTrap::getEnergy());
	setDamage (ScavTrap::getDamage());
}

DiamondTrap::~DiamondTrap( ){
	std::cout << _name << " DiamondTrap destroyed\n";
}

void		DiamondTrap::setName( std::string n){
	std::cout << _name << "'s changed their name to " << n << "\n";
	_name = n;
}

std::string	DiamondTrap::getName( ){
	return _name;
}

void DiamondTrap::attack( const std::string& target ){
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI( ){
	std::cout << "My DiamondTrap name is " << this->_name << " and my ClapTrap name is " << ClapTrap::getName() << " \n";
}
