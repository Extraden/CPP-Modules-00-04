#include "PhoneBook.hpp"
#include "utils.hpp"
#include <cctype>
#include <cstddef>
#include <cstdlib>
#include <iostream>

PhoneBook::PhoneBook() : _currentIndex(0), _contactsFilled(0) {};

PhoneBook::PhoneBook(const PhoneBook& other)
{
	*this = other;
};

PhoneBook& PhoneBook::operator=(const PhoneBook& other) {
  (void) other;
	return (*this);
};

PhoneBook::~PhoneBook() {};

int PhoneBook::addContact(void)
{
  _contacts[_currentIndex].setFirstName();
  _contacts[_currentIndex].setLastName();
  _contacts[_currentIndex].setNickname();
  
  _currentIndex = (_currentIndex + 1) % 8;
  if (_contactsFilled < 8)
    _contactsFilled++;
  return (0);
}

int		PhoneBook::printInfo(void)
{
  std::cout << "First Name | Last Name | Nickname\n";
  for (size_t i = 0; i < _contactsFilled; i++)
  {
    std::cout << i << " ";
    _contacts[i].printContactInfo();
  }
  return (0);
}

int PhoneBook::searchContact(void)
{
  std::string  input;

  this->printInfo();
  std::cout << "Enter index:\n";
  std::cin >> input;
  if (!isNumeric(input) || input.empty())
    std::cout << "Incorrect index\nUsage: 0 - " << _contactsFilled - 1 << "\n";
  int index = std::atoi(input.c_str());
  if (index > static_cast<int>(_contactsFilled))
    std::cout << "Index is out of scope. Try again\n";
  _contacts[index].printContactInfo();
  return (0);
}