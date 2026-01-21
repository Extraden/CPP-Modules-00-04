#include "Contact.hpp"
#include "utils.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact() {};
Contact::~Contact() {};

void	Contact::setFirstName()
{
	std::cout << "Write first name:\n";
	std::cin >> _firstName;
}

void	Contact::setLastName()
{
	std::cout << "Write last name:\n";
	std::cin >> _lastName;
}

void	Contact::setNickname()
{
	std::cout << "Write nickname:\n";
	std::cin >> _nickname;
}

void	Contact::printContactInfo() const
{
	std::cout << std::setw(10) << std::right << fmt10(_firstName) << "|";
	std::cout << std::setw(10) << std::right << fmt10(_lastName) << "|";
	std::cout << std::setw(10) << std::right << fmt10(_nickname) << "\n";
}
