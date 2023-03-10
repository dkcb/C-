#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain {
	public:
						Brain();
				virtual	~Brain();

						Brain(const Brain &cpy);
				Brain	&operator= (const Brain &cpy);
		
			virtual std::string	getIdea(int i) const;
			virtual void setIdea (int i, std::string text) const;

	protected:
			std::string	_ideas[100];
};

#endif
