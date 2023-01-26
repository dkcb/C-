#include <iostream>
#include <fstream>

std::string	replace(std::string s, std::string rep)
{
	int sizer = rep.size();
	int sizes = s.size();
	int c = 0;

	while (s.find(rep))
	{
		while (c < sizes)
		{
			for (int i = 0; i < sizer ; i++)
				s[s.find(rep) + i] = rep[i];
			c++;
		}
	}
		std::cout << s << "\n";
	return (s);
}

int	main( int argc, char **argv ) {
	if (argc != 4)
		return 0;
	std::ifstream src;
	std::ofstream dest;
	src.open (argv[1]);
	dest.open (std::string(argv[1]) + ".replace");
	if (src.is_open( ) && dest.is_open( ))
		std::cout << argv[1] << argv[2];
	else
		std::cout << "Files opening fail!\n";
	std::string line;
	while (!src.eof())
	{
		getline (src, line);
		dest << replace(line, argv[3]) << std::endl;
		// std::cout << line << "< line | toreplace > " << argv[2] << " with " << argv[3] << "\n";
	}
	dest.close( );
	src.close( );
	return 0;
}

		// if (c % sizer == 0 && s.compare(rep) == 0)
		// {
			// std::cout << s.substr(c, sizer);
			// std::cout << "YO!";
		// }