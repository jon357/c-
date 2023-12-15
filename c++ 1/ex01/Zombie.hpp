#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie
{

public:

	Zombie( void );
	~Zombie( void );
	void announce( void );
    Zombie* newZombie( std::string name );
	void setName( std::string name );

private:

	std::string _name;

};

Zombie *zombieHorde( int N, std::string name );

#endif