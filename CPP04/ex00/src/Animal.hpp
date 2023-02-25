#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal {
	public:
					Animal();
					Animal(std::string name);

					~Animal();

					Animal(const Animal &cpy);
		Animal	&operator= (const Animal &cpy);

		void	MakeSound ();

	protected:
		std::string type;
};

#endif
