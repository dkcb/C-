#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	public:
					WrongCat();
					WrongCat(std::string name);

					~WrongCat();

					WrongCat(const WrongCat &cpy);
		WrongCat	&operator= (const WrongCat &cpy);
			void	makeSound () const;

};

#endif
