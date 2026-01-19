#include "Contact.hpp"
#include <iostream>

Contact::Contact()
{
	std::cout << "Contact created" << std::endl;
};

Contact::Contact(const Contact& other)
{
	*this = other;
};

Contact& Contact::operator=(const Contact& other)
{
	(void)other;
  return (*this);
};

Contact::~Contact()
{
	std::cout << "Contact is destroyed" << std::endl;
};

