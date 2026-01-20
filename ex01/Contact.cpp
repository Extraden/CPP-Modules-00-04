#include "Contact.hpp"
#include <iostream>

Contact::Contact() {};

Contact::Contact(const Contact& other)
{
	*this = other;
};

Contact& Contact::operator=(const Contact& other)
{
	(void)other;
  	return (*this);
};

Contact::~Contact() {};

void	Contact::setFirstName(void)
{
	std::cout << "Write first name:\n";
	std::cin >> _firstName;
}

void	Contact::setLastName(void)
{
	std::cout << "Write last name:\n";
	std::cin >> _lastName;
}

void	Contact::setNickname(void)
{
	std::cout << "Write nickname:\n";
	std::cin >> _nickname;
}

void	Contact::printContactInfo(void)
{
	std::cout << _firstName << " | ";
	std::cout << _lastName << " | ";
	std::cout << _nickname << "\n";
}