#include "DiamondTrap.hpp"
DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), FragTrap( name ), ScavTrap( name )
{
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";

	FragTrap::_health = 100;
	ScavTrap::_energy = 50;
	FragTrap::_attack = 30;

	std::cout << "DiamondTrap " << this->_name << " assambled." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " is dead." << std::endl;
}

void	DiamondTrap::whoAmI()
{
    std::cout << "I am a DiamondTrap named " << this->_name << ", ClapTrap name: " << ClapTrap::_name << std::endl;
}
