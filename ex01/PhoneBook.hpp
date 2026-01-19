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
    void  increment_index();

	private:
		Contact	contacts[8];
    size_t  current_index;
};

#endif
