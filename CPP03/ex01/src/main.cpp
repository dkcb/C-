#include "ScavTrap.hpp"

int main(){
	ScavTrap f1 ("YOYO");
	ClapTrap f3("Luke");
	// ClapTrap f4("Mike");
	// ClapTrap f2 (f4);

	// f1 = f4;
	f1.attack("rre");
	f1.guardGate();
	// f2.setName("Yo");
	f3.attack(f1.getName());
	// f1.takeDamage(5);
	// f3.setEnergy(5);
	// f1.beRepaired(5);
	// f2.setEnergy(-15);
	// f2.attack(f3.getName());
	return 0;
}