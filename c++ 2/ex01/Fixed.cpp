#include "Fixed.hpp"
#include <cmath>

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
Fixed::Fixed( const int n )
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixed = n << _fractional;
}

Fixed::Fixed( const float n )
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixed = roundf(n * ( 1 << _fractional ));
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
	return (this->_fixed);
}

void	Fixed::setRawBits ( int const raw )
{
	this->_fixed = raw;
}

float	Fixed::toFloat( void ) const
{
	return (static_cast<float>( this->getRawBits() ) / ( 1 << _fractional ));
}

int		Fixed::toInt( void ) const
{
	return (this->_fixed >> _fractional);
}

std::ostream& operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return (o);
}
