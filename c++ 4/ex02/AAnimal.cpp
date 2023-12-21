#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("Unknown")
{
    std::cout << "AAnimal.cpp default constructor called." << std::endl;
}

AAnimal::AAnimal(const AAnimal& a) : _type(a._type)
{
    std::cout << "AAnimal.cpp copy constructor called." << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& a)
{
    std::cout << "AAnimal.cpp assignment operator called." << std::endl;
    if (this != &a)
    {
        this->_type = a._type;
    }
    return *this;
}

AAnimal::~AAnimal(void)
{
    std::cout << "AAnimal.cpp destructor called." << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
    std::cout << "AAnimal.cpp parameterized constructor called." << std::endl;
}

std::string AAnimal::getType(void) const
{
    return this->_type;
}
