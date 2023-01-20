#include "randomChump.hpp"

int	main( int argc, char **argv ) {
	Zombie	z;
	std::string prompt;
	int	i = 0;
	int	m = 1;

	std::cout << "Zombies arriving! \n";
	z.setN("Freddy");
	z.announce();
	// Zombie::newZombie();
	
	return 0;
}
