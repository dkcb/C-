#ifndef CAT_HPP
# define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal{
	public:
					Cat();
					Cat(std::string name);

					~Cat();

					Cat(const Cat &cpy);
		Cat	&operator= (const Cat &cpy);
			void	makeSound () const;
			Brain*	getBrain() const;

	private:
			Brain *_brain;

};

#endif
