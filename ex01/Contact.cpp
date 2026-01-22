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

bool	Contact::setLastName()
{
	if (!readNonEmpty("Write last name: ", _lastName))
    return (false);
  return (true);
}


bool	Contact::setNickname()
{
	if (!readNonEmpty("Write nickname: ", _nickname))
    return (false);
  return (true);
}


bool	Contact::setPhoneNumber()
{
	if (!readNonEmpty("Write phone number: ", _phoneNumber))
    return (false);
  return (true);
}


bool	Contact::setDarkestSecret()
{
	if (!readNonEmpty("Write darkest secret: ", _darkestSecret))
    return (false);
  std::cout << "\n";
  return (true);
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
