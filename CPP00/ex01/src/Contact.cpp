#include "Contact.hpp"

Contact::Contact( )
{

}
Contact::~Contact( )
{

}

int	Contact( int argc, char **argv ) {
	int	i = 1;

	if (argc <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 1;
	}
	while (argv[i])
	{
		for (int j = 0; argv[i][j]; j++)
			std::cout << (char)std::toupper(argv[i][j]);
		i++;
	}
	std::cout << std::endl;
	return 0;
}
