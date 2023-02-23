
#include "ScavTrap.hpp"

ScavTrap::ScavTrap( ) : ClapTrap(){
	std::cout << "Default ScavTrap created" << std::endl;
	setName("DefaultScav");
}
ScavTrap::ScavTrap( std::string name ) {
	std::cout << name <<" ScavTrap  with name created\n";
	setHealth (100);
	setEnergy (50);
	setDamage (20);
	setName(name);
}

ScavTrap::~ScavTrap( ){
	std::cout << getName() << " ScavTrap destroyed\n";
}

void ScavTrap::attack( const std::string& target ){
	if (ScavTrap::getHealth() > 0 && ScavTrap::getEnergy() > 0)
	{
		std::cout << ScavTrap::getName() << " brutally hits " << target << " for " << ScavTrap::getDamage() << " damage\n";
		setEnergy(getEnergy() - 1);
	}
	else
		std::cout << ScavTrap::getName() << " cannot brutally hit " << target << "\n";
}
void	ScavTrap::guardGate( ){
	std::cout << "ScavTrap" << ScavTrap::getName() << "is now in Gate keeper mode \n";
}
