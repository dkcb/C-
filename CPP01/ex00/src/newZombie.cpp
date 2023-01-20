#include "newZombie.hpp"

NewZombie::NewZombie( ){

}
NewZombie::~NewZombie( ){

}

Zombie* newZombie( std::string name ){
	Zombie *z;

	z->setN(name);
	return z;
}
