#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class	Contact
{
	public:
		Contact();
		~Contact();

		void	setFirstName();
		void	setLastName();
		void	setNickname();
		void	printContactInfo() const;

	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;
};


#endif
