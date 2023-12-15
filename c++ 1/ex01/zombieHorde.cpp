#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name )
{
	int	i = 0;
	Zombie *zombis = new Zombie[N];
	while (i < N)
	{
		zombis[i].setName(name);
		i++;
	}
	return (zombis);
}