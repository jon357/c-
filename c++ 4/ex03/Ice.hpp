#ifndef ICE_H
#define ICE_H

class Ice
{
public:
	Ice( void );
	Ice( const Ice &a );
	~Ice( void );
	Ice& operator=( const Ice &a);
};

#endif