#include "PhoneBook.hpp"
#include "utils.hpp"
#include <cctype>
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : _currentIndex(0), _contactsFilled(0) {};
PhoneBook::~PhoneBook() {};

void PhoneBook::addContact()
{
  _contacts[_currentIndex].setFirstName();
  _contacts[_currentIndex].setLastName();
  _contacts[_currentIndex].setNickname();
  _contacts[_currentIndex].setPhoneNumber();
  _contacts[_currentIndex].setDarkestSecret();
  
  _currentIndex = (_currentIndex + 1) % 8;
  if (_contactsFilled < 8)
    _contactsFilled++;
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
    if (!isNumeric(input) || input.empty())
    {
      std::cout << "Incorrect index\nUsage: 0 - " << _contactsFilled - 1 << "\n" << "\n";
      continue;
    }
    index = std::atoi(input.c_str());
    if (index > static_cast<int>(_contactsFilled - 1))
    {
      std::cout << "Index is out of scope. Try again\n" << "\n";
      continue;
    }
    break;
  }
  _contacts[index].printFullContactInfo();
  std::cout << "\n";
}
