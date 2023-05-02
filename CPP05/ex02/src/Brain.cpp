#include "Brain.hpp"

Brain::Brain( ){
	std::cout << "+Default Brain created\n";
}

Brain::~Brain( ){
	std::cout << "-Brain destroyed\n";
}

Brain::Brain( const Brain &cpy ){
	std::cout << "+Brain copy created " << std::endl;
	*this = cpy;
}

Brain	&Brain::operator= ( const Brain &cpy ){
	for (int i = 0; i < 100; i++)
	{
		_ideas[i] = cpy._ideas[i];
	}
	return (*this);
}

void Brain::setIdea(int index, std::string idea) {
	_ideas[index] = idea;
}

std::string Brain::getIdea(int index) {
	return _ideas[index];
}
