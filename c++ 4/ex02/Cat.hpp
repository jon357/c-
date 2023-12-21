#ifndef CAT_H
#define CAT_H

#include "AAnimal.hpp"

class Cat : public AAnimal
{
public:
	Cat( void );
	Cat( const Cat& a );
	Cat& operator=( const Cat& a );
	~Cat( void );

	void	makeSound( void ) const;

private:
	Brain *_brain;
};

#endif