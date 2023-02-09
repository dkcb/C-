#include <iostream>
#include <fstream>

std::string	replace(std::string s, std::string ndl, std::string rep)
{
	int pos;
	int replen;

	while (s.find(ndl) != std::string::npos)
		s = s.substr(0, s.find(ndl)) + rep + s.substr(s.find(ndl) + ndl.size());
	return (s);
}

int	main( int argc, char **argv ) {
	if (argc != 4)
		return 0;
	std::fstream src(argv[1]);
	std::ofstream dest;
	if (src.is_open( ))
	{
		dest.open (std::string(argv[1]) + ".replace");
		if (dest.is_open( ))
		{
			std::string line;
			while (!src.eof())
			{
				getline (src, line);
				if (argv[2][0] != '\0' && line.size() != 0)
					dest << replace(line, argv[2], argv[3]) << std::endl;
				if (argv[2][0] == '\0' && line.size() != 0)
					dest << line << std::endl;
			}
			dest.close( );
			src.close( );
		}
		else
			std::cout << "Files opening fail!\n";
	}
	else
		std::cout << "Files opening fail!\n";
	return 0;
}
