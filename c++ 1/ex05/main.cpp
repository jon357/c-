#include "Harl.hpp"

int main( void ) {

	std::string	input;
	Harl		harl;

	while (input.compare("exit"))
	{
		std::cout << "Enter a level: ";
		std::cin >> input;
		std::cin.ignore(256,'\n');
		harl.complain(input);
	}

	return (0);
}