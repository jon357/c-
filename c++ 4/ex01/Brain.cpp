#include "Brain.hpp"

Brain::Brain( void )
{
    std::cout << "Brain created." << std::endl;
}

Brain::Brain( const Brain& a )
{
    *this = a;
}

Brain& Brain::operator=( const Brain& a )
{
    std::cout << "Brain copy called." << std::endl;
    if ( this != &a ) {
        for ( int i = 0; i < 100; i++ ) {
            this->_ideas[i] = a._ideas[i];
        }
    }
    return *this;
}

Brain::~Brain( void )
{
    std::cout << "Brain destroyed." << std::endl;
}