#include "Sifl.hpp"

Sifl::Sifl( std::string filename )
{
	this->_inFile = filename;
	filename += ".replace";
	this->_outFile = filename;
}

Sifl::~Sifl( void )
{
	;
}

void	Sifl::replace( std::string s1, std::string s2)
{
	if (s1 == s2 || s2.find(s1) != std::string::npos)
	{
		std::cerr << "Error cannot replace by the same." << std::endl;
		return;
	}
	std::ifstream file(this->_inFile.c_str());
	if (file.is_open())
	{
		std::string ligne;
		if (std::getline(file,ligne, '\0'))
		{
			std::size_t found;
			std::ofstream   outfile(this->_outFile.c_str());
			found = ligne.find(s1);
			while (found != std::string::npos)
			{
				ligne.erase(found, s1.length());
				ligne.insert(found, s2);
				found = ligne.find(s1);
			}
			outfile << ligne;
			outfile.close();
		}
		else
		{
			std::cerr << "Empty file." << std::endl;
		}
		file.close();
	}
	else
	{
		std::cout << "Error cant open file." << std::endl;
		return;
	}
	;
}
