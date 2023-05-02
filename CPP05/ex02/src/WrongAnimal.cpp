#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( ) : type("Default"){
	std::cout << "+Default WrongAnimal created\n";
}

WrongAnimal::WrongAnimal( std::string name ){
	std::cout << "+WrongAnimal '" << name << "' created \n";
	// Cat::setType("DefaultCat");
	type = name;
}

WrongAnimal::~WrongAnimal( ){
	std::cout << "-WrongAnimal destroyed\n";
}

WrongAnimal::WrongAnimal( const WrongAnimal &cpy ){
	std::cout << "WrongAnimal created - " << cpy.getType() << std::endl;
	type = cpy.type;
}

WrongAnimal	&WrongAnimal::operator= ( const WrongAnimal &cpy ){
	type = cpy.type;
	return (*this);
}

void	WrongAnimal::makeSound () const{
	std::cout << "Wrong Ouuuu!\n";
}

std::string WrongAnimal::getType() const{
	return type;
}
