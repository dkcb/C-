#include "HumanA.hpp"

HumanA::HumanA( std::string name ) : _name(name){

}

HumanA::~HumanA( ){
	std::cout << this->_name << " attacks with their " << this->_w.getType() << "\n";
}

void	HumanA::attack(){
	std::cout << this->_name << ": Hhhh...\n";

}

void	HumanA::setType(std::string s){
	 this->_name = s;
}

std::string HumanA::getName( ){
	return this->_name;
}
