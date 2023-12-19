#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
public:

	Fixed( void );
	Fixed( const Fixed &a);
	Fixed& operator=(const Fixed &a);
	~Fixed( void );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

private:

	int					_fixed;
	static const int	_fractional = 8;

};

#endif