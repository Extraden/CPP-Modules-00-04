#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
	std::cout << "PhoneBook created" << std::endl;
};

PhoneBook::PhoneBook(const PhoneBook& other)
{
	*this = other;
};

PhoneBook& PhoneBook::operator=(const PhoneBook& other) {
  (void) other;
	return (*this);
};

PhoneBook::~PhoneBook()
{
	std::cout << "Phonebook destroyed" << std::endl;
};
