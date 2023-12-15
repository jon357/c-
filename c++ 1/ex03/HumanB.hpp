#include "Weapon.hpp"

class HumanB
{
public:

	HumanB( std::string name );
	~HumanB( void );

	void	attack( void ) const;
	void	setWeapon( Weapon& weap);

private:

	Weapon* _weapon;
	std::string	_name;

};
