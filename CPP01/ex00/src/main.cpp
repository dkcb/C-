#include "Zombie.hpp"

int	main( int argc, char **argv ) {
	randomChump("Yo");
	Zombie * z = newZombie("long");
	z->announce();
	delete z;	
	return 0;
}
