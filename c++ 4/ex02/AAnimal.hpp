#ifndef AANIMAL_H
#define AANIMAL_H

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
protected:
	std::string _type;

public:
	AAnimal( void );
	AAnimal( const AAnimal& a );
	AAnimal& operator=( const AAnimal& a );
	virtual ~AAnimal( void );

	AAnimal( std::string type );

	virtual void	makeSound( void ) const = 0;
	std::string		getType( void ) const; 
};

#endif