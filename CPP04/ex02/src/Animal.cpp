#include "Animal.hpp"

Animal::Animal( ) : type("Default"){
	std::cout << "+Default Animal created\n";
}

Animal::Animal( std::string name ){
	std::cout << "+Animal '" << name << "' created \n";
	// Cat::setType("DefaultCat");
	type = name;
}

void Animal::setType( std::string name ){
	std::cout << "+Animal '" << name << "' b=name changed \n";
	// Cat::setType("DefaultCat");
	type = name;
}

Animal::~Animal( ){
	std::cout << "-Animal destroyed\n";
}

Animal::Animal( const Animal &cpy ){
	std::cout << "Animal created - " << cpy.getType() << std::endl;
	type = cpy.type;
}

Animal	&Animal::operator= ( const Animal &cpy ){
	type = cpy.type;
	return (*this);
}

void	Animal::makeSound () const{
	std::cout << "Ouuuu!\n";
}

std::string Animal::getType() const{
	return type;
}
