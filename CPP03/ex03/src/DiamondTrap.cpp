
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( ) : ClapTrap(){
	std::cout << "Default DiamondTrap created" << std::endl;
	this->_name = "DefaultDiamond_dia_name";
	// setName("DefaultDiam");
	setHealth (FragTrap::getHealth());
	setEnergy (ScavTrap::getEnergy());
	setDamage (ScavTrap::getDamage());
}

DiamondTrap::DiamondTrap( std::string name ) : _name(name + "_dia_name") {
	ClapTrap::setName(name + "_clap_name");
	// this->_name = name;
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

void DiamondTrap::attack( const std::string& target ){
	if (getHealth() > 0 && getEnergy() > 0)
	{
		// std::cout << DiamondTrap::getName() << " brutally hits " << target << " for " << getDamage() << " damage\n";
		std::cout << DiamondTrap::_name << " brutally hits " << target << " for " << getDamage() << " damage\n";
		setEnergy(getEnergy() - 1);
	}
	else
		std::cout << _name << " cannot brutally hit " << target << "\n";
}

void	DiamondTrap::whoAmI( ){
	std::cout << "My DiamondTrap name is " << this->_name << " and my ClapTrap name is " << ClapTrap::getName() << " \n";
}
