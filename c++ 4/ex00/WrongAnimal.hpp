#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal
{
protected:
	std::string _type;

public:
	WrongAnimal( void );
	WrongAnimal( const WrongAnimal& a );
	WrongAnimal& operator=( const WrongAnimal& a );
	virtual ~WrongAnimal( void );

	WrongAnimal( std::string type );

	virtual void	makeSound( void ) const;
	std::string		getType( void ) const; 
};

#endif