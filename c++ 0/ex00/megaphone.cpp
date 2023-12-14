#include <iostream>

void toUp(char *str)
{
	while (*str)
	{
		*str = std::toupper(*str);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 1)
		std::cout << ("* LOUD AND UNBEARABLE FEEDBACK NOISE *") << std::endl;
	else
	{
		while (argv[++i])
		{
			void (*toUpPtr)(char *) = toUp;
			toUpPtr(argv[i]);
			std::cout << argv[i];
		}
		std::cout << std::endl;
	}
	return (0);
}