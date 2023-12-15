#ifndef SIFL_H
#define SIFL_H

#include <iostream>
#include <fstream>

class Sifl
{
public:

	Sifl( std::string filename);
	~Sifl();

	void	replace( std::string s1, std::string s2);

private:

	std::string _inFile;
	std::string _outFile;

};

#endif