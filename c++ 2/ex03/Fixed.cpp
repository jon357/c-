#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed( void )
{
	this->_fixed = 0;
}

Fixed::Fixed( const Fixed &a)
{
	this->setRawBits(a.getRawBits());
}
Fixed::Fixed( const int n )
{
	this->_fixed = n << _fractional;
}

Fixed::Fixed( const float n )
{
	this->_fixed = roundf(n * ( 1 << _fractional ));
}

Fixed& Fixed::operator=(const Fixed &a)
{
	if (this != &a)
	{
		this->_fixed = a.getRawBits();
	}
	return *this;
}

Fixed::~Fixed( void )
{
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


/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////

bool	Fixed::operator<(const Fixed &a) const
{
	return (this->getRawBits() < a.getRawBits());
}

bool	Fixed::operator>(const Fixed &a) const
{
	return (this->getRawBits() > a.getRawBits());
}

bool	Fixed::operator>=(const Fixed &a) const
{
	return (this->getRawBits() >= a.getRawBits());
}

bool	Fixed::operator<=(const Fixed &a) const
{
	return (this->getRawBits() <= a.getRawBits());
}

bool	Fixed::operator==(const Fixed &a) const
{
	return (this->getRawBits() == a.getRawBits());
}

bool	Fixed::operator!=(const Fixed &a) const
{
	return (this->getRawBits() != a.getRawBits());
}

/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////

Fixed	Fixed::operator+(const Fixed &a) const
{
	return (Fixed( this->toFloat() + a.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &a) const
{
	return (Fixed( this->toFloat() - a.toFloat()));
}
Fixed	Fixed::operator*(const Fixed &a) const
{
	return (Fixed( this->toFloat() * a.toFloat()));
}
Fixed	Fixed::operator/(const Fixed &a) const
{
	return (Fixed( this->toFloat() / a.toFloat()));
}

/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////

Fixed&	Fixed::operator++( void )
{
	++this->_fixed;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed tmp( *this );
	tmp._fixed = this->_fixed++;
	return (tmp);
}

Fixed&	Fixed::operator--( void )
{
	--this->_fixed;
	return (*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed tmp( *this );
	tmp._fixed = this->_fixed--;
	return (tmp);
}

/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////

Fixed& Fixed::min( Fixed &a, Fixed &b ) {
    if ( a.getRawBits() < b.getRawBits() )
        return a;
    return b;
}

const Fixed& Fixed::min( const Fixed &a, const Fixed &b ) {
    if ( a.getRawBits() < b.getRawBits() )
        return a;
    return b;
}

Fixed& Fixed::max( Fixed &a, Fixed &b ) {
    if ( a.getRawBits() > b.getRawBits() )
        return a;
    return b;
}

const Fixed& Fixed::max( const Fixed &a, const Fixed &b ) {
    if ( a.getRawBits() > b.getRawBits() )
        return a;
    return b;
}