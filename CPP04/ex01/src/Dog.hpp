#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"
// #include "Cat.hpp"


class Dog : public Animal{
	public:
					Dog();
					Dog(std::string name);

					~Dog();

					Dog(const Dog &cpy);
		Dog	&operator= (const Dog &cpy);
			void	makeSound () const;

};

#endif
