#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog")
{
	std::cout << "Dog.cpp" << this->_type << " constructor called." << std::endl;
	this->_brain = new Brain();
}

Dog::Dog( const Dog& a ) : Animal(a)
{
	std::cout << "Dog.cpp copy constructor called." << std::endl;
	*this = a;
}

Dog& Dog::operator=( const Dog& a )
{
	std::cout << "Dog.cpp copy called." << std::endl;
	if (this != &a)
	{
		this->_type = a._type;
		this->_brain = new Brain( *a._brain );
	}
	return *this;
}

Dog::~Dog( void )
{
	std::cout << "Dog.cpp " << this->_type << " destructor called." << std::endl;
	delete this->_brain;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Woaf!" << std::endl;
}
