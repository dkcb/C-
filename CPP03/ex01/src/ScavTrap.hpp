#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {
	public:
				~ScavTrap( );
				ScavTrap( );
				ScavTrap( std::string name );
		void	attack( const std::string& target );
		void	guardGate( );


	private:
				
};

#endif
