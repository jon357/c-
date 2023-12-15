#include "Sifl.hpp"

int main(int argc, char **	argv)
{
	(void)argv;
	if (argc != 4)
	{	
		std::cerr << "bad arg count." << std::endl;
		return (1);
	}
	Sifl file(argv[1]);

	file.replace(argv[2], argv[3]);

	return (0);
}