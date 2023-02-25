#ifndef CAT_HPP
# define CAT_HPP
#include "Animal.hpp"

class Cat : protected Animal{
	public:
					Cat();
					Cat(std::string name);

					~Cat();

					Cat(const Cat &cpy);
		Cat	&operator= (const Cat &cpy);
};

#endif
