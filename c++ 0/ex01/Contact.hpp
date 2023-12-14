#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <iostream>
#include <iomanip>

class Contact {

public:

	Contact( void );
	~Contact( void );
	void InitContact( void );
	void ShowContact( int i ) const;
	void Display(int index) const;

private:

	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;

	std::string _ShowLen( std::string str ) const;

};

#endif