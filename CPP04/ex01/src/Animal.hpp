#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include "Brain.hpp"

class Animal {
	public:
						Animal();
						Animal(std::string name);

				virtual	~Animal();

						Animal(const Animal &cpy);
				Animal	&operator= (const Animal &cpy);
		
			std::string	getType() const;
		virtual void	makeSound () const;

				Brain*	getBrain() const;

	protected:
		virtual	void	setType(std::string type);
			std::string	type;
				Brain	*_brain;
};

#endif
