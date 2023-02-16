#include "ClapTrap.hpp"

int main(){
	ClapTrap f1;
	ClapTrap f3("Luke");
	ClapTrap f4("Mike");
	ClapTrap f2 (f4);


	f1 = f4;
	f2.setName("Yo");
	f3.attack(f1.getName());
	f1.takeDamage(5);
	f3.setEnergy(5);
	f1.beRepaired(5);
	f2.setEnergy(0);
	f2.attack(f3.getName());
	return 0;
}
