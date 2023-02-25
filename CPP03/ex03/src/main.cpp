#include "DiamondTrap.hpp"

int main(){
	FragTrap f1 ("HEY");
	ClapTrap f3("Luke");
	// ClapTrap f4("Mike");
	DiamondTrap f2 ("DiA");

	// f1 = f4;
	f2.ScavTrap::attack("Tkdsjfhj");
	std::cout << "hp " << f2.getHealth() << " enegy " << f2.getEnergy() << "\n";
	f2.attack("Tkdsjfhj");
	f2.whoAmI();
	std::cout << "hp " << f2.getHealth() << " enegy " << f2.getEnergy() << "\n";
	// f1.attack("rre");
	// f1.highFivesGuys();
	f2.setName("Yo");
	// f3.attack(f1.getName());
	// f1.takeDamage(5);
	// f3.setEnergy(5);
	// f1.beRepaired(5);
	// f2.setEnergy(-15);
	f2.attack(f3.getName());
	std::cout << "DiaName  " << f2.getName() << "\n";
	return (0);
}
