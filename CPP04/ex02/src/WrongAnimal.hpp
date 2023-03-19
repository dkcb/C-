#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal {
	public:
						WrongAnimal();
						WrongAnimal(std::string name);

				virtual	~WrongAnimal();

						WrongAnimal(const WrongAnimal &cpy);
				WrongAnimal	&operator= (const WrongAnimal &cpy);
		
			std::string	getType() const;
		virtual void	makeSound () const;

	protected:
				void	setType(std::string type);
			std::string	type;
};

#endif
