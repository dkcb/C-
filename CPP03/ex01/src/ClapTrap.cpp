
#include "ClapTrap.hpp"

ClapTrap::ClapTrap( ) : _health(10), _energy(10), _damage(0), _name("Default"){
	std::cout << "Default ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _health(10), _energy(10), _damage(0), _name(name){
	std::cout << name <<" ClapTrap created\n";
}

ClapTrap::~ClapTrap( ){
	std::cout << _name << "ClapTrap destroyed\n";
}

ClapTrap::ClapTrap( const ClapTrap &cpy ){
	std::cout << "Created ClapTrap copy based on " << cpy.getName() << " ClapTrap\n";
	_health = cpy.getHealth();
	_energy = cpy.getEnergy();
	_damage = cpy.getDamage();
	_name = cpy.getName();
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
	std::cout << _name << "'s health changed for amount of " << h - _health << ", health is " <<  h << ".\n";
	_health = h;
}

void		ClapTrap::setEnergy( int e){
	std::cout << _name << "'s energy  changed for amount of " << e - _energy  << ", energy is " <<  e << ".\n";
	_energy = e;
}

void		ClapTrap::setDamage( int d){
	std::cout << _name << "'s damage changed for amount of " << d - _damage << ", damage is " <<  d << ".\n";
	_damage = d;
}

void		ClapTrap::setName( std::string n){
	std::cout << _name << "'s changed their name to " << n << "\n";
	_name = n;
}

void		ClapTrap::attack(const std::string& target){
	if (_health > 0 && _energy > 0)
	{
		std::cout << _name << " hits " << target << " for " << _damage << " damage\n";
		setEnergy(_energy - 1);
	}
	else
		std::cout << _name << " cannot hit " << target << "\n";
}

void		ClapTrap::takeDamage(unsigned int amount){
	// _health -= amount;
	std::cout << _name << " took " << amount << " of damage ";
	setHealth(_health - amount);
}

void		ClapTrap::beRepaired(unsigned int amount){
	std::cout << _name << " been repaired, so ";
	setHealth( _health + amount);
	setEnergy( _energy - 1);
}
