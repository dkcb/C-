
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( ) : ClapTrap(){
	std::cout << "Default DiamondTrap created" << std::endl;
	setName("DefaultScav");
}
DiamondTrap::DiamondTrap( std::string name ) {
	std::cout << name <<" DiamondTrap  with name created\n";
	setHealth (100);
	setEnergy (50);
	setDamage (20);
	setName(name);
}

DiamondTrap::~DiamondTrap( ){
	std::cout << getName() << " DiamondTrap destroyed\n";
}

void DiamondTrap::attack( const std::string& target ){
	if (DiamondTrap::getHealth() > 0 && DiamondTrap::getEnergy() > 0)
	{
		std::cout << DiamondTrap::getName() << " brutally hits " << target << " for " << DiamondTrap::getDamage() << " damage\n";
		setEnergy(getEnergy() - 1);
	}
	else
		std::cout << DiamondTrap::getName() << " cannot brutally hit " << target << "\n";
}
void	DiamondTrap::whoAmI( ){
	std::cout << "DiamondTrap" << DiamondTrap::getName() << " and ClapTrap " << ClapTrap::getName() << "is now in Gate keeper mode \n";
}
