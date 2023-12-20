#include "DiamondTrap.hpp"

int main( void )
{
    DiamondTrap ash( "Ash" );
    DiamondTrap ash2( ash );
    DiamondTrap ash3(".");

    ash.whoAmI();
    ash2.whoAmI();
    ash3 = ash;
    ash3.whoAmI();
    
    ash.highFivesGuys();
    ash2.highFivesGuys();
    ash3.highFivesGuys();

    ash.guardGate();
    ash2.guardGate();
    ash3.guardGate();

    ash.attack( "the air" );
    ash.takeDamage( 10 );
    ash.beRepaired( 10 );

    return (0);
}