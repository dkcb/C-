
#include "ScavTrap.hpp"

ScavTrap::ScavTrap( ) : ClapTrap(){
	std::cout << "Default ScavTrap created" << std::endl;
	setName("DefaultScav");
}
ScavTrap::ScavTrap( std::string name ){
	std::cout << name <<" ScavTrap created\n";
	setHealth (100);
	setEnergy (100);
	setDamage (100);
	setName(name);
}

ScavTrap::~ScavTrap( ){
	std::cout << getName() << " ScavTrap destroyed\n";
}
