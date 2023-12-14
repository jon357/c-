#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void )
{
	this->_ContactNum = -1;
	return;
}

PhoneBook::~PhoneBook( void )
{
	return;
}

void	PhoneBook::CreateNewContact( void )
{
	this->_ContactNum++;
	this->_ContactList[this->_ContactNum % 8].InitContact();
}

void	PhoneBook::ShowContactList( void )
{
	int index;
	int i = 0;
	if (this->_ContactNum == -1)
		return;
	std::cout << "|     Index| Fist Name| Last Name|  Nickname|" << std::endl;
	while (i <= this->_ContactNum && i < 8)
	{
		this->_ContactList[i].ShowContact(i);
		i++;
	}
	std::cout << "Enter a Index :" ;
	std::cin >> index;
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(256, '\n');
	}
	std::cin.ignore(256,'\n');
	if (index > i)
		std::cout << "Bad index" << std::endl ;
	else
		this->_ContactList[index].Display(index);
	
}
