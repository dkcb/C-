#include "DiamondTrap.hpp"

int main(){
	FragTrap f1 ("HEY");
	ClapTrap f3("Luke");
	// ClapTrap f4("Mike");
	DiamondTrap f2 ("DiA");

	// f1 = f4;
	f1.attack("rre");
	f1.highFivesGuys();
	// f2.setName("Yo");
	f3.attack(f1.getName());
	// f1.takeDamage(5);
	// f3.setEnergy(5);
	// f1.beRepaired(5);
	// f2.setEnergy(-15);
	// f2.attack(f3.getName());
	return (0);
}
