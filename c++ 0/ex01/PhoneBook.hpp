#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook {

public:

	PhoneBook( void );
	~PhoneBook( void );
	void CreateNewContact(void);
	void ShowContactList(void);

private:

	Contact _ContactList[8];
	int	_ContactNum;


};

#endif