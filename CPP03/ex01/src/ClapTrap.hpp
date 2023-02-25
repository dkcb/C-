#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap {
	public:
					ClapTrap( );
					ClapTrap( std::string name );

					~ClapTrap( );

					ClapTrap( const ClapTrap &cpy );
		ClapTrap	&operator= ( const ClapTrap &cpy );

		int			getHealth( void ) const;
		int			getEnergy( void ) const;
		int			getDamage( void ) const;
		std::string	getName( void ) const;
		void		setHealth( int h);
		void		setEnergy( int e);
		void		setDamage( int d);
		void		setName( std::string n);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);


	protected:
		int			_health;
		int			_energy;
		int			_damage;
		std::string	_name;
};

#endif
