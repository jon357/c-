
#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap clap("Ash");

    clap.attack("Staff");
    clap.takeDamage(5);
    clap.beRepaired(2);
    clap.attack("Staff");
    clap.attack("Staff");
    clap.attack("Staff");
    clap.attack("Staff");
    clap.attack("Staff");
    clap.attack("Staff");
    clap.attack("Staff");
    clap.attack("Staff");
    clap.attack("Staff");
    clap.beRepaired(3);
    clap.takeDamage(8);

    return (0);
}