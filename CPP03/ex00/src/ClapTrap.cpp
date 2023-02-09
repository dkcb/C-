
#include "ClapTrap.hpp"

ClapTrap::ClapTrap( ) : _health(10), _energy(10), _damage(0), _name("Default"){
	std::cout << "Default ClapTrap created" << std::endl;
}
ClapTrap::ClapTrap( std::string name ) : _health(10), _energy(10), _damage(0){
	std::cout << name <<" ClapTrap created\n";
	_name = name;
}

ClapTrap::~ClapTrap( ){
	std::cout << _name << "ClapTrap destroyed\n";
}

ClapTrap::ClapTrap( const ClapTrap &nb ){
	std::cout << "Created ClapTrap copy based on " << nb.getName() << " ClapTrap\n";
	*this = nb;
}

ClapTrap	&ClapTrap::operator= ( const ClapTrap &cpy ){
	std::cout << _name << " inherited parameters from " << cpy.getName() << std::endl;
	_health = cpy.getHealth();
	_energy = cpy.getEnergy();
	_damage = cpy.getDamage();
	_name = cpy.getName();
	return (*this);
}

int			ClapTrap::getHealth( void ) const{
	return _health;
}

int			ClapTrap::getEnergy( void ) const{
	return _energy;
}

int			ClapTrap::getDamage( void ) const{
	return _damage;
}

std::string	ClapTrap::getName( void ) const{
	return _name;
}

void		ClapTrap::setHealth( int h){
	_health += h;
	std::cout << _name << " health increased for " << h << " amount of damage and now has " << _health << " health\n";
}

void		ClapTrap::setEnergy( int e){
	_energy += e;
	std::cout << _name << "'s energy changed for " << e << " and now there is " << _energy << " energy\n";
}

void		ClapTrap::setDamage( int d){
	_damage += d;
	std::cout << _name << " energy increased for amount of " << d << " of  and now it is " << _energy << " energy\n";
}

void		ClapTrap::setName( std::string n){
	std::cout << _name << " changed their name to " << n << "\n";
	_name = n;
}

void		ClapTrap::attack(const std::string& target){
	if (_health > 0 && _energy > 0)
	{
		std::cout << _name << " hits " << target << " for " << _damage << " damage\n";
		setEnergy(-1);
	}
	else
		std::cout << _name << " cannot hit " << target << "\n";
}

void		ClapTrap::takeDamage(unsigned int amount){
	_health -= amount;
	std::cout << _name << " took " << amount << " amount of damage and now has " << _health << " health\n";
}

void		ClapTrap::beRepaired(unsigned int amount){
	_health += amount;
	std::cout << _name << " healed for " << amount << " and now has " << _health << " health\n";
}

// void	ClapTrap::setRawBits( int const raw ){
// 	std::cout << "SetRawBits called" << std::endl;
// 	this->_whole = raw;
// 	std::cout << "RawBits have been set to:" << this->_whole << std::endl;
// }
