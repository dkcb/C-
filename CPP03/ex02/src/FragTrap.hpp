#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
				~FragTrap( );
				FragTrap( );
				FragTrap( std::string name );
		void	attack( const std::string& target );
		void	highFivesGuys(void);


	private:
				
};

#endif
