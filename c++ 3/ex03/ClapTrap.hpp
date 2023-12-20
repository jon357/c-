#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
public:

	ClapTrap( std::string name );
	ClapTrap( const ClapTrap& a ); 
	~ClapTrap( void );

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	ClapTrap& operator=(const ClapTrap& a);

protected:

	std::string	_name;
	int	_health;
	int	_energy;
	int	_attack;

};

#endif