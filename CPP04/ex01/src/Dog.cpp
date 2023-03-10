#include "Dog.hpp"

Dog::Dog( ){
	std::cout << "+Default Dog created \n";
    // Dog::setType("DefaultDog");
    type = "DefaultDog";
}

Dog::~Dog( ){
	std::cout << "-Dog '" << Dog::type << "' destroyed\n";
}

Dog::Dog( std::string name ){
	std::cout << "+Dog '" << name << "' created \n";
    // Dog::setType("DefaultDog");
    type = name;
}

Dog::Dog( const Dog &cpy ){
	std::cout << "Dog created - " << cpy.getType() << std::endl;
	type = cpy.type;
}

Dog	&Dog::operator= ( const Dog &cpy ){
	type = cpy.type;
	return (*this);
}

void	Dog::makeSound () const{
	std::cout << "Woof!\n";
}
