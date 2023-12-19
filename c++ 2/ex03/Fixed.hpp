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

	bool	operator<(const Fixed &a) const;
	bool	operator>=(const Fixed &a) const;
	bool	operator>(const Fixed &a) const;
	bool	operator<=(const Fixed &a) const;
	bool	operator==(const Fixed &a) const;
	bool	operator!=(const Fixed &a) const;

	Fixed	operator+(const Fixed &a) const;
	Fixed	operator-(const Fixed &a) const;
	Fixed	operator*(const Fixed &a) const;
	Fixed	operator/(const Fixed &a) const;

	Fixed& operator++( void );
	Fixed operator++( int );
	Fixed& operator--( void );
	Fixed operator--( int );

    static Fixed& min( Fixed &a, Fixed &b );
    static const Fixed& min( const Fixed &a, const Fixed &b );
    static Fixed& max( Fixed &a, Fixed &b );
    static const Fixed& max( const Fixed &a, const Fixed &b );

private:

	int					_fixed;
	static const int	_fractional = 8;

};

std::ostream& operator<<( std::ostream & o, Fixed const & i );

#endif