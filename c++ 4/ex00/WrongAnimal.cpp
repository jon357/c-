#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type("Space")
{
	std::cout << this->_type << " constructor called." << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& a )
{
	std::cout << "Wrong Animal copy constructor called." << std::endl;
	*this = a;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& a )
{
	std::cout << "Wrong Animal assignment operator called." << std::endl;
	if (this != &a)
	{
		this->_type = a._type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << this->_type << " destructor called." << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : _type(type)
{
    std::cout << "Wrong Animal " << this->_type << " constructor called." << std::endl;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "Wrong Animal makeSound called." << std::endl;
}

std::string		WrongAnimal::getType( void ) const
{
	return (this->_type);
}
