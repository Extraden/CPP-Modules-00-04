#include "PhoneBook.hpp"
#include "utils.hpp"
#include <cctype>
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : _currentIndex(0), _contactsFilled(0) {};
PhoneBook::~PhoneBook() {};

int PhoneBook::addContact()
{
  _contacts[_currentIndex].setFirstName();
  _contacts[_currentIndex].setLastName();
  _contacts[_currentIndex].setNickname();
  
  _currentIndex = (_currentIndex + 1) % 8;
  if (_contactsFilled < 8)
    _contactsFilled++;
  return (0);
}

void PhoneBook::printHeader() const
{
  std::cout << std::setw(10) << std::right << "Index" << "|"
            << std::setw(10) << std::right << "First Name" << "|"
            << std::setw(10) << std::right << "Last Name" << "|"
            << std::setw(10) << std::right << "Nickname\n";
}

void		PhoneBook::printContacts() const
{
  this->printHeader();
  for (size_t i = 0; i < _contactsFilled; i++)
  {
    std::cout << std::setw(10) << std::right << i << "|";
    _contacts[i].printContactInfo();
  }
  std::cout << std::endl;
}

int PhoneBook::searchContact()
{
  std::string  input;
  int index;

  if (_contactsFilled == 0)
  {
    std::cout << "The Phonebook is empty!\n" << std::endl;
    return (0);
  }
  this->printContacts();
  while (1)
  {
    std::cout << "Enter index:\n";
    std::cin >> input;
    std::cout << std::endl;
    if (!isNumeric(input) || input.empty())
    {
      std::cout << "Incorrect index\nUsage: 0 - " << _contactsFilled - 1 << "\n" << std::endl;
      continue;
    }
    index = std::atoi(input.c_str());
    if (index > static_cast<int>(_contactsFilled - 1))
    {
      std::cout << "Index is out of scope. Try again\n" << std::endl;
      continue;
    }
    break;
  }
  this->printHeader();
  std::cout << std::setw(10) << std::right << index << "|";
  _contacts[index].printContactInfo();
  std::cout << std::endl;
  return (0);
}
