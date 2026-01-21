#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <cstddef>

class	PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
	int addContact();
	int	searchContact();
  void  printHeader() const;
	void	printContacts() const;


	private:

		Contact	_contacts[8];
		size_t  _currentIndex;
		size_t	_contactsFilled;
};

#endif
