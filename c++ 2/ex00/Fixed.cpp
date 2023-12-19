#include "Fixed.hpp"

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixed = 0;
}

Fixed::Fixed( const Fixed &a)
{
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(a.getRawBits());
}

Fixed& Fixed::operator=(const Fixed &a)
{
    std::cout << "Copy assignment operator called" << std::endl;
	if (this != &a)
	{
		this->_fixed = a.getRawBits();
	}
	return *this;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits ( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed);
}

void	Fixed::setRawBits ( int const raw )
{
	this->_fixed = raw;
}
