#include "Zombie.hpp"

int	main( int argc, char **argv ) {
	Zombie * z = zombieHorde(3, "Yo");
	delete[] z;	
	return 0;
}
