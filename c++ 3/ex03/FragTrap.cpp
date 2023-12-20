#include "FragTrap.hpp"

FragTrap::FragTrap( const std::string name ) : ClapTrap(name)
{
	this->_health = 100;
	this->_energy = 100;
	this->_attack = 30;

	std::cout << "FragTrap " << this->_name << " constructed." << std::endl;
	;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap " << this->_name << " destructed." << std::endl;
	;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << this->_name << " high fives everybody." << std::endl;
	;
}
