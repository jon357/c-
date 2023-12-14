#include "Contact.hpp"

Contact::Contact( void )
{
	return;
}

Contact::~Contact( void )
{
	return;
}

void	Contact::InitContact( void )
{
	
	std::cout << "Enter First Name : ";
	std::cin >> this->_first_name;
 	std::cin.ignore(256,'\n');
	std::cout << "Enter Last Name : ";
	std::cin >> this->_last_name;
	std::cin.ignore(256,'\n');
	std::cout << "Enter Nickname : ";
	std::cin >> this->_nickname;
	std::cin.ignore(256,'\n');
	std::cout << "Enter Phone Number : ";
	std::cin >> this->_phone_number;
	std::cin.ignore(256,'\n');
	std::cout << "Enter Darkest Secret : ";
	std::cin >> this->_darkest_secret;
	std::cin.ignore(256,'\n');
}

void	Contact::ShowContact( int i ) const
{
	std::cout << "|" << std::setw(10) << i << std::flush;
	std::cout << "|" << std::setw(10) << this->_ShowLen(_first_name) << std::flush;
	std::cout << "|" << std::setw(10) << this->_ShowLen(_last_name) << std::flush;
	std::cout << "|" << std::setw(10) << this->_ShowLen(_nickname) << std::flush;
	std::cout << "|" << std::endl;
}

std::string Contact::_ShowLen( std::string str ) const
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void    Contact::Display(int index) const
{
    std::cout << std::endl;
    std::cout << "CONTACT:\t" << index << std::endl;
    std::cout << "First Name:\t" << this->_first_name << std::endl;
    std::cout << "Last Name:\t" << this->_last_name << std::endl;
    std::cout << "Nickname:\t" << this->_nickname << std::endl;
    std::cout << std::endl;
}
