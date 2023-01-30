#include "Harl.hpp"

Harl::Harl( ){}
Harl::~Harl( ){}

void	Harl::debug( void ){
	std::cout << "This car have black smoke coming from the motor!\n";
}

void	Harl::info( void ){
	std::cout << "This car have green color\n";
}

void	Harl::warning( void ){
	std::cout << "Check fuel level!\n";
}

void	Harl::error( void ){
	std::cout << "The motor is dead!\n";
}

void	Harl::notfound( void ){
	std::cout << "Have no complains about this!\n";
}

void	Harl::complain( std::string level ){
	void	( Harl::*_funptr[5] )( void ) = {&Harl::debug, &Harl::info, &Harl::warning,&Harl::error, &Harl::notfound};
	const std::string	levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	int index = std::find(levels, levels + 4, level) - levels;
	(this->*_funptr[index])();
}