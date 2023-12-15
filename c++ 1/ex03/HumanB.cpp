#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name)
{
	this->_weapon = NULL;
	;
}

HumanB::~HumanB( void )
{
	;
}

void	HumanB::attack( void ) const
{

	if (this->_weapon != NULL && this->_weapon->getType() != "")
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " attack with it's hands" << std::endl;
}

void	HumanB::setWeapon( Weapon& weap)
{
	this->_weapon = &weap;
}
