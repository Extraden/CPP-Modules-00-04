#include "Contact.hpp"
#include "utils.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact() {};
Contact::~Contact() {};

void	Contact::setFirstName()
{
	std::cout << "Write first name: ";
	std::cin >> _firstName;
}

void	Contact::setLastName()
{
	std::cout << "Write last name: ";
	std::cin >> _lastName;
}

void	Contact::setNickname()
{
	std::cout << "Write nickname: ";
	std::cin >> _nickname;
}

void	Contact::setPhoneNumber()
{
	std::cout << "Write phone number: ";
	std::cin >> _phoneNumber;
}

void	Contact::setDarkestSecret()
{
	std::cout << "Write darkest secret: ";
	std::cin >> _darkestSecret;
  std::cout << "\n";
}

void	Contact::printBriefContactInfo() const
{
	std::cout << std::setw(10) << fmt10(_firstName) << "|"
	          << std::setw(10) << fmt10(_lastName) << "|"
	          << std::setw(10) << fmt10(_nickname) << "\n";
}

void	Contact::printFullContactInfo() const
{
	std::cout << _firstName << "\n"
            << _lastName << "\n"
            << _nickname << "\n"
            << _phoneNumber << "\n"
            << _darkestSecret << "\n";
}
