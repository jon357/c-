#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _name(name), _health(10), _energy(10), _attack(0)
{

	std::cout << "ClapTrap " << this->_name << " created." << std::endl;
	;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap " << this->_name << " destroyed." << std::endl;
	;
}

ClapTrap::ClapTrap(const ClapTrap &a)
{
	*this = a;
	std::cout << "ClapTrap copy constructor called." << std::endl;
	return;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& a )
{
	this->_name = a._name;
	this->_health = a._health;
	this->_energy = a._energy;
	this->_attack = a._attack;
    std::cout << "ClapTrap " << this->_name << " has been copied with copy assignment operator." << std::endl;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_health == 0)
	{
		return;
	}
	else if (this->_energy == 0)
	{
		std::cout << "ClapTrap " << this->_name << " no energie left for attacking." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << " , causing " << this->_attack << " points of damage!" << std::endl;
	this->_energy -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_health -= amount;
	std::cout << "ClapTrap " << this->_name << " take " << amount << " health damage!" << std::endl;
	if (this->_health <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_health == 0)
	{
		return;
	}
	else if (this->_energy == 0)
	{
		std::cout << "ClapTrap " << this->_name << " no energie left for reparing." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " repairs itself for " << amount << " health!" << std::endl;
	this->_health += amount;
	this->_energy -= 1;
}
