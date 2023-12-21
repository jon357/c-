#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat( void );
	~Cat( void );

	void	makeSound( void ) const;
};

#endif