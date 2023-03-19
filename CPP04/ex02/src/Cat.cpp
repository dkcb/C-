#include "Cat.hpp"

Cat::Cat( ){
	std::cout << "+Default Cat created \n";
    // Cat::setType("DefaultCat");
    type = "DefaultCat";
	this->_brain = new Brain();
}

Cat::~Cat( ){
	std::cout << "-Cat '" << Cat::type << "' destroyed\n";
		delete _brain;
}

Cat::Cat( std::string name ){
	std::cout << "+Cat '" << name << "' created \n";
    // Cat::setType("DefaultCat");
	this->_brain = new Brain();
    type = name;
}

Cat::Cat( const Cat &cpy ){
	std::cout << "Cat created - " << cpy.getType() << std::endl;
	type = cpy.type;
	// _brain = cpy._brain;
	_brain = new Brain(*cpy.getBrain());
}

Cat	&Cat::operator= ( const Cat &cpy ){
	type = cpy.type;
	_brain = new Brain(*cpy.getBrain());
	return (*this);
}

void	Cat::makeSound () const{
	std::cout << "Meowww!\n";
}

Brain*		Cat::getBrain() const
{
	return _brain;
}
