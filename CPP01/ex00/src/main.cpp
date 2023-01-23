#include "Zombie.hpp"

int	main( int argc, char **argv ) {
	// std::cout << "Zombies arriving! \n";
	randomChump("Yo");
	Zombie * z = newZombie("long");
	z->announce();
	delete z;	
	return 0;
}
