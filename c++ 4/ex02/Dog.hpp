#ifndef DOG_H
#define DOG_H

#include "AAnimal.hpp"

class Dog : public AAnimal
{
public:
	Dog( void );
	Dog( const Dog& a );
	Dog& operator=( const Dog& a );
	~Dog( void );

	void	makeSound( void ) const;

private:
	Brain *_brain;
};

#endif