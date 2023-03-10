#include "Cat.hpp"

Cat::Cat( ){
	std::cout << "+Default Cat created \n";
    // Cat::setType("DefaultCat");
    type = "DefaultCat";
}

Cat::~Cat( ){
	std::cout << "-Cat '" << Cat::type << "' destroyed\n";
}

Cat::Cat( std::string name ){
	std::cout << "+Cat '" << name << "' created \n";
    // Cat::setType("DefaultCat");
    type = name;
}

Cat::Cat( const Cat &cpy ){
	std::cout << "Cat created - " << cpy.getType() << std::endl;
	type = cpy.type;
}

Cat	&Cat::operator= ( const Cat &cpy ){
	type = cpy.type;
	return (*this);
}

void	Cat::makeSound () const{
	std::cout << "Meowww!\n";
}
