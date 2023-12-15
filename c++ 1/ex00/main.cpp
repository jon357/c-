#include "Zombie.hpp"

int	main(void)
{
	Zombie *zomb1 = newZombie("test1");
    zomb1->announce();
    delete zomb1;

	Zombie zomb2("test2");
	zomb2.announce();

	randomChump("test3");

	return (0);
}