#include "PhoneBook.hpp"
#include "utils.hpp"
#include <cctype>
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : _currentIndex(0), _contactsFilled(0) {};
PhoneBook::~PhoneBook() {};

bool PhoneBook::addContact()
{
  Contact tmp;

  if (!tmp.setFirstName())
    return (false);
  if (!tmp.setLastName())
    return (false);
  if (!tmp.setNickname())
    return (false);
  if (!tmp.setPhoneNumber())
    return (false);
  if (!tmp.setDarkestSecret())
    return (false);

  _contacts[_currentIndex] = tmp;
  
  _currentIndex = (_currentIndex + 1) % 8;
  if (_contactsFilled < 8)
    _contactsFilled++;
  return (true);
}

void PhoneBook::printHeader() const
{
  std::cout << std::right 
            << std::setw(10) << "Index" << "|"
            << std::setw(10) << "First Name" << "|"
            << std::setw(10) << "Last Name" << "|"
            << std::setw(10) << "Nickname" << "\n";
}

void		PhoneBook::printContacts() const
{
  this->printHeader();
  for (size_t i = 0; i < _contactsFilled; i++)
  {
    std::cout << std::setw(10) << std::right << i << "|";
    _contacts[i].printBriefContactInfo();
  }
  std::cout << "\n";
}

void PhoneBook::searchContact()
{
  std::string  input;
  int index;

  if (_contactsFilled == 0)
  {
    std::cout << "The Phonebook is empty!\n" << "\n";
    return;
  }
  this->printContacts();
  while (1)
  {
    std::cout << "Enter index: ";
    if (!std::getline(std::cin, input))
      return;
    std::cout << "\n";
    if (input.size() != 1 || !std::isdigit(static_cast<unsigned char>(input[0])))
    {
      std::cout << "Incorrect index\nUsage: 0 - " << _contactsFilled - 1 << "\n\n";
      continue;
    }
    index = input[0] - '0';
    if (index >= static_cast<int>(_contactsFilled))
    {
      std::cout << "Index is out of range. Try again\nUsage: 0 - " << _contactsFilled - 1 << "\n\n";
      continue;
    }
    break;
  }
  _contacts[index].printFullContactInfo();
  std::cout << "\n";
}
