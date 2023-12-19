#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
public:

	Fixed( void );
	Fixed( const Fixed &a);
	Fixed( const int n);
	Fixed( const float n);
	Fixed& operator=(const Fixed &a);
	~Fixed( void );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	float	toFloat( void ) const;
	int		toInt( void ) const;

private:

	int					_fixed;
	static const int	_fractional = 8;

};

std::ostream& operator<<( std::ostream & o, Fixed const & i );

#endif