#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
protected:
	std::string _type;

public:
	Animal( void );
	Animal( const Animal& a );
	Animal& operator=( const Animal& a );
	virtual ~Animal( void );

	Animal( std::string type );

	virtual void	makeSound( void ) const;
	std::string		getType( void ) const; 
};

#endif