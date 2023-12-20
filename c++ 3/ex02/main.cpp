#include "FragTrap.hpp"

int main( void )
{
    FragTrap ash( "Ash" );
    FragTrap ash2( ash );

    ash.takeDamage( 10 );
    ash.beRepaired( 10 );
    ash.highFivesGuys();

    return (0);
}