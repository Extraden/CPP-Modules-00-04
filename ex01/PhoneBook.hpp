#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class	PhoneBook
{
	public:
		PhoneBook();
		PhoneBook(const PhoneBook& other);
		PhoneBook operator=(const PhoneBook& other);
		~PhoneBook();
	private:
		Contact	contacts[8];

};

#endif
