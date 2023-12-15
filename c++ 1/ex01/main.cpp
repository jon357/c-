#include "Zombie.hpp"

int	main(void)
{
	int i = 8;
	Zombie *zomb = zombieHorde(i, "zombii");

	int j = 0;
	while (i > j)
	{
		zomb[j].announce();
		j++;
	}
	delete [] zomb;
	return (0);
}