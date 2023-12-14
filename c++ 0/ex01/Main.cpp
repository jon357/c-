#include "PhoneBook.hpp"

int main(void)
{
	std::string buff;
	PhoneBook Pb;

	while(1)
	{
		std::cout << "Enter ADD, SEARCH or EXIT." << std::endl;
		std::cin >> buff;
		std::cin.ignore(256,'\n');
		if (buff == "ADD")
		{
			Pb.CreateNewContact();
			;
		}
		else if (buff == "SEARCH")
		{
			Pb.ShowContactList();
			;
		}
		else if (buff == "EXIT")
			return (0);
	/*
	*/
	}
	return (0);
}
