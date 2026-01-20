#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <cstddef>

class	PhoneBook
{
	public:
		PhoneBook();
		PhoneBook(const PhoneBook& other);
		PhoneBook& operator=(const PhoneBook& other);
		~PhoneBook();
	int addContact(void);
	int	searchContact(void);
	int	printInfo(void);


	private:

		Contact	_contacts[8];
		size_t  _currentIndex;
		size_t	_contactsFilled;
};

#endif
