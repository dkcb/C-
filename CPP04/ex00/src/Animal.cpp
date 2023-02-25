#include "Animal.hpp"

Animal::Animal( ) : type("Default"){
	std::cout << "Default Animal created" << std::endl;
}

Animal::~Animal( ){
	std::cout << " Animal destroyed\n";
}

Animal::Animal( const Animal &cpy ){
	type = cpy.type;
}

Animal	&Animal::operator= ( const Animal &cpy ){
	type = cpy.type;
	return (*this);
}

void	Animal::MakeSound (){
	std::cout << "Ouuuu!\n";
}

