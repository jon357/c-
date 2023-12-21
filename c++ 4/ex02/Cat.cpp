#include "Cat.hpp"

Cat::Cat( void ) : AAnimal("Cat")
{
	std::cout << "Cat.cpp " << this->_type << " constructor called." << std::endl;
	this->_brain = new Brain();
}

Cat::Cat( const Cat& a ) : AAnimal(a)
{
	std::cout << "Cat.cpp copy constructor called." << std::endl;
	*this = a;
}

Cat& Cat::operator=( const Cat& a )
{
	std::cout << "Cat.cpp copy called." << std::endl;
	if (this != &a)
	{
		this->_type = a._type;
		this->_brain = new Brain( *a._brain );
	}
	return *this;
}

Cat::~Cat( void )
{
	std::cout << "Cat.cpp " << this->_type << " destructor called." << std::endl;
	delete this->_brain;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow!" << std::endl;
}
