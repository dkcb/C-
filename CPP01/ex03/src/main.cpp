#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
	Weapon  club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
    HumanB jim("Jim");
    jim.attack();
    jim.setWeapon(club);
    jim.attack();
    club.setType("some third type of club");
    jim.attack();
	return 0;
}
