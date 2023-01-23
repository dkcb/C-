#ifndef HumanA_HPP
# define HumanA_HPP
# include <iostream>

class HumanA {
	public:
		void	setType(std::string s);
		std::string	getType( );
				HumanA( );
				~HumanA( );
	private:
		std::string	_type;
};

#endif
