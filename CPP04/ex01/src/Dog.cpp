#include "Dog.hpp"

Dog::Dog( ){
	std::cout << "+Default Dog created \n";
    // Dog::setType("DefaultDog");
	this->_brain = new Brain();
    type = "DefaultDog";
}

Dog::~Dog( ){
	std::cout << "-Dog '" << Dog::type << "' destroyed\n";
	delete _brain;
}

Dog::Dog( std::string name ){
	std::cout << "+Dog '" << name << "' created \n";
    // Dog::setType("DefaultDog");
    type = name;
	this->_brain = new Brain();
}

Dog::Dog( const Dog &cpy ){
	std::cout << "Dog created - " << cpy.getType() << std::endl;
	type = cpy.type;
	_brain = new Brain(*cpy.getBrain());
}

Dog	&Dog::operator= ( const Dog &cpy ){
	type = cpy.type;
	_brain = new Brain(*cpy.getBrain());
	return (*this);
}

void	Dog::makeSound () const{
	std::cout << "Woof!\n";
}
