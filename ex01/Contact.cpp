#include "Contact.hpp"
#include "utils.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact() {};
Contact::~Contact() {};

bool	Contact::setFirstName()
{
  if (!readNonEmpty("Write first name: ", _firstName))
    return (false);
  return (true);
}

void	Contact::setLastName()
{
	std::cout << "Write last name: ";
  std::getline(std::cin, _lastName);
}

void	Contact::setNickname()
{
	std::cout << "Write nickname: ";
  std::getline(std::cin, _nickname);
}

void	Contact::setPhoneNumber()
{
	std::cout << "Write phone number: ";
  std::getline(std::cin, _phoneNumber);
}

void	Contact::setDarkestSecret()
{
	std::cout << "Write darkest secret: ";
  std::getline(std::cin, _darkestSecret);
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
	std::cout << "First Name: " << _firstName << "\n"
            << "Last Name: " << _lastName << "\n"
            << "Nickname: " << _nickname << "\n"
            << "Phone Number: " << _phoneNumber << "\n"
            << "Darkest Secret: " << _darkestSecret << "\n";
}
