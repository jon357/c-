#include "ScavTrap.hpp"

ScavTrap::ScavTrap( const std::string name ) : ClapTrap(name)
{
	this->_health = 100;
	this->_energy = 50;
	this->_attack = 20;

	std::cout << "ScavTrap " << this->_name << " constructed." << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap " << this->_name << " destructed." << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_health == 0)
	{
		return;
	}
	else if (this->_energy == 0)
	{
		std::cout << "ScavTrap " << this->_name << " no energie left for attacking." << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target << " , causing " << this->_attack << " points of damage!" << std::endl;
	this->_energy -= 1;
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}
