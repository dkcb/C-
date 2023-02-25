#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap , public ScavTrap {
	public:
					DiamondTrap( );
					DiamondTrap( std::string name );
					~DiamondTrap( );
			void	attack( const std::string& target );
			void	whoAmI( );
			void	setName( std::string name );
		std::string	getName( );

	private:
		std::string _name;
};

#endif
