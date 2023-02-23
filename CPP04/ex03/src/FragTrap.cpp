
#include "FragTrap.hpp"

FragTrap::FragTrap( ) : ClapTrap(){
	std::cout << "Default FragTrap created" << std::endl;
	setName("DefaultFrag");
}
FragTrap::FragTrap( std::string name ) {
	std::cout << name <<" FragTrap  with name created\n";
	setHealth (100);
	setEnergy (100);
	setDamage (30);
	setName(name);
}

FragTrap::~FragTrap( ){
	std::cout << getName() << " FragTrap destroyed\n";
}

void FragTrap::attack( const std::string& target ){
	if (FragTrap::getHealth() > 0 && FragTrap::getEnergy() > 0)
	{
		std::cout << FragTrap::getName() << " hits hard " << target << " for " << FragTrap::getDamage() << " damage\n";
		setEnergy(getEnergy() - 1);
	}
	else
		std::cout << FragTrap::getName() << " cannot brutally hit " << target << "\n";
}
void	FragTrap::highFivesGuys( ){
	std::cout << "FragTrap " << FragTrap::getName() << " is now trying to High Five everyone \n";
}
