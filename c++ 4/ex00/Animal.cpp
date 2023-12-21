#include "Animal.hpp"

Animal::Animal( void ) : _type("Avion")
{
	std::cout << this->_type << " constructor called." << std::endl;
}

Animal::Animal( const Animal& a )
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = a;
}

Animal& Animal::operator=( const Animal& a )
{
	std::cout << "Animal assignment operator called." << std::endl;
	if (this != &a)
	{
		this->_type = a._type;
	}
	return *this;
}

Animal::~Animal( void )
{
	std::cout << this->_type << " destructor called." << std::endl;
}

Animal::Animal( std::string type ) : _type(type)
{
    std::cout << "Animal " << this->_type << " constructor called." << std::endl;
}

void	Animal::makeSound( void ) const
{
	std::cout << "Animal makeSound called." << std::endl;
}

std::string		Animal::getType( void ) const
{
	return (this->_type);
}
