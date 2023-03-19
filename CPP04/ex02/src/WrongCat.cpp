#include "WrongCat.hpp"

WrongCat::WrongCat( ){
	std::cout << "+Default Cat created \n";
    // Cat::setType("DefaultCat");
    type = "DefaultCat";
}

WrongCat::~WrongCat( ){
	std::cout << "-WrongCat '" << WrongCat::type << "' destroyed\n";
}

WrongCat::WrongCat( std::string name ){
	std::cout << "+WrongCat '" << name << "' created \n";
    // Cat::setType("DefaultCat");
    type = name;
}

WrongCat::WrongCat( const WrongCat &cpy ){
	std::cout << "WrongCat created - " << cpy.getType() << std::endl;
	type = cpy.type;
}

WrongCat	&WrongCat::operator= ( const WrongCat &cpy ){
	type = cpy.type;
	return (*this);
}

void	WrongCat::makeSound () const{
	std::cout << "Wrong Meowww!\n";
}
